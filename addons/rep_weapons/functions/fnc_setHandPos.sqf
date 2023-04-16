#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Sets the unit's sidearm hand position to either one- or two-handed.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Do we want to one-hand? <BOOL>
 * 2: Reset the unit's current action? <BOOL> (Optional -> default=false)
 * 3: Skip the animation compatability check? <BOOL> (Optional -> default=false)
 * 4: Force the unit to switch states? <BOOL> (Optional -> default=false)
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

params ["_unit", "_tryOneHand", ["_resetActions", false], ["_skipAnimCheck", false], ["_forceAction", false]];
TRACE_5("setHandPos",_unit,_tryOneHand,_resetActions,_skipAnimCheck,_forceAction);

if ((weaponState _unit select 6) != 0 || (!GETVAR(_unit,wantsOneHand,true) && !GETVAR(_unit,usingOneHand,false)) || isNil "_tryOneHand") exitWith { LOG_1("setHandPos cancelled for unit [%1]",_unit) };

if (_tryOneHand) then {
	if (!GETVAR(_unit,outOfBody,false) && !GETVAR(_unit,usingOneHand,false) && {(_forceAction || {((GETVAR(_unit,wantsOneHand,true) && GETVAR(_unit,canOneHand,true)) && ((([_unit, animationState _unit] call FUNC(canOneHand)) || _skipAnimCheck) && {currentWeapon _unit isEqualTo handgunWeapon _unit}))})}) then {
		SETVAR(_unit,usingOneHand,true);

		if (GETVAR(_unit,justReloaded,false)) then { SETVAR(_unit,justReloaded,false); LOG_1("Unit [%1] has finished reloading",_unit) };
		
		if (_resetActions) then {
			_unit switchAction "ax87_switch_pistol";
			[{player playActionNow "ax87_pistol"}, [], 0.5] call CBA_fnc_waitAndExecute;
			LOG_1("Unit [%1] is now one-handing (reset=true)",_unit);
		} else {
			_unit playActionNow "ax87_pistol";
			LOG_1("Unit [%1] is now one-handing (reset=false)",_unit);
		};
	};
} else {
	if (_forceAction || GETVAR(_unit,usingOneHand,false)) then {
		SETVAR(_unit,usingOneHand,false);
		if (_resetActions) then { _unit switchAction "ax87_switch_pistol" } else { _unit playActionNow "ax87_switch_pistol" };
		LOG_1("Unit [%1] is no longer one-handing",_unit);
	};
};