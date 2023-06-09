#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Makes the provided droid play the given push animation
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: The animation to play <STRING>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_droid, _anim] call ax87_cis_units_fnc_bxDoPush;
 *
 * Public: No
*/

params ["_droid", "_anim"];
private _target = _droid findNearestEnemy _droid;
TRACE_3("bxDoPush", _droid, _anim, _target);

// Get the visibility of our target
private _targetVisibility = lineIntersectsSurfaces [
    AGLToASL (_target modelToWorld [0, 0, 0.1]),
    AGLToASL (_droid modelToWorld [0, 0, 0.1]),
    _droid,
    _target,
    true,
    1,
    "GEOM",
    "NONE"
];

if ((_droid getVariable "IMS_IsAnimPlayed" == 0) && (alive _droid) && (GETVAR(_droid, GVAR(canAttack), 0) == 0) && (isTouchingGround _droid) && (count _targetVisibility == 0) && (animationState _droid isNotEqualTo "starWars_lightsaber_block_1") && (animationState _droid isNotEqualTo "starWars_lightsaber_block_2") && (animationState _droid isNotEqualTo "starWars_lightsaber_block_3") && (animationState _droid isNotEqualTo "starWars_lightsaber_hit_1") && (animationState _droid isNotEqualTo "starWars_lightsaber_hit_2") && (animationState _droid isNotEqualTo "starWars_lightsaber_blockPursuit")) then {
    LOG_2("(bxDoPush) [%1]: Starting animation [%2]...", _droid, _anim);
    
    // Set the animationPlayed variable to true
    _droid setVariable ["IMS_IsAnimPlayed", 1, true];
    
    [{
        params ["_droid", "_anim"];

        // Play the provided animation
        if (GETVAR(_droid, GVAR(canAttack), 0) == 0) then { _droid playMoveNow _anim };
    }, [_droid, _anim], 0.5] call CBA_fnc_waitAndExecute;

    // Wait for the animation to finish and reset the animationPlayer variable
    [{ _this setVariable ["IMS_IsAnimPlayed", 0, true]; LOG_2("(bxDoPush) [%1]: Animation [%2] finished!", _droid, _anim) }, _droid, 1.5] call CBA_fnc_waitAndExecute;
};