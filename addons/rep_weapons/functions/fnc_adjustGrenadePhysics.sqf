#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Overrides BI's native grenade physics to reduce jank and overbounce.
 * Args are taken directly from the "Fired" weapon EventHandler.
 *
 * Arguments:
 * Called by BI's "Fired" weapon EventHandler.
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

if (!(isServer) || _weapon isNotEqualTo "Throw" || !("87th" in _muzzle)) exitWith {};

TRACE_8("adjustGrenadePhysics",_unit,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile,_gunner);

// Wait until the grenade is 0.2m off the nearest solid surface
[{(position _this) select 2 < 0.2}, {
	// Lower the velocity of the projectile by 80%
	_velocity = velocity _this;
	_this setVelocity (_velocity apply { _x * 0.20 });

	LOG_1("Handling grenade bounce at [%1] m/s",_velocity);
}, _projectile, 20] call CBA_fnc_waitUntilAndExecute;