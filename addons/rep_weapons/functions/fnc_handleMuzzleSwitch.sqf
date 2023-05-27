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

// Add EH to wait for muzzle switch events
private _muzzleChangeHandler = ["muzzle", {
	params ["_unit", "_weapon", "_muzzle"];

	// Runs muzzle-specific code on supported weapons
	switch _weapon do {
		case CLASS(DP23): { _unit removePrimaryWeaponItem CLASS(Optic_Holo) }; // Sets the DP-23 optic to shotgun mode
		case "Blaster": { _unit addPrimaryWeaponItem CLASS(Optic_Holo) }; // Sets the DP-23 optic to blaster mode
	};
}] call CBA_fnc_addPlayerEventHandler;

SETVAR(_unit,GVAR(muzzleEH),_muzzleChangeHandler);