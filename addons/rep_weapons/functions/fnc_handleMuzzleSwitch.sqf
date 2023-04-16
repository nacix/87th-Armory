#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Creates an event handler that fires when the player's weapon muzzle changes. Used to change optics when the player changes muzzles.
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

if (isServer && !hasInterface) exitWith {}; // Only run on clients

private _unit = player;

private _muzzleChangeHandler = ["muzzle", {
	params ["_unit", "_weapon", "_muzzle"];

	switch _weapon do {
		case "87th_DP23": { _unit removePrimaryWeaponItem "3as_optic_holo_dc15s" };
		case "Blaster": { _unit addPrimaryWeaponItem "3as_optic_holo_dc15s" };
	};
}] call CBA_fnc_addPlayerEventHandler;

SETVAR(_unit,GVAR(muzzleEH),_muzzleChangeHandler);