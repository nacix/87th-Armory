#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Handles initialization of B1 units and makes calls to PFH/EHs
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("handleB1", _droid);

// TODO: Remove spawn calls so we can break these out of scheduled hell
// TODO: Doc header
// TODO: Add chance of droid incapacitation for detonator suicide function
// TODO: Move internal functions to their own files

// Handles player-controlled B1 units
if (isPlayer _droid) exitWith {
	LOG_1("(handleB1) [%1]: B1 Droid is a Player! Terminating AI-specific systems...", _droid);
	_droid setVariable ["disableUnitSFX", 1, true];
	_droid removeAllEventHandlers "Killed"; // TODO: Remove this shit
	
	// Add EH to handle droid death
	_droid addEventHandler ["Killed", { [_this select 0] call FUNC(handleB1Death) }];
};

// Disable conflicting AI modules
["MINEDETECTION", "SUPPRESSION", "COVER", "AIMINGERROR"] apply { _droid disableAI _x };

// Set up droid identity data
LOG_1("(handleB1) [%1]: Setting up droid identity data...", _droid);
_droid allowFleeing 0; // Prevents droid from retreating
_droid setSpeaker "NoVoice"; // Disables default ArmaMan voice(s)
_droid setSkill 0.3;
_droid setVariable ["disableUnitSFX", 1, true]; // Disables SFX on our droid
_droid removeAllEventHandlers "Killed"; // TODO: Remove this shit too
_droid setUnitPos "UP"; // Forces our droid to stand (at least until it gets overridden from another AI mod)

LOG_1("(handleB1) [%1]: Setting up droid eventHandlers...", _droid);

// Add EH to handle droid death
_droid addEventHandler ["Killed", { [_this select 0] call FUNC(onDeathB1) }];

// Add EH to handle droid damage events
_droid addEventHandler ["HandleDamage", { _this call FUNC(handleDamageB1) }];

// Add EH to handle droid firing events
_droid addEventHandler ["Fired", { [_this select 0] call FUNC(fireB1) }];

// Add PFH to await melee opportunity (0.4s interval)
private _meleeOpportunityPFH = [{ [(_this select 0) select 0] call FUNC(meleeB1) }, 0.4, [_droid]] call CBA_fnc_addPerFrameHandler;

// Add PFH to await detonator suicide attempt (2s interval)
private _animHandlerPFH = [{ [(_this select 0) select 0] call FUNC(handleAnimB1) }, 2, [_droid]] call CBA_fnc_addPerFrameHandler;

// Add PFH to handle our droid's rudimentary pathfinding (10s interval)
private _pathfindingPFH = [{
	private _droid = (_this select 0) select 0;

	// Move our droid towards the nearest detected enemy
	private _nearEnemy = _droid findNearestEnemy _droid;
	if (!(isNull _nearEnemy) && alive _droid) then { 
		LOG_1("(handleB1) [%1]: Enemy detected! Beginning pathfinding...", _droid);
		_droid doMove (getPos _nearEnemy) 
	};
}, 10, [_droid]] call CBA_fnc_addPerFrameHandler;

// TODO: For the love of Allah, move this to the future killedEH because this implementation is dogshit
// TODO: Consider PFH handling
// Handle the death of our droid
[{ !alive _droid || isNull droid }, {
	params ["_droid", "_animHandlerPFH", "_meleeOpportunityPFH", "_pathfindingPFH"];

	// Clean-up redundant EH instances
	LOG_1("(handleB1) [%1]: This unit has died! Cleaning up redundant eventHandlers...", _droid);
	[_animHandlerPFH] call CBA_fnc_removePerFrameHandler;
	[_meleeOpportunityPFH] call CBA_fnc_removePerFrameHandler;
	[_pathfindingPFH] call CBA_fnc_removePerFrameHandler;
}, [_droid, _animHandlerPFH, _meleeOpportunityPFH, _pathfindingPFH], -1] call CBA_fnc_waitUntilAndExecute;