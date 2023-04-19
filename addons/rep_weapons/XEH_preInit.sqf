#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

[
	QGVAR(enabled),
	"CHECKBOX",
	["Enable", "Toggles whether or not one-handing should be possible"],
	["87th Legion - Sidearms", "[1] - Global Settings"],
	true,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_enabled' (one-handing) set to [%1] on client [%2]",_this,player);
	
		if (_this) then {
			if (GETVAR(player,GVAR(featureCameraEH),-1) == -1) then {
				player call FUNC(handleOneHanding);
				[player, true] call FUNC(setHandPos);
				LOG_1("Client [%1]: Reinitializing one-handing handler and attempting handPos update",player);
			};
		} else {
			LOG_1("Client [%1]: Disabling all one-handing functionality",player);
			if (currentWeapon player isEqualTo handgunWeapon player && GETVAR(player,GVAR(usingOneHand),false)) then {
				[_unit, false] call FUNC(setHandPos);
				LOG_1("Unit [%1]: Preparing to disable one-handing",_unit);
			};
		};
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(allowOneHandWalking),
	"CHECKBOX",
	["Allow Walking", "Toggles whether or not one-handing should be possible while walking"],
	["87th Legion - Sidearms", "[2] - Client Settings"],
	false,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_allowOneHandWalking' set to [%1] on client [%2]",_this,player);
		if ((!GETGVAR(enabled,true) && !GETVAR(player,GVAR(usingOneHand),true)) || vehicle player isNotEqualTo player) exitWith {};

		if (_this) then {
			SETVAR(player,GVAR(isUnitWalking),false);
			[player, true] call FUNC(setHandPos);
		} else {
			SETVAR(player,GVAR(isUnitWalking),isWalking player);
			[player, isWalking player] call FUNC(setHandPos);
			LOG_1("Client [%1]: Disabling all one-handing functionality",player);
		};
		LOG_1("Client [%1]: Attempting handPos update",player);
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(useTagWhitelist),
	"CHECKBOX",
	["Whitelist Mode", "Replaces default mode (blacklist) with a whitelist system. This means any tag NOT listed below will not support one-handing."],
	["87th Legion - Sidearms", "[3] - Tag Settings"],
	false,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_useTagWhitelist' set to [%1] on client [%2]",_this,player);
	},
	false
] call CBA_fnc_addSetting;
[
	QGVAR(tagList),
	"EDITBOX",
	["Target Tags", "Tags that should be white/blacklisted for one-handing. Separate entries with a comma. Tags can be found at the start of any weapon's ID in the arsenal. Ex: ""rhs"", ""cup"", ""wbk"")"],
	["87th Legion - Sidearms", "[3] - Tag Settings"],
	"wbk",
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_tagList' set to [%1] on client [%2]",_this,player);
		if (count _this < 1) exitWith { SETPRVAR(GVAR(tagList),[]) };

		private _tagArray = _this;

		if (count _this > 1) then {
			_tagArray = ([trim _this, ","] call CBA_fnc_split) apply { trim _x };
		} else {
			_tagArray = trim _tagArray;
		};

		SETPRVAR(GVAR(tagList),_tagArray);
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(useWeaponWhitelist),
	"CHECKBOX",
	["Whitelist Mode", "Replaces default mode (blacklist) with a whitelist system. This means any weapon NOT listed below will not support one-handing."],
	["87th Legion - Sidearms", "[4] - Weapon Settings"],
	false,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_useWeaponWhitelist' set to [%1] on client [%2]",_this,player);
	},
	false
] call CBA_fnc_addSetting;
[
	QGVAR(weaponList),
	"EDITBOX",
	["Target Weapons", "Weapons that should be white/blacklisted for one-handing. Separate entries with a comma. A weapon's ID is shown when hovering over it in the arsenal. Ex: ""arifle_MX_F"", ""arifle_MXM_F"""],
	["87th Legion - Sidearms", "[4] - Weapon Settings"],
	"",
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_weaponList' set to [%1] on client [%2]",_this,player);
		if (count _this < 1) exitWith { SETPRVAR(GVAR(weaponList),[]) };

		private _weaponArray = _this;

		if (count _this > 1) then {
			_weaponArray = ([trim _this, ","] call CBA_fnc_split) apply { trim _x };
		} else {
			_weaponArray = [trim _weaponArray];
		};
		
		SETPRVAR(GVAR(weaponList),_weaponArray);
	},
	false
] call CBA_fnc_addSetting;