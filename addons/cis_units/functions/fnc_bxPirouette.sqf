#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles BX droid melee pirouettes/counterattacks.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_bxPirouette;
 *
 * Public: No
*/

params ["_droid"];

[_droid, "random_shhh", 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

[_droid, "starWars_lightsaber_lightattack3"] remoteExec ["switchMove", 0];
SETVAR(_droid, GVAR(canAttack), 1);

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "starWars_lightsaber_lightattack3") exitWith {};

    SETVAR(_droid, GVAR(canTurn), 1);
    [_droid, [9 * (sin (getdir _droid )), 9 * (cos (getdir _droid)), 3]] remoteExec ["setvelocity", _droid];

    private _meleeSound = selectRandom (parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _droid >> "IMS_Melee_Param_Sounds"));
    [_droid, _meleeSound, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

    SETVAR(_droid, GVAR(isBlocking), 1);
}, _droid, 0.25] call CBA_fnc_waitAndExecute;

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "starWars_lightsaber_lightattack3") exitWith {};

    SETVAR(_droid, GVAR(isBlocking), 0);
    [_droid, "starWars_lightsaber_lightattack3"] spawn setHitOrDeflect_TroughtShield;
}, _droid, 0.75] call CBA_fnc_waitAndExecute;

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "starWars_lightsaber_lightattack3") exitWith {};

    [_droid, "lightSaber_hit_4", 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
}, _droid, 0.8] call CBA_fnc_waitAndExecute;

[{
    params ["_droid"];

    if (animationState _droid isNotEqualTo "starWars_lightsaber_lightattack3") exitWith {};

    SETVAR(_droid, GVAR(canAttack), 0);
    SETVAR(_droid, GVAR(canTurn), 0);
}, _droid, 1.44] call CBA_fnc_waitAndExecute;

if (animationState _droid isEqualto "starWars_lightsaber_lightattack3") then {
    params ["_droid"];

    [_droid, "melee_armed_idle"] remoteExec ["playMoveNow", 0];

    SETVAR(_droid, GVAR(canAttack), 0);
    SETVAR(_droid, GVAR(canTurn), 0);

    [{ if (animationState _this isEqualTo "melee_armed_idle") then { [_this, "melee_armed_idle"] remoteExec ["switchMove", 0] } }, _droid, 1.74] call CBA_fnc_waitAndExecute;
};