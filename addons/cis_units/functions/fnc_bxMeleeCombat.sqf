#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
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

params ["_droid", "_inMeleeMode"];
TRACE_2("bxMeleeCombat", _droid, _inMeleeMode);

if (_inMeleeMode) then {
    LOG_1("(bxMeleeCombat) [%1]: Invoking melee COMBAT PFH...", _droid);

    private _meleeCombatPFH = [{
        params ["_droid"];

        if ((lifeState _droid isEqualTo "INCAPACITATED") || (animationState _droid isEqualTo "starWars_force_podniati_victim_anim")) exitWith { _droid allowDamage true };

        // Switch our droid's weapon
        _droid action ["SwitchWeapon", _droid, _droid, 100];

        // Disable conflicting AI traits
        LOG_1("(bxMeleeCombat) [%1]: Setting droid AI traits...", _droid);
        _droid allowDamage false;
        ["MINEDETECTION", "WEAPONAIM", "SUPPRESSION", "COVER", "AIMINGERROR", "TARGET", "AUTOCOMBAT", "FSM"] apply { _droid disableAI _x };
        _droid setBehaviour "CARELESS";

        // Get nearby, visible targets and reveal them if they're not spotted
        LOG_1("(bxMeleeCombat) [%1]: Getting visible targets...", _droid);
        {
            private _targetVisibility = lineIntersects [ getPosASL _droid, eyePos _x, _droid, _x];
            if (!_targetVisibility) then { _droid reveal [_x, 4] };
        } forEach (_droid nearEntities ["Man", 40]);

        // Set our droid's concentration level
        if (GETVAR(_droid, GVAR(canAttack), 0) == 1) then {
            LOG_1("(bxMeleeCombat) [%1]: Setting droid concentration level...", _droid);

            private _concentration = GETVAR(_droid, GVAR(concentration), 0) + 0.3;

            SETVAR(_droid, GVAR(concentration), 0.9 min _concentration);
        };

        // Set the nearest enemy as our droid's target
        private _target = _droid findNearestEnemy _droid;
        LOG_2("(bxMeleeCombat) [%1]: Target found! [%2]", _droid, _target);

        // Invoke a dodge event on our droid
        if ((animationState _droid isEqualTo "starWars_lightsaber_blockPursuit") && (_target distance _droid <= 5) && (alive _droid)) exitWith {
            _droid call FUNC(bxDodge);
        };

        // Invoke a target execution event from our droid
        if ((isDamageAllowed _target) && (animationState _droid isNotEqualTo "starWars_lightsaber_lightattack3") && (animationState _droid isNotEqualTo "starWars_lightsaber_attackLeg") && (animationState _droid isNotEqualTo "IMS_Leg_Kick") && (animationState _target isEqualTo "starWars_lightsaber_blockPursuit") && ((_target distance _droid) <= 3) && (alive _droid)) exitWith {
            [_droid, _target] call FUNC(doExecutionBX);
        };

        if ((GETVAR(_droid, GVAR(canAttack), 0) == 0) && (_target distance _droid <= 4) && (alive _droid)) then {
            // Invoke a random attack event from our droid
            if ((GETVAR(_target, GVAR(isBlocking), 0) == 1) && (random 100 >= 50)) exitWith {
                LOG_1("(bxMeleeCombat) [%1]: Calling random attack event...", _droid);
                [_droid] call selectRandom [legPunch, legPunchVertuha, FUNC(bxPirouette)];
            };

            // Invoke a firing event from our droid
            if ((random 100 >= 80) && (handgunWeapon _target in IMS_Lightsabers)) exitWith {
                LOG_1("(bxMeleeCombat) [%1]: Calling droid firing animation...", _droid);
                _droid call FUNC(bxDoFire);
            };

            // Call the IMS melee system
            [_droid, 3] spawn IMS_MeleeFunction;
        };
    }, 0.4, _droid] call CBA_fnc_addPerFrameHandler;

    SETVAR(_droid, GVAR(meleeCombatPFH), _meleeCombatPFH);
} else {
    LOG_1("(bxMeleeCombat) [%1]: Invoking melee OPPORTUNITY PFH...", _droid);

    private _meleeOpportunityPFH = [{
        params ["_droid"];

        if ((lifeState _droid) isEqualTo "INCAPACITATED") exitWith { _droid allowDamage true };
        
        // Get the nearest visible enemies and reveal them if they're not spotted
        {
            if (!lineIntersects [ getPosASL _droid, eyePos _x, _droid, _x]) then { _droid reveal [_x, 4] };
        } forEach (_droid nearEntities ["Man", 10]);

        // Set the nearest enemy as our droid's target
        private _target = _droid findNearestEnemy _droid;
        LOG_2("(bxMeleeCombat) [%1]: Target found! [%2]", _droid, _target);

        // Invoke a target-execution event from our droid
        if ((isDamageAllowed _target) && !(handGunWeapon _target in IMS_Melee_Weapons) && ((_target distance _droid) <= 3) && (alive _droid) and !(handGunWeapon _target in IMS_Melee_Weapons) && (GETVAR(_droid, GVAR(canAttack), 0) == 0)) then {
            LOG_2("(bxMeleeCombat) [%1]: Invoking an execution event on target [%2]!", _droid, _target);
            [_droid, _target] call FUNC(doExecutionBX);
        };

    }, 0.4, _droid] call CBA_fnc_addPerFrameHandler;

    SETVAR(_droid, GVAR(meleeOpportunityPFH), _meleeOpportunityPFH);
};