#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Globally applies addActions to AT-RT walker on init
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * cursorTarget call ax87_rep_vehicles_fnc_initATRT;
 *
 * Public: No
*/

params ["_walker"];

_walker addAction ["Mount AT-RT", { _this call FUNC(handleATRT) }, [], 3.0, true, true, "", "_this isNotEqualTo _originalTarget", 4];

_walker addAction ["Dismount AT-RT", { (_this select 1) call FUNC(exitATRT) }, [], 3.0, true, true, "", "_this isEqualTo _originalTarget", 2];

[_walker, "Killed", {
	params ["_walker"];
	private _rider = GETVAR(_walker,atrt_rider,objNull);

	_walker removeEventHandler ["HandleDamage", GETVAR(_walker,atrt_damageEH,-1)];

	if (!isNull _rider) then { _rider call FUNC(exitATRT) } else { _walker call FUNC(destroyATRT) };

	_walker removeEventHandler ["Killed", _thisId];
}] call CBA_fnc_addBISEventHandler;

private _damageEH = [_walker, "HandleDamage", {
	params ["_walker", "_selection", "_damage", "_source", "_projectile"];

	if (!alive _walker) exitWith {};

	_damage = _damage - damage _walker;
	private _explosiveness = [configFile >> "CfgAmmo" >> _projectile >> "explosive", "NUMBER", 0] call CBA_fnc_getConfigEntry;
	
	private _damageTaken = (_damage * 0.05) * (1 - _explosiveness);
	if (_explosiveness > 0) then { _damageTaken = _damageTaken + ((_damage * _explosiveness) / 500) };

	private _totalDamage = damage _walker + _damageTaken;

	_totalDamage
}] call CBA_fnc_addBISEventHandler;
SETVAR(_walker,atrt_damageEH,_damageEH);

_walker addEventHandler ["Deleted", {
	params ["_walker"];
	private _rider = GETVAR(_walker,atrt_rider,objNull);

	if (alive _walker && !isNull _rider) then {
		_rider call FUNC(exitATRT);
		[_rider, ""] remoteExec ["switchMove", 0];
		detach _rider;
	};
}];