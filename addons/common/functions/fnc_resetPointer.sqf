#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Used to reset a unit's laser on loadout changes.
 *
 * This acts as a workaround for a base game bug that causes visible lasers to fail to disable when they should.
 * More detail on the bug can be found in the header for fnc_init.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * player call ax87_lasers_fnc_resetPointer;
 *
 * Public: No
*/

params ["_unit"];

if (!hasInterface || !local _unit) exitWith {}; // Only executes on player client

_unit action ["IRLaserOff", _unit];
[{ _this action ["IRLaserOn", _this] }, _unit] call CBA_fnc_execNextFrame; // Run on next frame to ensure the laser had time to disable properly