#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Selects a random clone face then assigns it to the provided unit. Also assigns a rank and designation.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset or custom face list <STRING|ARRAY>
 *      1.1: Face ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 * 2: Unit designation <STRING> (Optional | default="CT")
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [player, "NCO"] call ax87_clones_fnc_setUnitIdentity; // Selects face from NCO profile with default voice
 * [player, ["WhiteHead_02", 0.5, "AsianHead_A3_02", 0.5]] call ax87_clones_fnc_setUnitIdentity; // Selects face from array with default designation
 * [player, "WhiteHead_02", "RC"] call ax87_clones_fnc_setUnitIdentity; // Applies face and sets designation to "RC"
 *
 * Public: No
*/

params ["_droid", "_victim"];
TRACE_2("doExecutionB1", _droid, _victim);

LOG_1("(doExecutionB1) [%1]: Initializing execution animations...", _droid);

// Disable our droid's AI so it doesn't do anything silly
_droid disableAI "ALL";

// Begin execution animations on our droid and its victim
[_droid, "B1_Droid_execution_main"] remoteExec ["switchMove", 0];
[_victim, "B1_Droid_execution_victim"] remoteExec ["switchMove", 0];
[_droid, "Disable_Gesture"] remoteExec ["playActionNow", _droid];
[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];

LOG_2("(doExecutionB1) [%1]: Killing victim [%2]...", _droid, _victim);

// Kill the victim and attach them to our droid
_victim setDamage 1;
_victim attachTo [_droid, [0, 1.4, 0]];
[_victim, 180] remoteExec ["setDir", 0];

[{
	LOG_1("(doExecutionB1) [%1 - Victim]: Playing melee hit sound on...", _this);

	// Play a random melee swing sound
	[_this, selectRandom ["melee_swing_equipment_1", "melee_swing_equipment_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	
	// Play a random melee hit sound
	[{[_this, "dobi_bones", 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"}, _this, 0.1] call CBA_fnc_waitAndExecute;
	LOG_1("(doExecutionB1) [%1] - Victim: Melee hit sound complete!", _this);
}, _victim, 0.1] call CBA_fnc_waitAndExecute;

[{
	// Play a random execution sound
	LOG_1("(doExecutionB1) [%1]: Selecting random finisher sound...", _droid);
	if (random 100 <= 15) then {
		[_this, "B1_execution_cloneSnd_easterEgg", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	} else {
		[_this, "B1_execution_cloneSnd", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	};
}, _victim, 0.9] call CBA_fnc_waitAndExecute;

[{
	params ["_droid", "_victim"];

	LOG_3("(doExecutionB1) [%1]: Cleaning up attachments between attacker [%2] and victim [%3]...", _droid, _droid, _victim);

	_droid forceWeaponFire [weaponState _droid select 1, weaponState _droid select 2]; // Invoke a weapon event on our droid
	detach _victim; // Detach the victim from our droid
}, [_droid, _victim], 1.9] call CBA_fnc_waitAndExecute;

[{
	LOG_1("(doExecutionB1) [%1]: Playing killer taunt sound and resetting weapon action...", _droid);

	[_this, selectRandom ["B1_EnemyKilled_1", "B1_EnemyKilled_2"], 60] call CBA_fnc_globalSay3d; // Play a random taunt sound
	_this playActionNow "B1_GunHolding"; // Attempt to reset our droid's action back to their normal weapon stance
}, _droid, 2.4] call CBA_fnc_waitAndExecute;

[{
	LOG_1("(doExecutionB1) [%1]: Re-enabling AI functionality and resetting state...", _droid);

	// Re-enable our droid's AI once their animation has fully-completed
	if (!(animationState _this isEqualTo "B1_Droid_execution_main")) exitWith { _this enableAI "ALL" };

	// Perform extra calls for action and AI state resets in case of any unforeseen issues
	_this playActionNow "B1_GunHolding";
	[_this, "AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
	_this enableAI "ALL";
}, _droid, 2.6] call CBA_fnc_waitAndExecute;