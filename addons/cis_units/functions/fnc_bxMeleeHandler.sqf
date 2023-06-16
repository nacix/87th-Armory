#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles BX droid melee opportunities in tandem with the fnc_bxMeleeCombat. This script manages our droid's melee state and tells it when to cycle weapons
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_bxMeleeHandler;
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("bxMeleeHandler", _droid);

// Call the melee combat script
[_droid, false] call FUNC(bxMeleeCombat);
LOG_1("(bxMeleeHandler) [%1]: Calling bxMeleeCombat...", _droid);

[{
	params ["_droid"];

	private _foundValidTarget = false;
	{
		if (_foundValidTarget) exitWith {};

		private _targetVisibility = lineIntersectsSurfaces [
			AGLToASL (_x modelToWorld [0, 0, 0.9]),
			AGLToASL (_droid modelToWorld [0, 0, 0.9]),
			_droid,
			_x,
			true,
			1,
			"GEOM",
			"NONE"
		];

		_foundValidTarget = ((count _targetVisibility == 0) && (side _x != side _droid) && (handgunWeapon _x in IMS_Melee_Weapons) && (alive _x) && ((getPosATL _x select 2) < 1.45));
	} forEach (_droid nearEntities ["Man", 15]);
	
	_foundValidTarget;
},
{
	params ["_droid"];

	LOG_1("(bxMeleeHandler) [%1]: Starting weapon switch event...", _droid);

	// Remove the old melee PFH
	GETVAR(_droid, GVAR(meleeOpportunityPFH), -1) call CBA_fnc_removePerFrameHandler;
	SETVAR(_droid, GVAR(meleeOpportunityPFH), -1);

	if (!alive _droid) exitWith {};

	// Set up all the combat-state variables
	SETVAR(_droid, GVAR(isUnitAI), 1);
	SETVAR(_droid, GVAR(isPlayingAnim), 0);
	SETVAR(_droid, GVAR(isBlocking), 0);
	SETVAR(_droid, GVAR(canAttack), 1);
	SETVAR(_droid, GVAR(canTurn), 0);
	SETVAR(_droid, GVAR(concentration), 0.7);
	SETVAR(_droid, GVAR(swapFromMelee), 0);

	LOG_1("(bxMeleeHandler) [%1]: Invoking weapon switch actions...", _droid);

	// Disable SFX
	_droid setVariable ["disableUnitSFX", 1, true];

	// Play the two-handed equip animation on the droid
	for _i from 0 to 2 do { [_droid, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", _droid] };

	// Play a weapon swtich sound on our droid
	[_droid, selectRandom ["BX_SwitchingMelee_1", "BX_SwitchingMelee_2"], 60, 3] call FUNC(sayPhrase);
	
	[{
		params ["_droid"];

		if (!alive _droid) exitWith {};

		SETVAR(_droid, GVAR(canAttack), 0);

		// Switch our droid's move to the melee idle animation and play an equip sound
		[_droid, "generic_in", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_droid, "melee_armed_idle"] remoteExec ["switchMove", 0];
		
		// Call melee-mode scripts
		[_droid, true] call FUNC(bxMeleeCombat);
		_droid call FUNC(bxMeleePathing);

		private _meleeOpponentPFH = [{
			params ["_droid"];

			// Get the number of humanoid enemies near our droid
			private _meleeOpponents = {
				((side _x != side _droid) && (handgunWeapon _x in IMS_Melee_Weapons) && (alive _x) && ((getPosATL _x select 2) < 1.45))
			} count (_droid nearEntities ["Man", 15]);

			if (_meleeOpponents == 0) then { SETVAR(_droid, GVAR(swapFromMelee), 1) };
		}, 0.5, _droid] call CBA_fnc_addPerFrameHandler;
		SETVAR(_droid, GVAR(meleeOpponentPFH), _meleeOpponentPFH);

		[{ (isNull _this || { !alive _this || (GETVAR(_this, GVAR(swapFromMelee), 0) == 1) }) },
		{
			params ["_droid"];

			// Remove all the old melee PFHs
			LOG_1("(bxMeleeHandler) [%1]: Removing deprecated eventHandlers...", _droid);

			GETVAR(_droid, GVAR(findPathPFH), -1) call CBA_fnc_removePerFrameHandler;
			SETVAR(_droid, GVAR(findPathPFH), -1);

			GETVAR(_droid, GVAR(moveToPathPFH), -1) call CBA_fnc_removePerFrameHandler;
			SETVAR(_droid, GVAR(moveToPathPFH), -1);

			GETVAR(_droid, GVAR(meleeOpponentPFH), -1) call CBA_fnc_removePerFrameHandler;
			SETVAR(_droid, GVAR(meleeOpponentPFH), -1);

			GETVAR(_droid, GVAR(meleeCombatPFH), -1) call CBA_fnc_removePerFrameHandler;
			SETVAR(_droid, GVAR(meleeCombatPFH), -1);

			// _droid removeAllEventHandlers "HandleDamage";

			if (!alive _droid) exitWith {};

			// Disable conflicting AI modules on our droid
			LOG_1("(bxMeleeHandler) [%1]: Disabling redundant AI features...", _droid);
			["MINEDETECTION", "WEAPONAIM", "SUPPRESSION", "COVER", "AIMINGERROR", "TARGET", "AUTOCOMBAT", "FSM"] apply { _droid disableAI _x };

			// Enable relevant AI modules on our droid
			LOG_1("(bxMeleeHandler) [%1]: Enabling relevant AI features...", _droid);
			_droid setBehaviour "AWARE";
			["PATH", "ANIM", "MOVE"] apply { _droid enableAI _x };

			// Make our droid speak a random elimination callout
			[_droid, selectRandom ["BX_EnemyDown_1", "BX_EnemyDown_2", "BX_EnemyDown_3", "BX_EnemyDown_4"], 60, 3] call FUNC(sayPhrase);
			LOG_1("(bxMeleeHandler) [%1]: Making enemy-eliminated callout...", _droid);

			// Switch our droid to the sheathing animation
			for _i from 0 to 2 do { [_droid, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _droid] };

			private _bxAnimList = [
				"Human_Execution_GenericOnehanded_headSmash_1_main",
				"Human_Execution_GenericTwoHanded_headSmash_main",
				"Human_Execution_GenericUnconscious_main",
				"Star_Wars_executionOnHuman_1_main",
				"Star_Wars_executionOnHuman_2_main",
				"Human_Execution_GenericHeavy_main",
				"SM_Execution_ChainSaw_main",
				"SM_Fists_Execution_main",
				"SM_Sword_Execution"
			];

			private _weaponSwitchDelay = [0.7, 4.7] select (animationState _droid in _bxAnimList);

			[{
				params ["_droid"];

				if (!alive _droid) exitWith {};

				// Switch our droid to the melee idle animation and reset their moveState
				[_droid, "generic_out", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				[_droid, "AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];

				// Recursively-call this script
				LOG_1("(bxMeleeHandler) [%1]: Making recursive call...", _droid);
				_droid call FUNC(bxMeleeHandler);
			}, _droid, _weaponSwitchDelay] call CBA_fnc_waitAndExecute;
		}, _droid] call CBA_fnc_waitUntilAndExecute;
	}, _droid, 0.55] call CBA_fnc_waitAndExecute;
}, _droid] call CBA_fnc_waitUntilAndExecute;