#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Overrides BI's native grenade physics to reduce jank and overbounce.
 * Args are taken directly from the "Fired" weapon EventHandler.
 *
 * Arguments:
 * Called by BI's "Fired" weapon EventHandler.
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

LOG_1("clientInit: [%1]", player);
call FUNC(handleMuzzleSwitch);
call FUNC(handleOneHanding);