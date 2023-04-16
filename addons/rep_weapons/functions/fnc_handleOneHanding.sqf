#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Detects whether or not the player should be one-handing their secondary weapon.
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * NONE
 *
 * Public: No
*/

// TODO: Set VARS as GVARS
// TODO: Remove remnant instances of player
// TODO: Replace != and == with isEqualTo and isNotEqualTo

if (isServer && !hasInterface) exitWith {}; // Only run on clients

private _unit = player;

SETVAR(_unit,usingOneHand,false);
SETVAR(_unit,canOneHand,true);
SETVAR(_unit,outOfBody,false);

_unit addEventHandler ["AnimChanged", {
	params ["_unit", "_anim"];
	[_unit, [_unit, _anim] call FUNC(canOneHand), false, true] call FUNC(setHandPos);
}];

["weapon", {
	params ["_unit", "_weaponNew", "_weaponOld"];
	TRACE_3("weapon",_unit,_weaponNew,_weaponOld);

	_unit removeEventHandler ["GestureDone", GETVAR(_unit,gestureDoneEH,-1)];
	LOG_1("Removed EventHandler 'gestureDone' for unit [%1] (timed out)", _unit);

	if (_weaponNew isEqualTo "") exitWith { LOG_2("weaponChangeEH terminated on unit [%1]: [%2] is empty",_unit,_weaponNew) };
	
	private _setOneHanded = nil;
	switch (handGunWeapon _unit) do {
		case (_weaponNew): {_setOneHanded = true};
		case (_weaponOld): {_setOneHanded = false};
	};
	if (isNil "_setOneHanded") exitWith { LOG_3("weaponChangeEH terminated on unit [%1]: Neither [%2] (new) or [%3] (old) are sidearms", _unit, _weaponNew, _weaponOld) };
	
	LOG_1("Initializing EventHandler 'gestureDone' for unit [%1]", _unit);
	private _gestureDoneEH = [_unit, "GestureDone", {
		params ["_unit", "_gesture"];
		
		if ("ax87_switch_pistol" in _gesture || "ax87_pistol" in _gesture) exitWith { LOG_1("Exited EventHandler 'gestureDone' on unit [%1]", _unit) };

		if ("end" in _gesture) exitWith {
			private _animState = animationState _unit;
			TRACE_2("gestureDoneEH",_unit,_animState);

			if (_thisArgs select 0) then { SETVAR(_unit,usingOneHand,false) };

			_unit removeEventHandler ["GestureDone", _thisID];
			if ((_thisArgs select 0) && "sras" in _animState && "wpst" in _animState && "perc" in _animState && ("mstp" in _animState || "mwlk" in _animState || "mtac" in _animState || "aadj" in _animState)) then { 
				[_unit, true, true, false, true] call FUNC(setHandPos);
				LOG_1("Removed EventHandler gestureDone for unit [%1] (forcing one-handing)", _unit);
			} else {
				[_unit, _thisArgs select 0, true] call FUNC(setHandPos);
				LOG_1("Removed EventHandler gestureDone for unit [%1] (switching handpos)", _unit);
			};
		};
	}, [_setOneHanded]] call CBA_fnc_addBISEventHandler;
	
	SETVAR(_unit,gestureDoneEH,_gestureDoneEH);
}] call CBA_fnc_addPlayerEventHandler;

_unit addEventHandler ["Reloaded", {
	params ["_unit", "_weapon", "_magazine"];
	if (_weapon isEqualTo handgunWeapon _unit && GETVAR(_unit,usingOneHand,false)) then {
		TRACE_3("reloaded",_unit,_weapon,_magazine);
		SETVAR(_unit,usingOneHand,false);
		[{(weaponState player select 6) == 0}, {SETVAR(player,justReloaded,true); [player, true] call FUNC(setHandPos)}, [], 15] call CBA_fnc_waitUntilAndExecute;
		LOG_1("Unit [%1] reloaded their sidearm",_unit);
	};
}];

["featureCamera", {
	params ["_unit", "_camera"];
	TRACE_2("featureCamera",_unit,_camera);

	private _inPlayerCamera = (_camera isEqualTo "");
	SETVAR(_unit,outOfBody,!_inPlayerCamera);
	LOG_2("Is unit [%1] in their own body? [%2]",_unit,!_inPlayerCamera);
	
	if (currentWeapon _unit isEqualTo handgunWeapon _unit) then {
		if (!_inPlayerCamera) then { [_unit, _inPlayerCamera, false, false, true] call FUNC(setHandPos) } else { [_unit, true] call FUNC(setHandPos) };
		LOG_1("Unit [%1] has changed cameras with their sidearm equipped",_unit);
	};
}] call CBA_fnc_addPlayerEventHandler;

addUserActionEventHandler ["WalkRunToggle", "Activate", {
   	params ["_action", "_unit", "_activated"];
	TRACE_3("WalkRunToggle",_action,_unit,_activated);

	if (vehicle _unit != _unit) exitWith { LOG_2("WalkRunToggleEH terminated on unit [%1] because they are inside a vehicle [%2]",_unit,vehicle _unit) };

	SETVAR(_unit,canOneHand,isWalking _unit);
	[_unit, isWalking _unit] call FUNC(setHandPos);
	LOG_2("Is unit [%1] walking? [%2]",_unit,isWalking _unit);
}];

_unit addEventHandler ["GestureChanged", {
	params ["_unit", "_gesture"];

	if (_gesture isNotEqualTo "ax87_pistol" && _gesture isNotEqualTo "ax87_switch_pistol" && GETVAR(_unit,usingOneHand,false)) then {
		SETVAR(_unit,usingOneHand,false);

		LOG_2("Unit [%1] changed gesture to [%2]",_unit,_gesture);

		if ("aidl" in _gesture) exitWith { LOG_1("gestureState idled on unit [%1]. Calling setHandPos...",_unit); [_unit, true, false, false, true] call FUNC(setHandPos) };

		if ([_unit, animationState _unit] call FUNC(canOneHand)) exitWith { [{ gestureState player isEqualTo "" || gestureState player isEqualTo "<none>" }, { if ( !GETVAR(player,usingOneHand,false) ) then { [player, true] call FUNC(setHandPos) } }, [], 30] call CBA_fnc_waitUntilAndExecute };

		[{"aidl" in gestureState player}, { if (currentWeapon player isEqualTo handgunWeapon player && !GETVAR(player,usingOneHand,false)) then { [_unit, true] call FUNC(setHandPos) } }, [], 30] call CBA_fnc_waitUntilAndExecute;
	};
}];