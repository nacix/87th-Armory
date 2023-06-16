#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles B2 droid execution events.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 * 1: The victim <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget, player] call ax87_cis_units_fnc_doExecutionB2;
 *
 * Public: No
*/

params ["_droid", "_target"];
TRACE_1("doExecutionB2", _droid);

// Disable conflicting AI features
/*
["MINEDETECTION", "SUPPRESSION", "COVER", "AIMINGERROR", "FSM"] apply { _droid disableAI _x };
_droid setBehaviour "CARELESS";
*/

// Disable our droid's AI and start a melee animation
_droid disableAI "ALL";
[_droid, "B2_SupperBattleDroid_melee"] remoteExec ["switchMove", 0];

[{
    params ["_droid"];

    // Exit this scope if our droid isn't in a melee animation
    if (animationState _droid isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _droid enableAI "ALL" };

    // Play a random *something* sound (I have no clue what these sounds actually are because the naming conventions are dogwater)
    [_droid, selectRandom ["generis_empty_4","generis_empty_5","generis_empty_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
}, _droid, 0.1] call CBA_fnc_waitAndExecute;

[{
    params ["_droid", "_target"];

    // Exit this scope if the droid is 
    if (animationState _droid isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _droid enableAI "ALL" };

    [_droid, selectRandom ["WBK_b2_firing_1","WBK_b2_firing_2","WBK_b2_firing_3","WBK_b2_firing_4","WBK_b2_firing_5"], 60, 3] call FUNC(sayPhrase);

    // Get the nearest target to our droid and check if he's eligible to get clobbered to death
    if (_target distance _droid <= 2.25) then {
        // Kill the target and play a fatality hit sound
        _target setDamage 1;
        [_target, "dobi_CriticalHit", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

        // Play a random death animation on the target and set their static direction
        [_target, selectRandom ["lightsaber_death_11","lightsaber_death_20","lightsaber_death_5","lightsaber_death_8"]] remoteExec ["switchMove", 0];
        [_target, _target getDir _droid] remoteExec ["setDir", 0];
    };
}, [_droid, _target], 0.2] call CBA_fnc_waitAndExecute;

[{
    params ["_droid"];

    // Exit this scope if our unit is not 
    if (animationState _this isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _this enableAI "ALL" };

    // Re-enable our droid's AI
    _this enableAI "ALL";

    // Reset our droid's movement state
    [_this, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
}, _droid, 1.1] call CBA_fnc_waitAndExecute;