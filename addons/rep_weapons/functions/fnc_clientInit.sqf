#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Initializes clientside variables and calls handlers for weapon scripts at postInit.
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

LOG_1("clientInit: [%1]", player);

[] call FUNC(handleMuzzleSwitch);