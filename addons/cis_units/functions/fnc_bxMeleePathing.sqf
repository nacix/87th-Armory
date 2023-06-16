#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles BX droid pathfinding while it's in melee mode.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_bxMeleePathing;
 *
 * Public: No
*/

params ["_droid"];

private _findPathPFH = [{
	params ["_droid"];
	
	if ((lifeState _droid isEqualTo "INCAPACITATED") || (animationState _droid isEqualTo "starWars_force_podniati_victim_anim")) exitWith { _droid allowDamage true };

	private _nearEnemy = _droid findNearestEnemy _droid;

	// True if the enemy target and the droid are alive
	if (!(isNull _nearEnemy) && (alive _nearEnemy) && (alive _droid)) then {
		// Check the visiblity of the enemy target
		private _targetVisibility = lineIntersectsSurfaces [
			AGLToASL (_nearEnemy modelToWorld [0, 0, 0.9]),
			AGLToASL (_droid modelToWorld [0, 0, 0.9]),
			_droid,
			_nearEnemy,
			true,
			1,
			"GEOM",
			"NONE"
		];

		// Exit the script if our droid isn't able to interact with its target
		if ((_droid getVariable "AI_CanTurn" == 0) && (isTouchingGround _droid) && (count _targetVisibility == 0) && (_droid distance _nearEnemy < 15) && ((getPosATL _nearEnemy select 2) < 1.45) && (lifeState _droid isNotEqualTo "INCAPACITATED")) exitWith {
			_droid disableAI "PATH";
			_droid disableAI "ANIM";
			doStop _droid;

			// Execute the script to make the droid push the target with a random animation
			[_droid, selectRandom ["melee_SprintF", "melee_SprintFl", "melee_SprintFr"]] call FUNC(bxDoPush);

			// Set the droid's velocity to simulate an advancing jump
			_dir = [[0, 1, 0], -([_droid, _nearEnemy] call BIS_fnc_dirTo)] call BIS_fnc_rotateVector2D;
			_droid setVelocityTransformation [
				getPosASL _droid,
				getPosASL _droid,
				[0, 0, (velocity _droid select 2) - 1],
				[(velocity _droid select 0), (velocity _droid select 1), (velocity _droid select 2) - 1],
				vectorDir _droid,
				_dir,
				vectorUp _droid,
				vectorUp _droid,
				0.1
			];
		};
	};
}, 0.01, _droid] call CBA_fnc_addPerFrameHandler;

SETVAR(_droid, GVAR(findPathPFH), _findPathPFH);

private _moveToPathPFH = [{
	params ["_droid"];

	// True if the enemy target and the droid are alive
	private _nearEnemy = _droid findNearestEnemy _droid;

	if (!(isNull _nearEnemy) && (alive _nearEnemy) && (alive _droid)) then {
		// Check the visiblity of the enemy target
		_targetVisibility = lineIntersectsSurfaces [
			AGLToASL (_nearEnemy modelToWorld [0, 0, 0.9]),
			AGLToASL (_droid modelToWorld [0, 0, 0.9]),
			_droid,
			_nearEnemy,
			true,
			1,
			"GEOM",
			"NONE"
		];
		
		// Enable our droid's pathfinding and have it advance towards the target if everything's valid.
		if ((_droid distance _nearEnemy > 15) || (count _targetVisibility != 0) || ((getPosATL _nearEnemy select 2) >= 1.45)) exitWith {
			_droid enableAI "PATH";
			_droid enableAI "ANIM";
			_droid enableAI "MOVE";
			_droid doMove [getPos _nearEnemy select 0, getPos _nearEnemy select 1, 0];
		};
	} else {
		// Ensure the droid's pathfinding AI is still active
		_droid enableAI "PATH";
		_droid enableAI "ANIM";
		_droid enableAI "MOVE";
	};
}, 1.2, _droid] call CBA_fnc_addPerFrameHandler;

SETVAR(_droid, GVAR(moveToPathPFH), _moveToPathPFH);