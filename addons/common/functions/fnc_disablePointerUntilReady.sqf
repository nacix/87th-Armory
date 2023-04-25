#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Used to prevent visible laser pointers from enabling prematurely on weapon switch.
 *
 * If the specified unit is switching from a launcher and tries to enable their laser, the pointer will be disabled until the switch animation completes.
 * This is a workaround for a base game bug that causes visible lasers to displace when switching off a launcher.
 * More detail on the bug can be found in the documentation for fnc_init.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [player, currentWeapon player] call ax87_lasers_fnc_disablePointerUntilReady;
 *
 * Public: No
*/

params ["_unit", "_weapon"];

if (!hasInterface || !local _unit) exitWith {}; // Only executes on player client

_unit action ["IRLaserOff", _unit];

if ("Launcher" in ([_unit, false] call BIS_fnc_moveAction) && {_weapon isNotEqualTo secondaryWeapon _unit}) then {
	private _disableLaserPFH = [{(_this select 0) action ["IRLaserOff", (_this select 0)]}, 0, _unit] call CBA_fnc_addPerFrameHandler; // PFH that blocks the player from enabling their laser until terminated.

	// Waits for the player to finish switching weapons, then re-enables laser usage. Automatically terminates the PFH after 8 seconds.
	[{currentWeapon (_this select 0) isEqualTo secondaryWeapon (_this select 0) || !("Launcher" in ([_this select 0, false] call BIS_fnc_moveAction))}, {
		(_this select 2) call CBA_fnc_removePerFrameHandler;
	}, [_unit, _weapon, _disableLaserPFH], 8, {(_this select 2) call CBA_fnc_removePerFrameHandler}] call CBA_fnc_waitUntilAndExecute;
};