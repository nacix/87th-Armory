#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles B2 pathfinding and walk animations.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 * 1: The droid's move poses <ARRAY>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget, ["move_1", "move_2"]] call ax87_cis_units_fnc_moveB2;
 *
 * Public: No
*/

params ["_droid", "_movePoses"];
TRACE_1("moveB2", _droid);

private _pathEH = _droid addEventHandler ["PathCalculated", {
    params ["_droid", "_movePoses"];

    // Starts our droid's walking animation
    [{ _this playMoveNow "B2_SupperBattleDroid_walk" }, _droid, 0.5] call CBA_fnc_waitAndExecute;

    // I haven't the faintest clue what this even does but I'm scared to delete it
    private _arStart = _droid getVariable "WBK_DT_PathFindingObjects";
    if (!isNil "_arStart") then { deleteVehicle _arStart };

    // Create an invisible pathfinding logic and store its data on our droid
    private _lastPoint = _movePoses select (count _movePoses - 1);
    private _marker = "Sign_Arrow_Yellow_F" createVehicleLocal _lastPoint; 
    _marker hideObject true;
    _droid setVariable ["WBK_DT_PathFindingObjects", _marker];

    // Wait until the unit is not moving or has reached its marker and reset its animation state to idle
    [{(isNull _droid || isNull _marker || !alive _droid || (_droid distance _marker <= 2))}, { _this playMoveNow "B2_SupperBattleDroid_idle" }, _droid] call CBA_fnc_waitUntilAndExecute;
}];

SETVAR(_droid, GVAR(droidPathEH), _pathEH);