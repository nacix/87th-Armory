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

if (_unit isKindOf "3AS_ATRT_Base") then { _walker = _unit; _unit = GETVAR(_unit,atrt_rider,objNull) } else { _walker = GETVAR(_unit,atrt_walker,objNull) };

SETVAR(_walker,atrt_rider,objNull);
SETVAR(_unit,atrt_walker,objNull);

["featureCamera", GETVAR(_unit,atrt_featCamEH,-1)] call CBA_fnc_removePlayerEventHandler;
["ace_unconscious", GETVAR(_unit,atrt_unconEH,-1)] call CBA_fnc_removeEventHandler;

[_unit, ""] remoteExec ["switchMove", 0];
detach _unit;

objNull remoteControl driver _walker;
player remoteControl _unit;

if (cameraOn isNotEqualTo (vehicle _unit)) then {(vehicle _unit) switchCamera cameraView};

private _riderShield = GETVAR(_walker,atrt_riderShield,objNull);
if (!isNull _riderShield) then { deleteVehicle _riderShield; SETVAR(_walker,atrt_riderShield,objNull) };

inGameUISetEventHandler ["Action", ""];

if (!alive _walker) then { _walker call FUNC(destroyATRT) };