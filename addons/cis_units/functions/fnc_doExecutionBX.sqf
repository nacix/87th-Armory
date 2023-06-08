#include "script_component.hpp"

params ["_droid", "_victim"];

private _finisherType = selectRandom ["SWORD", "CHOKE", "STOMP"];

switch (_finisherType) do {
    case "SWORD": {[
        "SM_Sword_Execution",
        "SM_Sword_Execution_Victim",
        0,
        0.1
    ]};
    case "CHOKE": {[
        "Human_Execution_GenericOnehanded_headSmash_1_main",
        "Human_Execution_GenericOnehanded_headSmash_1_victim",
        1.25,
        0.5
    ]};
    case "STOMP": {[
        "SM_Fists_Execution_main",
        "SM_Fists_Execution_victim",
        0,
        0.3
    ]};
    default { ["", ""] };
} params ["_droidAnim", "_victimAnim", "_attachPos", "_codeDelay"];

// Set our droid's combat/melee variable states
_droid disableAI "ALL";
_droid setVariable ["canMakeAttack", 1];
_droid setVariable ["AI_CanTurn", 1];
_droid setVariable ["actualSwordBlock", 0, true];

// Execute our droid's finisher animation
[_droid, _droidAnim] remoteExec ["switchMove", 0, false];

// Execute the victim's death animation
[_victim, _victimAnim] remoteExec ["switchMove", 0, true];
[_victim, _victimAnim] remoteExec ["switchMove", 0, true];

// Disable gesture changes on both units
[_droid, "Disable_Gesture"] remoteExec ["playActionNow", _droid];
[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];

// Attach the victim to our droid for the finisher animation
_victim attachTo [_droid, [0, _attachPos, 0]];
_victim setDamage 1;

[{
    params ["_droid", "_victim", "_finisherType"];

    if (_finisherType isEqualTo "SWORD" && animationState _droid isNotEqualTo "SM_Sword_Execution" || !alive _unit) exitWith { detach _victim };
    // [_victim, "dobi_criticalHit", 20, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
    // sleep 0.3;

    if (_finisherType isNotEqualTo "CHOKE") then {
        // Get a list of playable melee sounds and play a random one
        _meleeSound = selectRandom (parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _droid >> "IMS_Melee_Param_Sounds"));
        [_droid, _meleeSound, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

        [{
            [_this, {
                params ["_victim", "_finisherType"];

                _blood = "#particlesource" createVehicleLocal (getPosATL _victim);
                _blood attachTo [_victim, [0, 0, 0], ["Spine3", "neck"] select (_finisherType isEqualTo "STOMP")];

                _blood setParticleParams [
                    ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],
                    "",
                    "billboard",
                    0.1, 5,
                    [0, 0, 0],
                    [0.5 + random -1, 0.5 + random -1, 1],
                    1, 1, 0.3, 1,
                    [0.2, 4],
                    [[1, 1, 1, 0.12], [0.01, 0.01, 0.01, 0.0]],
                    [0.00001],
                    0.4,
                    0.4,
                    "",
                    "",
                    "",
                    360,
                    false,
                    0
                ];
                _blood setDropInterval 0.003;

                [{
                    params ["_victim"];

                    // Delete the blood particle generator
                    deleteVehicle _blood;

                    // Create a random blood pool on the victim
                    _rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F", "BloodPool_01_Medium_New_F"];
                    _deathBlood = _rndBlood createVehicleLocal getPosATL _victim;
                    _deathBlood attachTo [_victim, [0.3, 0.7, 0]];

                    // Detach the blood pool from the victim and set its direction properly
                    detach _deathBlood;
                    _deathBlood setDir (random 360);

                    // Set the blood pool to be flush with the terrain it's resting on
                    _deathBlood setVectorUp surfaceNormal position _deathBlood;
                }, _victim, 0.5] call CBA_fnc_waitAndExecute;
            }] remoteExecCall ["call", [0, -2] select isDedicated, false];
        }, [_victim, _finisherType], 1.5] call CBA_fnc_waitAndExecute;

        if (_finisherType isEqualTo "STOMP") then {
            [_victim, selectRandom ["leg_hit1", "leg_hit2", "leg_hit3"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

            [{
                params ["_droid", "_victim"];

                [_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

                [_droid, selectRandom ["loud_scream_1", "loud_scream_2"], 120, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
            }, [_droid, _victim], 2.3] call CBA_fnc_waitAndExecute;
        } else {
            _meleeSound = selectRandom (parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _droid >> "IMS_Melee_Param_SoundsOnHit"));
            [_droid, _meleeSound, 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

            [{
                params ["_droid", "_victim"];

                // Cancel the current call if our droid is already in an execution animation
                if (animationState _droid != "SM_Sword_Execution") exitWith { detach _victim };

                // Select a random head-gore effect and play it
                [_droid, selectRandom ["sword_headgore_1", "sword_headgore_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
            }, [_droid, _victim], 3] call CBA_fnc_waitAndExecute;
        };

        [{
            params ["_droid", "_victim"];

            // Cancel the current call if our droid is already in an execution animation
            if (animationState _droid isNotEqualTo "SM_Sword_Execution") exitWith { detach _victim };

            [_droid, selectRandom ["BX_EnemyDown_1", "BX_EnemyDown_2", "BX_EnemyDown_3", "BX_EnemyDown_4"], 60, 3] call FUNC(sayPhrase);
        }, [0.9, 1.8] select (_finisherType isEqualTo "STOMP")] call CBA_fnc_waitAndExecute;
    } else {
        [_victim, "dobi_fall_2", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
    }
}, [_droid, _victim, _finisherType], _codeDelay] call CBA_fnc_waitAndExecute;

[{
    params ["_droid", "_victim"];

    // Detach the victim from our droid
    detach _victim;

    // Reset the animation state of our droid
    [_droid, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];
    _droid setVariable ["canMakeAttack", 0];
    _droid setVariable ["AI_CanTurn", 0];
    _droid enableAI "ALL";
}, [_droid, _victim], ([0, 0.4] select (_finisherType isEqualTo "STOMP")) + 6 + _codeDelay] call CBA_fnc_waitAndExecute;