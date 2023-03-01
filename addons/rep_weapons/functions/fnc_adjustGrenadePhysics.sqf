#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Overrides BI's native grenade physics to reduce jank and overbounce.
 * Args are taken directly from the "Fired" weapon EventHandler.
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
 * NONE
 *
 * Public: No
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if (!(isServer) || _weapon != "Throw" || !("87th" in _muzzle)) exitWith {};

[{(position _this) select 2 < 0.2}, {
	_velocity = velocity _this;
	_this setVelocity (_velocity apply {_x * 0.35});
}, _projectile, 120] call CBA_fnc_waitUntilAndExecute;