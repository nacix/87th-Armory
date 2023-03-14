#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Kicks the target player out of their AT-RT and wipes its data on death/dismount
 *
 * Arguments:
 * 0: The Rider <OBJECT>
 * 1: The Walker <OBJECT> (optional: default=objNull)
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * player call ax87_rep_vehicles_fnc_exitATRT;
 *
 * Public: No
*/

if (!isServer) exitWith {};

params ["_unit", ["_walker", objNull]];

if (!(_unit isKindOf "87th_ATRT") && {typeOf _unit isNotEqualTo "C_man_1"} && {isNull _walker}) exitWith {};

if (isNull _walker) then {
	if (_unit isKindOf "87th_ATRT") then { _walker = _unit; _unit = GETVAR(_unit,rider,objNull) } else { _walker = GETVAR(_unit,walker,objNull) };
	if (isNull _walker) exitWith {};
};

[_unit, ""] remoteExec ["switchMove", 0];
detach _unit;

objNull remoteControl driver _walker;
player remoteControl _unit;

if (cameraOn isNotEqualTo (vehicle _unit)) then {(vehicle _unit) switchCamera cameraView};
SETVAR(_walker,rider,objNull);
SETVAR(_unit,_walker,objNull);

private _riderShield = GETVAR(_walker,riderShield,objNull);
if (!isNull _riderShield) then { deleteVehicle _riderShield; SETVAR(_walker,riderShield,objNull) };

_walker allowDamage true;

inGameUISetEventHandler ["Action", ""];