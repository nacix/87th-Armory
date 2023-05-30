#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Selects a random clone face then assigns it to the provided unit. Also assigns a rank and designation.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("meleeB1", _droid);

// Check the visibility status of nearby units and reveal them if necessary
LOG_1("(meleeB1) [%1]: Grabbing nearest entities and selecting target...", _droid);
{
    private _isTargetVisible = lineIntersects [getPosASL _droid, eyePos _x, _droid, _x];
    if (!_isTargetVisible) then { _droid reveal [_x, 4] };
} forEach (_droid nearEntities ["Man", 5]);

// Grab the nearest enemy unit and check if they qualify for a melee attack
private _target = _droid findNearestEnemy _droid;

// TODO: Fix function definition
if ((currentWeapon _target isEqualTo "") and !(handGunWeapon _target in IMS_Melee_Weapons) and (((_droid worldToModel (_target modelToWorld [0, 0, 0])) select 1) > 0) and ((_target distance _droid) <= 2.1) and (_droid getVariable "canMakeAttack" == 0) and (alive _droid) and !(lifeState _droid == "INCAPACITATED") and !(animationState _droid == "B1_Droid_execution_main")) then {
    LOG_2("(meleeB1) [%1]: Melee successful! Calling execution script on [%2]...", _droid, _target);
    [_droid, _target] call FUNC(doExecutionB1);
};