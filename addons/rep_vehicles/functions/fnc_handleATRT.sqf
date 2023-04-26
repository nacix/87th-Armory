#include "script_component.hpp"
/*
 * Authors: Anorexican
 *
 * Handles AT-RT state upon being mounted by a player.
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 * 1: The Rider <OBJECT>
 * 2: Action ID <NUMBER>
 * 3: Arguments <ANY>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * vehicle player call ax87_rep_vehicles_fnc_handleATRT;
 *
 * Public: No
*/

params ["_walker", "_rider", "_actionID", "_args"];

// Terminate if AT-RT is manned, rider is not player, or rider is AT-RT.
if (!isPlayer _rider || {!isNull GETVAR(_walker,atrt_rider,objNull)} || {_rider isKindOf "3AS_ATRT"}) exitWith {};

if (hasInterface && isPlayer _rider && local _rider) then {
	private _featCamEH = ["featureCamera", {
		params ["_unit", "_newCamera"];

		if (_newCamera isNotEqualTo "classic") then {
			systemChat str (driver _unit);
			systemChat str (typeOf _unit);
			(driver _unit) call FUNC(exitATRT);
			["featureCamera", _thisId] call CBA_fnc_removePlayerEventHandler;
		};
	}] call CBA_fnc_addPlayerEventHandler;
	SETVAR(_rider,atrt_featCamEH,_featCamEH);

	private _unconEH = ["ace_unconscious", {
		params ["_unit", "_isUncon"];
		_thisArgs params ["_rider", "_walker"];

		if (_isUncon && {_unit isEqualTo _rider}) then {
			[_unit, _walker] call FUNC(exitATRT);
			["ace_unconscious", _thisId] call CBA_fnc_removeEventHandler;
		};
	}, [_rider, _walker]] call CBA_fnc_addEventHandlerArgs;
	SETVAR(_rider,atrt_unconEH,_unconEH);

	[{!isNull (findDisplay 46)}, {
		private _weaponLoweredEH = findDisplay 46 displayAddEventHandler ["KeyDown", {
			params ["_display", "_key", "_shift", "_ctrl", "_alt"];
			if (inputAction "toggleRaiseWeapon" > 0) then {
				if (weaponLowered player) then { player action ["WeaponOnBack", player] };
				true;
			};
		}];
		SETVAR(player,GVAR(weaponLoweredEH),_weaponLoweredEH);
	}] call CBA_fnc_waitUntilAndExecute;
};

SETVAR(_walker,atrt_rider,_rider);

[_rider, "driver_Quadbike"] remoteExec ["switchMove", 0];
_rider attachTo [_walker, [0,0,0], "seat"];

private _shield = "3AS_ATRT_Collision" createVehicle position _walker;
_shield attachTo [_walker, [0.0, 0.3, -2.3], "seat"];
SETVAR(_walker,atrt_riderShield,_shield);

objNull remoteControl driver _rider;
_rider remoteControl _walker;

if (cameraOn isNotEqualTo (vehicle _walker)) then { (vehicle _walker) switchCamera cameraview };

_walker enableStamina false;
_walker forceWalk false;

SETVAR(player,atrt_walker,_walker);

inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo 'BackFromUAV') then { true }"];