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
			CLASS(Optic_Holo),
			CLASS(Muzzle_Stun),
			CLASS(Muzzle_Stun_Super),
			CLASS(ATRT_Weapon),
			CLASS(DC17SA),
			CLASS(DC15S),
			CLASS(DC15C),
			CLASS(DC15C_GL),
			CLASS(DC15A),
			CLASS(DC15A_GL),
			CLASS(DC15L),
			CLASS(Optic_DC15L),
			CLASS(WestarM5),
			CLASS(WestarM5_GL),
			CLASS(DP23),
			CLASS(Optic_VK38X),
			CLASS(Valken38X),
			CLASS(Firepuncher),
			CLASS(Optic_FP_Flip),
			CLASS(Optic_FP),
			CLASS(DW32S),
			CLASS(DC15X),
			CLASS(RPS6X),
			CLASS(RPS6X_fried),
			CLASS(DC15LE),
			CLASS(DC15LE_GL),
			CLASS(DC15S_Reflex),
			CLASS(DC15A_GL_Reflex),
			CLASS(DC15C_GL_Reflex),
			CLASS(DC15L_AR),
			CLASS(WestarM5_Scoped),
			CLASS(Firepuncher_Scoped),
			CLASS(DC15X_Lased),
			CLASS(Valken38X_Scoped),
			CLASS(DC17SA_Reflex),
			CLASS(DP23_Lased)
		};
		magazines[]=
		{
			CLASS(21Rnd_EC30_Mag),
			CLASS(45Rnd_EC40_Mag),
			CLASS(60Rnd_EC40_Mag),
			CLASS(30Rnd_EC50_Mag),
			CLASS(36Rnd_EC50_Mag),
			CLASS(20Rnd_EC60_Mag),
			CLASS(Stun_Mag_Long),
			CLASS(Stun_Mag_Super),
			CLASS(MK40X_AT_Guided),
			CLASS(MK42X_HE_Guided),
			CLASS(SmokeShellPurple),
			CLASS(SmokeShellViolet),
			CLASS(SmokeShellMidnight)
		};
		ammo[]=
		{
			CLASS(ammo_stun),
			CLASS(ammo_stun_super),
			CLASS(ammo_Penetrator),
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