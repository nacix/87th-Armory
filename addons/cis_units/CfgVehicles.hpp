class CfgVehicles
{
	#define GENERIC_STEP_SOUNDS \
		 {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}

	#define DEFINE_STEPS_GENERIC \
		class SoundEnvironExt { \
			generic[] = { \
				GENERIC_STEP_SOUNDS \
			}; \
		}; \
		class SoundEquipment { \
		    soldier[] = { \
				GENERIC_STEP_SOUNDS \
            }; \
		};

	#define DISABLE_BREATH_SOUNDS \
		class SoundBreath \
		{ \
			breath[] = {}; \
		}; \
		class SoundDrown \
		{ \
			breath[] = {}; \
		}; \
		class SoundInjured \
		{ \
			breath[] = {}; \
		}; \
		class SoundBleeding \
		{ \
			breath[] = {}; \
		}; \
		class SoundBurning \
		{ \
			breath[] = {}; \
		}; \
		class SoundChoke \
		{ \
			breath[] = {}; \
		}; \
		class SoundRecovered \
		{ \
			breath[] = {}; \
		};

	#define BD_IDENTITY(category, uniform, preview) \
		IDENTITY(CIS, category, uniform, preview) \
		impactEffectsBlood = "ImpactMetal"; \
		impactEffectsNoBlood = "ImpactPlastic"; \
		canBleed = 0;

	#define B1_IDENTITY(uniform, preview) \
		BD_IDENTITY(B1, uniform, preview)

	#define B2_IDENTITY(preview) \
		BD_IDENTITY(B2, lsd_cis_b2Droid_uniform, preview)

	#define BX_IDENTITY(uniform, preview) \
		BD_IDENTITY(BX, uniform, preview)

	#define X1_IDENTITY(preview) \
		BD_IDENTITY(X1, JLTS_DroidB1_Prototype, preview)

	#define DROID_GEO(parentClass, uniform) \
		NEW_CLASS(parentClass##_Geo)##: TAG_CLASS(parentClass) \
		{ \
			BD_IDENTITY(B1_Geo, uniform, parentClass##_Geo) \
			EQUIPMENT(1, 1, JLTS_B1_antenna_Geonosis, 1, SWLB_comlink_droid) \
		};

	#define DROID_SIM(parentClass) \
		NEW_CLASS(parentClass##_Sim)##: TAG_CLASS(parentClass) \
		{ \
			BD_IDENTITY(Droid_Sim, JLTS_DroidB1_Training, parentClass##_Sim) \
			EQUIPMENT(1, 1, JLTS_B1_antenna_training, 1, SWLB_comlink_droid) \
		};

	#define MAGS_MISC \
		LIST_2(HandGrenade), \
		LIST_2(SmokeShell)

    class JLTS_Droid_B1_E5;
    class lsd_cis_b2_standard;
	class lsd_cis_bxdroid_specops;

    NEW_CLASS(Droid_B1_E5): JLTS_Droid_B1_E5
    {
		_generalMacro = CLASS(Droid_B1_E5);
        displayName = "B1 Droid (E-5)";
		B1_IDENTITY(JLTS_DroidB1, Droid_B1_E5)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, 1, 1, 1)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		DEFINE_STEPS_GENERIC
		DISABLE_BREATH_SOUNDS
    };
	NEW_CLASS(Droid_B1_E5C): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Support (E-5C)";
		B1_IDENTITY(JLTS_DroidB1, Droid_B1_E5C)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5C, 1, 1, 1)
		#define MAGAZINES \
			LIST_6(JLTS_E5C_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_Commander): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Commander (E-5)";
		B1_IDENTITY(JLTS_DroidB1_Commander, Droid_B1_Commander)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, JLTS_RG4D, 1, JLTS_DroidBinocular)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			LIST_3(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_Crew): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Mechanic (SB-B3)";
		B1_IDENTITY(JLTS_DroidB1_Crew, Droid_B1_Crew)
		EQUIPMENT(1, 1, JLTS_B1_antenna, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_SBB3, JLTS_RG4D, 1, JLTS_DroidBinocular)
		#define MAGAZINES \
			LIST_10(JLTS_SBB3_mag), \
			LIST_3(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_NCO): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Sergeant (E-5C)";
		B1_IDENTITY(JLTS_DroidB1_Marine, Droid_B1_NCO)
		WEAPONS(JLTS_E5C, JLTS_RG4D, 1, 1)
		#define MAGAZINES \
			LIST_10(JLTS_E5C_mag), \
			LIST_3(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_Pilot): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Pilot (RG-4D)";
		B1_IDENTITY(JLTS_DroidB1_Pilot, Droid_B1_Pilot)
		WEAPONS(1, JLTS_RG4D, 1, 1)
		#define MAGAZINES \
			LIST_10(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_AA): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Anti-Air (E-60R)";
		B1_IDENTITY(JLTS_DroidB1, Droid_B1_AA)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, 1, SWLW_E60R_AA, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			LIST_3(SWLW_e60r_aa_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_AT): TAG_CLASS(Droid_B1_AA)
	{
		displayName = "B1 Anti-Tank (E-60R)";
		B1_IDENTITY(JLTS_DroidB1, Droid_B1_AT)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, 1, SWLW_E60R, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			LIST_3(SWLW_e60r_at_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_E5S): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Sniper (E-5S)";
		B1_IDENTITY(JLTS_DroidB1_Security, Droid_B1_E5S)
		EQUIPMENT(1, 1, JLTS_B1_backpack, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5S, JLTS_RG4D, 1, JLTS_DroidBinocular)
		#define MAGAZINES \
			LIST_10(JLTS_E5S_mag), \
			LIST_3(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B1_RD4): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "B1 Grenadier (RD-4)";
		B1_IDENTITY(JLTS_DroidB1, Droid_B1_RD4)
		WEAPONS(SWLW_GL, JLTS_RG4D, 1, 1)
		#define MAGAZINES \
			LIST_4(SWLW_mag_40mm_1rnd), \
			LIST_8(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	DROID_GEO(Droid_B1_Commander, JLTS_DroidB1_Geonosis_commander)
	DROID_GEO(Droid_B1_E5, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_E5C, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_Crew, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_NCO, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_Pilot, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_AA, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_AT, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_E5S, JLTS_DroidB1_Geonosis)
	DROID_GEO(Droid_B1_RD4, JLTS_DroidB1_Geonosis)

	DROID_SIM(Droid_B1_E5)
	DROID_SIM(Droid_B1_E5C)
	DROID_SIM(Droid_B1_Commander)
	DROID_SIM(Droid_B1_Crew)
	DROID_SIM(Droid_B1_NCO)
	DROID_SIM(Droid_B1_Pilot)
	DROID_SIM(Droid_B1_AA)
	DROID_SIM(Droid_B1_AT)
	DROID_SIM(Droid_B1_E5S)
	DROID_SIM(Droid_B1_RD4)

	NEW_CLASS(Droid_X1_E5): TAG_CLASS(Droid_B1_E5)
	{
		displayName = "X1 Droid (E-5)";
		X1_IDENTITY(Droid_X1_E5)
		EQUIPMENT(1, ls_cis_bxCommando_vest, JLTS_B1_backpack_prototype, 1, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, UNSC_Knife, 1, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_X1_E5C): TAG_CLASS(Droid_X1_E5)
	{
		displayName = "X1 Droid (E-5C)";
		X1_IDENTITY(Droid_X1_E5C)
		WEAPONS(JLTS_E5C, UNSC_Knife, 1, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_E5C_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_X1_E5S): TAG_CLASS(Droid_X1_E5C)
	{
		displayName = "X1 Infiltrator (E-5S)";
		X1_IDENTITY(Droid_X1_E5S)
		WEAPONS(JLTS_E5S, UNSC_Knife, 1, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_E5S_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_X1_RD4): TAG_CLASS(Droid_X1_E5C)
	{
		displayName = "X1 Grenadier (RD-4)";
		X1_IDENTITY(Droid_X1_RD4)
		WEAPONS(SWLW_GL, JLTS_RG4D, 1, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_4(SWLW_mag_40mm_1rnd), \
			LIST_8(JLTS_RG4D_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_X1_SBB3): TAG_CLASS(Droid_X1_E5C)
	{
		displayName = "X1 Breacher (SB-B3)";
		X1_IDENTITY(Droid_X1_SBB3)
		WEAPONS(JLTS_SBB3, UNSC_Knife, 1, JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_10(JLTS_SBB3_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_X1_Z7): TAG_CLASS(Droid_X1_E5C)
	{
		displayName = "X1 Chaingunner (Z-7)";
		X1_IDENTITY(Droid_X1_Z7)
		WEAPONS(1, UNSC_Knife, TAG_CLASS(Z7), JLTS_CloneBinocular_Black)
		#define MAGAZINES \
			LIST_3(TAG_CLASS(Z7_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

    NEW_CLASS(Droid_B2): lsd_cis_b2_standard
    {
		_generalMacro = CLASS(Droid_B2);

        displayName = "B2 Battle Droid (Blaster)";
		B2_IDENTITY(Droid_B2)
		EQUIPMENT(1, ls_cis_bxCommando_vest, 1, 1, SWLB_comlink_droid)
		WEAPONS(WBK_B2_NormalMod, 1, 1, 1)
		#define MAGAZINES \
			LIST_10(SWLW_ZH73_Mag)
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
        items[] = {};
		respawnItems[] = {};
		class SoundEnvironExt {
			generic[] = {
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
			};
		};
		class SoundEquipment {
		    soldier[] = {
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
            };
		};
		DISABLE_BREATH_SOUNDS
    };
	NEW_CLASS(Droid_B2_Scatter): TAG_CLASS(Droid_B2)
	{
		displayName = "B2 Battle Droid (Scattergun)";
		B2_IDENTITY(Droid_B2_Scatter)
		WEAPONS(WBK_B2_ShotgunMod, 1, 1, 1)
		#define MAGAZINES \
			LIST_10(SWLW_DP20_mag)
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B2_Grenade): TAG_CLASS(Droid_B2)
	{
		displayName = "B2 Battle Droid (GL)";
		B2_IDENTITY(Droid_B2_Grenade)
		WEAPONS(WBK_B2_GrenadeMod, 1, 1, 1)
		#define MAGAZINES \
			LIST_10(SWLW_mag_40mm_1rnd)
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_B2_Rocket): TAG_CLASS(Droid_B2_Grenade)
	{
		displayName = "B2 Battle Droid (Salvo)";
		B2_IDENTITY(Droid_B2_Rocket)
		#define MAGAZINES \
			LIST_10(SWLW_mag_40mm_6rnd)
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	NEW_CLASS(Droid_BX): lsd_cis_bxdroid_specops
	{
		_generalMacro = CLASS(Droid_BX);

		displayName = "BX Commando (E-5)";
		BX_IDENTITY(lsd_cis_bxDroid_uniform, Droid_BX)
		EQUIPMENT(1, ls_cis_bxCommando_vest, 1, JLTS_NVG_droid_chip_2, SWLB_comlink_droid)
		WEAPONS(JLTS_E5, WBK_Dutch_Vibro, 1, 1)
		#define MAGAZINES \
			LIST_10(JLTS_E5_mag), \
			LIST_3(ACE_CTS9), \
			LIST_1(WBK_Cybercrystal), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };

		DEFINE_STEPS_GENERIC
		DISABLE_BREATH_SOUNDS
	};
	NEW_CLASS(Droid_BX_SL): TAG_CLASS(Droid_BX)
	{
		displayName = "BX Captain (E-5C)";
		BX_IDENTITY(lsd_cis_bxDroid_uniform, Droid_BX_SL)
		EQUIPMENT(1, 3AS_CIS_Officer_Vest, JLTS_B1_antenna_training, JLTS_NVG_droid_chip_2, SWLB_comlink_droid)
		WEAPONS(JLTS_E5C, TAG_CLASS(Vibroblade), 1, 1)
		#define MAGAZINES \
			LIST_6(JLTS_E5C_mag), \
			LIST_3(ACE_CTS9), \
			LIST_1(WBK_Cybercrystal), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Droid_BX_Diplomat): TAG_CLASS(Droid_BX)
	{
		displayName = "BX Diplomat (E-5)";
		BX_IDENTITY(lsd_cis_bxDiplomatDroid_uniform, Droid_BX_Diplomat)
	};
	NEW_CLASS(Droid_BX_Merc): TAG_CLASS(Droid_BX)
	{
		displayName = "BX Mercenary (E-5)";
		BX_IDENTITY(lsd_cis_bxSecurityDroid_uniform, Droid_BX_Merc)
	};
	NEW_CLASS(Droid_BX_Sim): TAG_CLASS(Droid_BX)
	{
		displayName = "BX Commando (E-5)";
		BD_IDENTITY(Droid_Sim, lsd_cis_bxTraining_uniform, Droid_BX_Sim)
	};
};