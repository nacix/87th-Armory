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
TRACE_1("handleAnimB1", _droid);

private _animHandlerPFH = [{
    params ["_droid"];

    // Sets our droid's ammo
    // _droid setAmmo [currentWeapon _droid, 10];

    // If our droid still has grenades available, play a random grenade callout sound
    private _grenadeCount = count (_droid nearObjects ["GrenadeHand", 4]);
    if (_grenadeCount >= 1) then {
        LOG_1("(handleAnimB1) [%1]: Throwing grenade and playing callout...", _droid);
        [_droid, selectRandom ["B1_incGrenade_1", "B1_incGrenade_2", "B1_incGrenade_3", "B1_incGrenade_4"], 60, 3] call FUNC(sayPhrase);
    };

    if ((GETVAR(_droid, GVAR(canAttack), 0) == 0) && (alive _droid)) then {
        private _launcher = secondaryWeapon _droid;

        if (_launcher isNotEqualTo "" && (_droid ammo _launcher > 0 || { (magazinesAmmoFull _droid findIf { (_x select 0) in compatibleMagazines _launcher }) > 0 })) then {
            private _potentialTargets = _droid targets [true];
            
            private _ammoType = secondaryWeaponMagazine _droid;
            if (count _ammoType <= 0) then {
                _ammoType = magazines _droid select (magazinesAmmoFull _droid findIf { (_x select 0) in compatibleMagazines _launcher });
            } else {
                _ammoType = _ammoType select 0;
            };

            private _ammoTarget = getText (configFile >> "CfgAmmo" >> _ammoType >> "aiAmmoUsageFlags");

            LOG_4("(handleAnimB1) [%1]: This droid is using a launcher [%2] with ammo [%3] and target priority [%4]! Checking for valid targets...", _droid, _launcher, _ammoType, _ammoTarget);

            private _targetIndex = -1;
            private _isTargetVehicle = true;

            if ("512" in _ammoTarget || "128" in _ammoTarget || _ammoTarget in [128, 512] ) then {
                _targetIndex = _potentialTargets findIf {
                    private _vehicle = vehicle _x;

                    (_vehicle != _x && (_vehicle isKindOf "Car" || _vehicle isKindOf "Tank"))
                };
            } else {
                if ("256" in _ammoTarget || _ammoTarget isEqualTo 256) then {
                    _targetIndex = _potentialTargets findIf {
                        private _vehicle = vehicle _x;

                        (_vehicle != _x && (_vehicle isKindOf "Helicopter" || _vehicle isKindOf "Plane"))
                    };
                } else {
                    if ("64" in _ammoTarget || _ammoTarget isEqualTo 64) then {
                       _targetIndex = _potentialTargets findIf { _x isKindOf "Man" };
                       _isTargetVehicle = false;
                    };
                };
            };

            private _activeTarget = assignedTarget _droid;

            if (_targetIndex >= 0 && _droid ammo _launcher > 0 && (isNull _activeTarget || { _activeTarget isKindOf "Man" })) then {
                private _targetVehicle = vehicle (_potentialTargets select _targetIndex);

                if (_isTargetVehicle) then {
                    _droid selectWeapon "Single";
                } else {
                    _droid selectWeapon "FullAuto";
                };

                if ((_isTargetVehicle && (typeOf _activeTarget) isEqualto "Man") || (!_isTargetVehicle && (typeOf _activeTarget) isNotEqualTo "Man")) then { _droid doTarget _targetVehicle };

                LOG_6("(handleAnimB1) [%1 | %2]: New target found [%3 | %4]! Old target: [%5 | %6]", name _droid, _droid, name _targetVehicle, _targetVehicle, name _activeTarget, _activeTarget);
            };
        };
    } else { _droid playActionNow "Disable_Gesture" };
}, 2, _droid] call CBA_fnc_addPerFrameHandler;

SETVAR(_droid, GVAR(droidAnimPFH), animHandlerPFH);