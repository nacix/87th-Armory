#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles droid melee attack opportunities and calls the appropriate execution script.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_handleDroidMelee;
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("handleDroidMelee", _droid);

private _meleeOpportunityPFH = [{  
    params ["_droid"];

    if ((lifeState _droid) isEqualto "INCAPACITATED") exitWith { _droid allowDamage true };

    {
        private _targetVisibility = lineIntersects [ getPosASL _droid, eyePos _x, _droid, _x];
        if (!_targetVisibility) then { _droid reveal [_x, 4] };
    } forEach (_droid nearEntities ["Man", 15]);

    private _target = _droid findNearestEnemy _droid;
    if ((isDamageAllowed _target) && (currentWeapon _target isEqualTo "") && !(handGunWeapon _target in IMS_Melee_Weapons) && ((_droid worldToModel (_target modelToWorld [0, 0, 0])) select 1) > 0 && (_target distance _droid <= 2.25) && (GETVAR(_droid, GVAR(canAttack), 0) == 0) && alive _droid && (lifeState _droid isNotEqualTo "INCAPACITATED") && ((animationState _droid isNotEqualTo "B1_Droid_execution_main") && (animationState _droid isNotEqualTo "B2_SupperBattleDroid_melee"))) then {
        LOG_2("(handleDroidMelee) [%1]: Valid melee target detected! Calling execution script against [%2]...", _droid, _target);
        switch (true) do {
            case (_droid isKindOf CLASS(Droid_BX)): { /*[_droid, _target] call FUNC(doExecutionBX)*/ };
            case (_droid isKindOf CLASS(Droid_B2)): { [_droid, _target] call FUNC(doExecutionB2) };
            default { [_droid, _target] call FUNC(doExecutionB1) };
        };
    } else {
        LOG_1("(handleB1) [%1]: Enemy detected! Beginning pathfinding...", _droid);
		_droid doMove (getPos _target);
    };
}, 0.4, _droid] call CBA_fnc_addPerFrameHandler;

SETVAR(_droid, GVAR(droidMeleePFH), _meleeOpportunityPFH);