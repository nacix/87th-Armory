#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Makes the provided droid fire manually fire at a target
 * (Used if the droid is in melee mode)
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_droid] call ax87_cis_units_fnc_bxDoFire;
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("bxDoFire", _droid);

// Play our droid's roll animation
[_droid, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _droid];
LOG_1("(bxDoFire) [%1]: Starting roll animation...", _droid);

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "starWars_landRoll_b") exitWith {};

    // Set our droid's combat-state variables
    SETVAR(_droid, GVAR(isBlocking), 1);
    SETVAR(_droid, GVAR(canAttack), 1);
    SETVAR(_droid, GVAR(canTurn), 0);

    // Switch our droid to its firing animation
    [_droid, "SW_FIGHT_DROID_COMMANDO_FIRING"] remoteExec ["switchMove", 0];
}, _droid, 1.2] call CBA_fnc_waitAndExecute;

// Runs 3 times at various intervals to avoid consistency issues
{
    [{
        params ["_droid"];

        if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_FIRING") exitWith {};

        LOG_1("(bxDoFire) [%1]: Forcing weapon fire...", _droid);

        // Give the droid imaginary ammo and force a weapon-fire event
        _droid setAmmo [primaryWeapon _droid, 10];
        _droid forceWeaponFire [primaryWeapon _droid, "Single"];

        private _target = _droid findNearestEnemy _droid;
        LOG_2("(bxDoFire) [%1]: Target selected: [%2]", _droid, _target);

        // Kill the target if its damage is too high
        if (damage _target > 0.5) exitWith {
            LOG_2("(bxDoFire) [%1]: Target [%2] has died! Running death action(s)...", _droid, _target);
            _target setDamage 1;

            // Disable the target's gestures
            [_target, "Disable_Gesture"] remoteExec ["playActionNow", _target];

            // Play a random death animation on the target
            private _rndAnim = selectRandom ["lightsaber_death_1", "lightsaber_death_2", "lightsaber_death_3", "lightsaber_death_4", "lightsaber_death_5", "lightsaber_death_6", "lightsaber_death_7", "flamethrower_burning_6", "flamethrower_burning_7"];
            [_target, _rndAnim] remoteExec ["switchMove", 0, true];
        };

        // Either damage the target or handle their blocking depending on their position and state
        LOG_2("(bxDoFire) [%1]: Attempting damage/block event on target [%2]", _droid, _target);
        if (GETVAR(_target, GVAR(isBlocking), 0) == 1 && ((_target worldToModel (_droid modelToWorld [0, 0, 0])) select 1) > 0) then {
            [_target, _droid] spawn otroZeniePolnoje;
        } else {
            [_target] spawn SW_AdditionalDamage;
        };
    }, _droid, _x] call CBA_fnc_waitAndExecute;
} forEach [1.8, 2.3, 2.7];

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "SW_FIGHT_DROID_COMMANDO_FIRING") exitWith {};

    // Switch our droid back to its idle melee animation
    [_droid, "melee_armed_idle"] remoteExec ["switchMove", 0];

    // Reset our droid's combat-state variables
    SETVAR(_droid, GVAR(isBlocking), 0);
    SETVAR(_droid, GVAR(canAttack), 0);
    SETVAR(_droid, GVAR(canTurn), 0);

    LOG_1("(bxDoFire) [%1]: Firing event completed!", _droid);
}, _droid, 3.5] call CBA_fnc_waitAndExecute;