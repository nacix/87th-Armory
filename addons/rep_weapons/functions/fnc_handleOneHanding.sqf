#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Detects whether or not the player should be one-handing their secondary weapon.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * NONE
 *
 * Public: No
*/

if (isServer && !hasInterface) exitWith {}; // Only run on clients

params ["_unit"];

TRACE_1("handleOneHanding",_unit);

if (!GETGVAR(enabled,true)) exitWith {};

if (!GETGVAR(allowOneHandWalking,false)) then { SETVAR(_unit,GVAR(isUnitWalking),isForcedWalk _unit) } else { SETVAR(_unit,GVAR(isUnitWalking),false) };

SETVAR(_unit,GVAR(usingOneHand),false);
SETVAR(_unit,GVAR(weaponAllowed),true);
SETVAR(_unit,GVAR(outOfBody),("" isNotEqualTo ([] call CBA_fnc_getActiveFeatureCamera)));

private _animChangedEH = _unit addEventHandler ["AnimChanged", {
	params ["_unit", "_anim"];
	[_unit, [_unit, _anim] call FUNC(canOneHand), false, true] call FUNC(setHandPos);
}];
SETVAR(_unit,GVAR(animChangedEH),_animChangedEH);
LOG_2("Initialized EventHandler 'animChanged' for unit [%1] (ID: [%2])", _unit, _animChangedEH);

private _weaponEH = ["weapon", {
	params ["_unit", "_weaponNew", "_weaponOld"];
	TRACE_3("weaponEH",_unit,_weaponNew,_weaponOld);

	_unit removeEventHandler ["GestureDone", GETVAR(_unit,gestureDoneEH,-1)];
	SETVAR(_unit,GVAR(gestureDoneEH),-1);
	LOG_1("Removed EventHandler 'gestureDone' for unit [%1] (timed out)", _unit);

	if (_weaponNew isEqualTo "") exitWith { LOG_2("weaponChangeEH terminated on unit [%1]: new weapon [%2] is empty",_unit,_weaponNew) };

	private _sidearm = toLower handgunWeapon _unit;
	private _weaponNew = toLower _weaponNew;
	private _weaponOld = toLower _weaponOld;

	private _setOneHanded = nil;
	switch (_sidearm) do {
		case (_weaponNew): {
			private _tagList = GETGVAR(tagList,[]);
			private _tagWhitelist = GETGVAR(useTagWhitelist,false);
			private _wepAddonTag = toLower (_weaponNew select [0, _weaponNew find "_"]);

			private _weaponList = GETGVAR(weaponList,[]);
			private _wepWhitelist = GETGVAR(useWeaponWhitelist,false);
			
			TRACE_7("weaponWhitelistCheck",_unit,_weaponNew,_wepAddonTag,_tagWhitelist,_tagList,_wepWhitelist,_weaponList);
			if (((_tagWhitelist && !(_wepAddonTag in _tagList)) || (!_tagWhitelist && _wepAddonTag in _tagList) || (!_wepWhitelist && _weaponNew in _weaponList)) && !(_wepWhitelist && _weaponNew in _weaponList)) then {
				LOG_4("Client [%1] (%2): Weapon [%3] with tag [%4] is disabled in CBA white/blacklist settings. Disabling one-handing...",name _unit,_unit,_weaponNew,_wepAddonTag);
				SETVAR(_unit,GVAR(weaponAllowed),false);
			} else {
				SETVAR(_unit,GVAR(weaponAllowed),true);
				_setOneHanded = true;
				// if (GETVAR(_unit,GVAR(outOfBody),false)) then { SETVAR(_unit,GVAR(usingOneHand),false) } else { SETVAR(_unit,GVAR(usingOneHand),true) };
			};
		};
		case (_weaponOld): { _setOneHanded = false };
	};
	if (isNil "_setOneHanded") exitWith { LOG_3("weaponChangeEH terminated on unit [%1]: Neither [%2] (new) or [%3] (old) are sidearms",_unit,_weaponNew,_weaponOld) };
	
	private _gestureDoneEH = [_unit, "GestureDone", {
		params ["_unit", "_gesture"];
		
		if ("ax87_switch_pistol" in _gesture || "ax87_pistol" in _gesture) exitWith { LOG_1("Exited EventHandler 'gestureDone' on unit [%1]", _unit) };

		if ("end" in _gesture) exitWith {
			private _animState = animationState _unit;
			TRACE_2("gestureDoneEH",_unit,_animState);

			if (_thisArgs select 0) then { SETVAR(_unit,GVAR(usingOneHand),false) };

			_unit removeEventHandler ["GestureDone", _thisID];
			[_unit, _thisArgs select 0, true] call FUNC(setHandPos);
			LOG_1("Removed EventHandler gestureDone for unit [%1] (switching handpos)", _unit);
		};
	}, [_setOneHanded]] call CBA_fnc_addBISEventHandler;
	SETVAR(_unit,gestureDoneEH,_gestureDoneEH);
	LOG_2("Initialized EventHandler 'gestureDone' for unit [%1] (ID: [%2])", _unit, _gestureDoneEH);
}] call CBA_fnc_addPlayerEventHandler;
SETVAR(_unit,GVAR(weaponEH),_weaponEH);
LOG_2("Initialized EventHandler 'weapon' for unit [%1] (ID: [%2])", _unit, _weaponEH);

