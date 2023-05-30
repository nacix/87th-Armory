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

params ["_droid"];
TRACE_1("onDeathB1", _droid);

// Pick a random death sound and animation for our droid
LOG_1("(onDeathB1) [%1]: Playing random death sound...", _droid);
[_droid, selectRandom ["B1_DeathSound_1", "B1_DeathSound_2", "B1_DeathSound_3", "B1_DeathSound_4", "B1_DeathSound_5", "B1_DeathSound_6", "B1_DeathSound_7", "B1_DeathSound_8"], 90, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
private _anim = selectRandom ["B1_Droid_die_1", "B1_Droid_die_2", "B1_Droid_die_3"];

// Reset the move and action states of our droid
LOG_1("(onDeathB1) [%1]: Resetting move state...", _droid);
[_droid, _anim] remoteExec ["switchMove", 0];
_droid playActionNow "Disable_Gesture";

// Set the animation speed of the second and third death animations accordingly
LOG_1("(onDeathB1) [%1]: Generating random death animation...", _droid);
if (_anim isNotEqualTo "B1_Droid_die_1") then {
    if (_anim isEqualTo "B1_Droid_die_2") exitWith { [_droid, 0.8] remoteExec ["setAnimSpeedCoef", 0] };
    if (_anim isEqualTo "B1_Droid_die_3") exitWith { [_droid, 0.5] remoteExec ["setAnimSpeedCoef", 0] };
};