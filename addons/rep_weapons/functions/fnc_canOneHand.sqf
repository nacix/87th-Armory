#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Checks whether or not the player is in an animation that supports one-handing
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: The unit's current animation state <STRING>
 *
 * Return Value:
 * Can the unit one-hand? <BOOL>
 *
 * Examples:
 * NONE
 *
 * Public: No
*/

if (isServer && !hasInterface) exitWith {}; // Only run on clients

params ["_unit", "_anim"];
TRACE_2("canOneHand",_unit,_anim);

if (GETVAR(_unit,GVAR(justReloaded),false) && {("mrun" in _anim || "mtac" in _anim || "mstp" in _anim || "aadj" in _anim)}) exitWith { LOG_1("Unit [%1] has finished reloading",_unit); SETVAR(_unit,GVAR(justReloaded),false); true };

private _canOneHand = !("ainv" in _anim || "wrfl" in _anim || "wlnr" in _anim || "wnon" in _anim || "slow" in _anim || ("sras" in _anim && "mrun" in _anim) || "meva" in _anim || "prone" in _anim || ("ppne" in _anim && !("perc" in _anim || "pknl" in _anim)));

if (!GETGVAR(allowOneHandWalking,false) && "sras" in _anim && "mwlk" in _anim) then { _canOneHand = false };

_canOneHand;