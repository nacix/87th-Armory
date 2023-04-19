#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Disables one-handing and removes all related eventHandlers.
 *
 * Arguments:
 * 0: The unit <OBJECT>
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

params ["_unit"];

_unit removeEventHandler ["animChanged", GETVAR(_unit,GVAR(animChangedEH),-1)];
LOG_2("Removing EventHandler 'animChanged' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(animChangedEH),-1));
SETVAR(_unit,GVAR(animChangedEH),-1);

_unit removeEventhandler ["gestureDone", GETVAR(_unit,GVAR(gestureDoneEH),-1)];
LOG_2("Removing EventHandler 'gestureDone' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(gestureDoneEH),-1));
SETVAR(_unit,GVAR(gestureDoneEH),-1);

_unit removeEventHandler ["Reloaded", GETVAR(_unit,GVAR(reloadedEH),-1)];
LOG_2("Removing EventHandler 'Reloaded' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(reloadedEH),-1));
SETVAR(_unit,GVAR(reloadedEH),-1);

_unit removeEventHandler ["GestureChanged", GETVAR(_unit,GVAR(gestureChangedEH),-1)];
LOG_2("Removing EventHandler 'GestureChanged' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(gestureChangedEH),-1));
SETVAR(_unit,GVAR(gestureChangedEH),-1);

removeUserActionEventHandler ["WalkRunToggle", "Activate", GETVAR(_unit,GVAR(walkRunToggleEH),-1)];
LOG_2("Removing EventHandler 'WalkRunToggle' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(walkRunToggleEH),-1));
SETVAR(_unit,GVAR(walkRunToggleEH),-1);

["weapon", GETVAR(_unit,GVAR(weaponEH),-1)] call CBA_fnc_removePlayerEventHandler;
LOG_2("Removing EventHandler 'weapon' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(weaponEH),-1));
SETVAR(_unit,GVAR(weaponEH),-1);

["featureCamera", GETVAR(_unit,GVAR(featureCameraEH),-1)] call CBA_fnc_removePlayerEventHandler;
LOG_2("Removing EventHandler 'featureCamera' on unit [%1] (ID: [%2])", _unit, GETVAR(_unit,GVAR(featureCameraEH),-1));
SETVAR(_unit,GVAR(featureCameraEH),-1);