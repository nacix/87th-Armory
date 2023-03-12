#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Moves unit group to provided altitude on postInit and pulls a parachute at pullHeight. Unit backpacks will NOT be removed.
 *
 * Arguments:
 * 0: Group leader <OBJECT>
 * 1: Starting altitude <NUMBER>
 * 2: Parachute pull height <NUMBER> (Optional -> default=50)
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_unit, 1000] call ax87_common_fnc_paradrop; // Unit will drop from 1000m and pull chute at 50m
 * [_unit, 1000, 100] call ax87_common_fnc_paradrop; // Unit will drop from 1000m and pull chute at 100m
 *
 * Public: No
*/

params ["_unit", "_altitude", ["_pullHeight", 60]];
{
	if (isPlayer _x) then { continue };
	[_x, _altitude] call BIS_fnc_setHeight;
	// _this select 0  -> _unit | _this select 1 -> _pullHeight
	[{(position (_this select 0)) select 2 <= (_this select 1)}, {
		_target = _this select 0;
		private _chuteType = "lsd_gar_hawkbatSteerable_parachute";
		if (rank _target != "PRIVATE") then { _chuteType = "ls_misc_hawkbatSteerable_parachute" };

		_chute = createVehicle [_chuteType, position _target, [], 0, "Fly"];
		_chute setPos position _target;
		_target moveInDriver _chute;
		_chute allowDamage false;
	}, [_x, _pullHeight], 120] call CBA_fnc_waitUntilAndExecute;
} forEach units group _unit;