#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = ECSTRING(Common,AuxTeam);
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
			"3AS_ATRT",
			"442_weapons",
			"442_weapons_773",
			"442_weapons_explosives",
			"JLTS_core",
			"JLTS_weapons_Core",
			"JLTS_weapons_DC15X",
			"JLTS_weapons_DC17SA",
			"JLTS_weapons_DP23",
			"JLTS_weapons_DW32S",
			"JLTS_weapons_RPS6",
			"LF_Weapon_Unit_DC15X"
        };
        units[] = {};
		weapons[]=
		{
			CLASS(acc_pointer_Purple),
			CLASS(acc_pointer_Purple_IR),
			CLASS(acc_pointer_Short_Purple),
			CLASS(acc_pointer_Short_Purple_IR),
			CLASS(acc_pointer_Long_Purple),
			CLASS(acc_pointer_Long_Purple_IR),
			CLASS(acc_flashlight),
			CLASS(3AS_DC15A_F),
			CLASS(3AS_DC15LE_F),
			CLASS(3AS_DC15S_F),
			CLASS(3AS_DC15A_GL),
			CLASS(3AS_DC15LE_GL),
			CLASS(3AS_DC15C_GL),
			CLASS(3AS_DC15C_F),
			CLASS(3AS_DC15L_F),
			CLASS(3AS_WestarM5_F),
			CLASS(JLTS_DC15X),
			CLASS(k_773_rifle),
			CLASS(Optic_Holo),
			CLASS(Optic_VK38X),
			CLASS(ATRT_Weapon),
			CLASS(DC15A),
			CLASS(DC15A_GL),
			CLASS(DC15C),
			CLASS(DC15C_GL),
			CLASS(DC15L),
			CLASS(DC15S),
			CLASS(DC17SA),
			CLASS(DC17SA_Shield),
			CLASS(DC15X),
			CLASS(DP23),
			CLASS(DW32S),
			CLASS(Firepuncher),
			CLASS(Optic_FP_Flip),
			CLASS(Optic_FP),
			CLASS(RPS6X),
			CLASS(Valken38X),
			CLASS(WestarM5),
			CLASS(WestarM5_GL)
		};
		magazines[]=
		{
			CLASS(MK40X_AT_Guided),
			CLASS(MK42X_HE_Guided),
			CLASS(SmokeShellPurple),
			CLASS(SmokeShellViolet),
			CLASS(SmokeShellMidnight)
		};
		ammo[]=
		{
			"MissileBase",
			"ammo_Penetrator_Base",
			CLASS(ammo_Penetrator),
			CLASS(ammo_stun),
			CLASS(ammo_stun_super),
			CLASS(M_MK40X_AT),
			CLASS(M_MK42X_HE),
			CLASS(SmokeShellPurple_ammo),
			CLASS(SmokeShellViolet_ammo),
			CLASS(SmokeShellMidnight_ammo)
		};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"