private _featureCameraEH = ["featureCamera", {
	params ["_unit", "_camera"];
	TRACE_2("featureCamera",_unit,_camera);

	private _inPlayerCamera = (_camera isEqualTo "");
	SETVAR(_unit,GVAR(outOfBody),!_inPlayerCamera);
	LOG_2("Is unit [%1] in their own body? [%2]",_unit,!_inPlayerCamera);
	
	if (currentWeapon _unit isEqualTo handgunWeapon _unit) then {
		if (!_inPlayerCamera) then { [_unit, _inPlayerCamera, false, false, true] call FUNC(setHandPos) } else { [_unit, true] call FUNC(setHandPos) };
		LOG_1("Unit [%1] has changed cameras with their sidearm equipped",_unit);
	};
}] call CBA_fnc_addPlayerEventHandler;
SETVAR(_unit,GVAR(featureCameraEH),_featureCameraEH);
LOG_2("Initialized EventHandler 'featureCamera' for unit [%1] (ID: [%2])", _unit, _featureCameraEH);

private _walkRunToggleEH = addUserActionEventHandler ["WalkRunToggle", "Activate", {
   	params ["_activated"];
	TRACE_2("WalkRunToggle",player,_activated);

	if (GETGVAR(allowOneHandWalking,false)) exitWith { LOG_1("WalkRunToggleEH terminated on unit [%1] because they allow one-handed walking",player) };

	private _isWalking = isWalking player;
	
	if (vehicle player != player) exitWith { LOG_2("WalkRunToggleEH terminated on unit [%1] because they are inside a vehicle [%2]",player,vehicle player) };

	SETVAR(player,GVAR(isUnitWalking),!_isWalking);
	[player, _isWalking] call FUNC(setHandPos);
	LOG_2("Is unit [%1] walking? [%2]",player,!_isWalking);
}];
SETVAR(_unit,GVAR(walkRunToggleEH),_walkRunToggleEH);
LOG_2("Initialized EventHandler 'WalkRunToggle' for unit [%1] (ID: [%2])", _unit, _walkRunToggleEH);

private _gestureChangedEH = _unit addEventHandler ["GestureChanged", {
	params ["_unit", "_gesture"];

	if (_gesture isNotEqualTo "ax87_pistol" && _gesture isNotEqualTo "ax87_switch_pistol" && GETVAR(_unit,GVAR(usingOneHand),false)) then {
		SETVAR(_unit,GVAR(usingOneHand),false);

		LOG_2("Unit [%1] changed gesture to [%2]",_unit,_gesture);

		if ("aidl" in _gesture) exitWith { LOG_1("gestureState idled on unit [%1]. Calling setHandPos...",_unit); [_unit, true, false, false, true] call FUNC(setHandPos) };

		if ([_unit, animationState _unit] call FUNC(canOneHand)) exitWith { [{ gestureState player isEqualTo "" || gestureState player isEqualTo "<none>" }, { if ( !GETVAR(player,GVAR(usingOneHand),false) ) then { [player, true] call FUNC(setHandPos) } }, [], 30] call CBA_fnc_waitUntilAndExecute };

		[{"aidl" in gestureState player}, { if (currentWeapon player isEqualTo handgunWeapon player && !GETVAR(player,GVAR(usingOneHand),false)) then { [_unit, true] call FUNC(setHandPos) } }, [], 30] call CBA_fnc_waitUntilAndExecute;
	};
}];
SETVAR(_unit,GVAR(gestureChangedEH),_gestureChangedEH);
LOG_2("Initialized EventHandler 'gestureChanged' for unit [%1] (ID: [%2])", _unit, _gestureChangedEH);