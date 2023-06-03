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
    LOG_1("(handleAnimB1) [%1]: Setting ammo...", _droid);
    _droid setAmmo [currentWeapon _droid, 10];

    // If our droid still has grenades available, play a random grenade callout sound
    private _grenadeCount = count (_droid nearObjects ["GrenadeHand", 4]);
    if (_grenadeCount >= 1) then {
        LOG_1("(handleAnimB1) [%1]: Playing random grenade callout...", _droid);
        [_droid, selectRandom ["B1_incGrenade_1", "B1_incGrenade_2", "B1_incGrenade_3", "B1_incGrenade_4"], 60, 3] call FUNC(sayPhrase);
    };

    // If our droid decides it doesn't wanna be injured anymore, we reset its animation state. Otherwise, we reset its action/gesture state.
    if ((_droid getVariable "canMakeAttack" == 0) and (alive _droid) and (lifeState _droid isNotEqualTo "INCAPACITATED") and (animationState _droid isNotEqualTo "B1_Droid_hit_1") and (animationState _droid isNotEqualTo "B1_Droid_hit_2") and (animationState _droid isNotEqualTo "B1_Droid_execution_main")) then {
        _droid playActionNow "B1_GunHolding";
    } else {
        _droid playActionNow "Disable_Gesture";
    };
}, 2, _droid] call CBA_fnc_addPerFrameHandler;

SETVAR(_droid, GVAR(droidAnimPFH), _animHandlerPFH);