#include "script_component.hpp"

params ["_superDroid", "_target"];
TRACE_1("doExecutionB2", _superDroid);

// Disable conflicting AI features
/*
["MINEDETECTION", "SUPPRESSION", "COVER", "AIMINGERROR", "FSM"] apply { _droid disableAI _x };
_droid setBehaviour "CARELESS";
*/

// Disable our droid's AI and start a melee animation
_superDroid disableAI "ALL";
[_superDroid, "B2_SupperBattleDroid_melee"] remoteExec ["switchMove", 0];

[{
    // Exit this scope if our droid isn't in a melee animation
    if (animationState _this isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _this enableAI "ALL" };

    // Play a random *something* sound (I have no clue what these sounds actually are because the naming conventions are dogwater)
    [_this, selectRandom ["generis_empty_4","generis_empty_5","generis_empty_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
}, _superDroid, 0.1] call CBA_fnc_waitAndExecute;

[{
    params ["_superDroid", "_target"];

    // Exit this scope if the droid is 
    if (animationState _superDroid isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _superDroid enableAI "ALL" };

    // If our droid is able to speak, we block overlapping voice lines, play a random combat callout, and unlock speech when their line has completed.
    if (isNil {_superDroid getVariable "B2Speak"}) then {
        _superDroid setVariable ["B2Speak", 1];
        [_superDroid, selectRandom ["WBK_b2_firing_1","WBK_b2_firing_2","WBK_b2_firing_3","WBK_b2_firing_4","WBK_b2_firing_5"], 60] call CBA_fnc_globalSay3d;
        [{ _this setVariable ["B2Speak", nil] }, _superDroid, 3] call CBA_fnc_waitAndExecute;
    };

    // Get the nearest target to our droid and check if he's eligible to get clobbered to death
    if (_target distance _superDroid <= 2.25) then {
        // Kill the target and play a fatality hit sound
        _target setDamage 1;
        [_target, "dobi_CriticalHit", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

        // Play a random death animation on the target and set their static direction
        [_target, selectRandom ["lightsaber_death_11","lightsaber_death_20","lightsaber_death_5","lightsaber_death_8"]] remoteExec ["switchMove", 0];
        [_target, _target getDir _superDroid] remoteExec ["setDir", 0];
    };
}, [_superDroid, _target], 0.2] call CBA_fnc_waitAndExecute;

[{
    // Exit this scope if our unit is not 
    if (animationState _this isNotEqualTo "B2_SupperBattleDroid_melee") exitWith { _this enableAI "ALL" };

    // Re-enable our droid's AI
    _this enableAI "ALL";

    // Reset our droid's movement state
    [_this, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
}, _superDroid, 1.1] call CBA_fnc_waitAndExecute;