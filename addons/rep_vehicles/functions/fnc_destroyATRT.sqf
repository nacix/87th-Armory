#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Destroys and deletes the given AT-RT walker
 *
 * Arguments:
 * 0: The Walker <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * player call ax87_rep_vehicles_fnc_destroyATRT;
 *
 * Public: No
*/

if (!isServer) exitWith {};

params ["_walker"];

private _explosions = ["ModuleMine_SLAMDirectionalMine_F", "ACE_ammoExplosionLarge"];
{
	private _payload = createVehicle [_x, position _walker, [], 0, "CAN_COLLIDE"];
	hideObject _payload;
	_payload attachTo [_walker, [0,.48,.25], "seat"];
	[_payload, [180, 50, 180]] call BIS_fnc_setObjectRotation;
	_payload setDamage 1;
} forEach _explosions;

if ((getPosATL _walker) select 2 <= 1.15) then {
	private _impactGround = createVehicle ["ModuleMine_SLAMDirectionalMine_F", position _walker, [], 0, "CAN_COLLIDE"];

	_impactGround attachTo [_walker, [0,-.5,-5]];
	[_impactGround, [180, -270, 180]] call BIS_fnc_setObjectRotation;
	_impactGround setDamage 1;
};

deleteVehicle _walker;