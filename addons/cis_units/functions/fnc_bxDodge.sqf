#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Makes the provided droid dodge an attack and either perform a melee attack or throw a grenade.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_commandoDroid] call ax87_cis_units_fnc_bxDodge;
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("bxDodge", _droid);

// Perform our droid's dodge animation
[_droid, "SW_FIGHT_DROID_COMMANDO_DODGING"] remoteExec ["switchMove", 0];
[_droid, "roll_sound", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

// Set our droid's combat-state variables
SETVAR(_droid, GVAR(isBlocking), 1);
SETVAR(_droid, GVAR(canAttack), 1);
SETVAR(_droid, GVAR(canTurn), 1);

[{
    params ["_droid"];

    switch (selectRandom ["MELEE", "GRENADE"]) do {
        case "MELEE": {
            if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

            LOG_1("(bxDodge) [%1]: Attempting MELEE dodge action...", _droid);

            // Make our droid perform a jump/dodge and restrict their turning
            [_droid, [-12 * (sin (getdir _droid)), -12 * (cos (getdir _droid)), 2]] remoteExec ["setVelocity", _droid];
            [{ SETVAR(_this, GVAR(canTurn), 0) }, _droid, 0.7] call CBA_fnc_waitAndExecute;

            [{
                params ["_droid"];

                if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

                // Play an applicable melee sound from our droid
                _meleeSound = selectRandom (parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _droid >> "IMS_Melee_Param_Sounds"));
                [_droid, _meleeSound, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

                // Un-restrict our droid's turning
                SETVAR(_droid, GVAR(canTurn), 1);

                {
                    _x params ["_delay", "_velocity"];
                    [{
                        params ["_droid", "_velocity"];

                        if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};
                    
                        // Make our droid perform a scripted jump/dodge through IMS and set their velocity appropriately
                        [_droid, "SW_FIGHT_DROID_COMMANDO_DODGING"] spawn setHitOrDeflect_Around;
                        [_droid, [_velocity * (sin (getdir _droid )), _velocity * (cos (getdir _droid)), 1.2]] remoteExec ["setVelocity", _droid];
                        LOG_1("(bxDodge) [%1]: Performing MELEE jump...", _droid);
                    }, [_droid, _velocity], _delay] call CBA_fnc_waitAndExecute;
                } forEach [[0, 6], [0.3, 10]];
            }, _droid, 1.2] call CBA_fnc_waitAndExecute;

            [{
                params ["_droid"];

                if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

                // Restrict the droid's turning and send our dodge animation to IMS
                SETVAR(_droid, GVAR(canTurn), 0);
                [_droid, "SW_FIGHT_DROID_COMMANDO_DODGING"] spawn setHitOrDeflect_Around;
            }, _droid, 1.7] call CBA_fnc_waitAndExecute;

            [{
                params ["_droid"];

                if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

                // Make our droid perform a block animation
                [_droid, "melee_armed_idle"] remoteExec ["switchMove", 0];
                [_droid, "twoHanded_block"] remoteExec ["playActionNow", _droid];

                // Switch our droid's animation to running
                _droid playMoveNow "melee_armed_runB";

                // Reset our droid's combat-state variables
                SETVAR(_droid, GVAR(isBlocking), 0);
                SETVAR(_droid, GVAR(canAttack), 0);
                SETVAR(_droid, GVAR(canTurn), 0);
            }, _droid, 2.8] call CBA_fnc_waitAndExecute;

            [{
                params ["_droid"];

                // Reset our droid's blocking and gesture states
                SETVAR(_droid, GVAR(isBlocking), 0);
                [_droid, "Disable_Gesture"] remoteExec ["playActionNow", _droid];

                LOG_1("(bxDodge) [%1]: MELEE dodge action completed!", _droid);
            }, _droid, 3] call CBA_fnc_waitAndExecute;
        };
        case "GRENADE": {
            LOG_1("(bxDodge) [%1]: Starting GRENADE dodge action...", _droid);

            // Create an explosive object at our droid's positon for use as a grenade
            private _grenade = createMine ["BombCluster_02_UXO3_F", position _droid, [], 0];

            [{
                params ["_grenade"];

                // Grab every human entity and damage them if they're in range of our grenade
                {
                    if (alive _x && _x != _grenade) then {
                        if (lifeState _target isEqualTo "INCAPACITATED" || animationState _x isEqualto "starWars_landRoll_b" || animationState _x isEqualTo "starWars_landRoll") exitWith {};

                        private _shotsToKill = (_target getVariable "IMS_LaF_ShotsToTakeOutOneGuy") - 25;

                        // If ACE3 is loaded, use their medical system to incapacitate the target
                        if (_shotsToKill <= 0 && isDamageAllowed _target ) exitWith {
                            [_target, 0.1, "body", "bullet"] remoteExec ["ace_medical_fnc_addDamageToUnit", _target];
                            [_target, true] remoteExec ["ace_medical_fnc_setUnconscious", _target];
                        };

                        // Damage the target and set their concentration stat to zero
                        _target setVariable ["IMS_LaF_ShotsToTakeOutOneGuy", _shotsToKill, true];
                        [_target, 228, _grenade] remoteExec ["concentrationToZero", _target, false];
                    };
                } forEach (_grenade nearEntities ["Man", 7]);
            }, _grenade, 1] call CBA_fnc_waitAndExecute;

            [{
                params ["_droid", "_grenade"];

                // Detonate the grenade and set its velocity
                _grenade setDamage 1;
                [_grenade, [3 * (sin (getdir _droid )), 3 * (cos (getdir _droid)), 2]] remoteExec ["setVelocity", _grenade];

                LOG_2("(bxDodge) [%1]: Detonating BX grenade [%2]...", _droid, _grenade);

                [{
                    params ["_droid"];

                    if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

                    // Play our droid's grenade callout
                    [_droid, selectRandom ["BX_ThrowingGrenade_1", "BX_ThrowingGrenade_2", "BX_ThrowingGrenade_3"], 60, 3] call FUNC(sayPhrase);
                    LOG_1("(bxDodge) [%1]: Making grenade callout...", _droid);

                    // Make our droid perform a dodge and jump away from the grenade
                    [_droid, [-12 * (sin (getdir _droid )), -12 * (cos (getdir _droid)), 2]] remoteExec ["setVelocity", _droid];
                    LOG_1("(bxDodge) [%1]: Performing GRENADE jump...", _droid);
                }, _droid, 0.1] call CBA_fnc_waitAndExecute;

                [{
                    params ["_droid"];

                    // Reset our droid's combat-state variables
                    SETVAR(_droid, GVAR(isBlocking), 0);
                    SETVAR(_droid, GVAR(canAttack), 0);
                    SETVAR(_droid, GVAR(canTurn), 0);
                }, _droid, 0.8] call CBA_fnc_waitAndExecute;

                [{
                    params ["_droid"];

                    if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_DODGING") exitWith {};

                    // Play our droid's roll animation
                    [_droid, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _droid];

                    LOG_1("(bxDodge) [%1]: GRENADE dodge action completed!", _droid);
                }, _droid, 1] call CBA_fnc_waitAndExecute;
            }, [_droid, _grenade], 1.1] call CBA_fnc_waitAndExecute;
        };
    };
}, _droid, 0.1] call CBA_fnc_waitAndExecute;