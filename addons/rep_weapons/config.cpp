#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = CSTRING(AuxTeam);
		authors[] = {"Anorexican"};
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"3AS_Main",
			"3AS_Weapons",
			"3AS_Weapons_RPS6",
			"JLTS_core",
			"JLTS_weapons_DC15X",
			"JLTS_weapons_RPS6"
        };
        units[] = {};
		weapons[]=
		{
			"87th_3AS_DC15A_F",
			"87th_3AS_DC15LE_F",
			"87th_3AS_DC15S_F",
			"87th_3AS_DC15A_GL",
			"87th_3AS_DC15LE_GL",
			"87th_3AS_DC15C_GL",
			"87th_3AS_DC15C_F",
			"87th_3AS_DC15L_F",
			"87th_JLTS_DC15X",
			"87th_RPS6X"
		};
		magazines[]=
		{
			"87th_MK40X_AT_Guided",
			"87th_MK42X_HE_Guided",
			"87th_SmokeShellPurple",
			"87th_SmokeShellViolet",
			"87th_SmokeShellMidnight"
		};
		ammo[]=
		{
			"MissileBase",
			"ammo_Penetrator_Base",
			"87th_ammo_Penetrator",
			"87th_M_MK40X_AT",
			"87th_M_MK42X_HE",
			"87th_SmokeShellPurple_ammo",
			"87th_SmokeShellViolet_ammo",
			"87th_SmokeShellMidnight_ammo"
		};
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"