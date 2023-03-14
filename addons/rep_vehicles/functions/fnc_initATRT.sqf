#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Globally applies addActions to AT-RT walker on init
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * cursorTarget call ax87_rep_vehicles_fnc_initATRT;
 *
 * Public: No
*/

params ["_walker"];

_walker addAction ["Mount AT-RT", { _this call FUNC(handleATRT) }, [], 3.0, true, true, "", "_this isNotEqualTo _originalTarget", 4];

_walker addAction ["Dismount AT-RT", { (_this select 1) call FUNC(exitATRT) }, [], 3.0, true, true, "", "_this isEqualTo _originalTarget", 2];