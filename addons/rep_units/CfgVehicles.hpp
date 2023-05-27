class CfgVehicles {
	class B_Soldier_F;
	class B_Officer_F;
	class B_Soldier_LAT_F;
	class B_Soldier_SL_F;
	class B_Soldier_M_F;
	class B_Medic_F;
	class B_Soldier_exp_F;
	class B_soldier_AR_F;

	class JLTS_Clone_P1_DC15A;
	class JLTS_Clone_P2_DC15S;
	class JLTS_Clone_P2_DC15AUGL;
	class JLTS_Clone_P2_DP23;
	class JLTS_Clone_P2_captain;
	class JLTS_Clone_P2_commander;
	class JLTS_Clone_P2_jump;
	class JLTS_Clone_P2_major;
	class JLTS_Clone_P2_RTO;
	class JLTS_Clone_P2_sergeant;
	class JLTS_Clone_P2_sergeantmajor;

	#define JLTS_CLASS(className, parentClass) \
	class className##: parentClass \
	{ \
		identityTypes[]=  \
		{ \
			"CloneTrooperENG", \
			CLASS(face_clone), \
			CLASS(Clone) \
		}; \
	};

	#define REP_IDENTITY(category, uniform, preview) \
		IDENTITY(Legion, category, uniform, preview)

	#define TR_IDENTITY(preview) \
		REP_IDENTITY(Troopers, TAG_CLASS(Trooper_Uniform), preview)

	#define P1_IDENTITY(preview) \
		REP_IDENTITY(P1_Troopers, TAG_CLASS(P1_Trooper_Uniform), preview)

	#define ARF_IDENTITY(preview) \
		REP_IDENTITY(ARF, TAG_CLASS(ARF_Uniform), preview)

	#define BARC_IDENTITY(preview) \
		REP_IDENTITY(BARC, TAG_CLASS(ARF_Uniform), preview)

	#define AB_IDENTITY(preview) \
		REP_IDENTITY(AB, TAG_CLASS(Trooper_Uniform), preview)

	#define ARC_IDENTITY(preview) \
		REP_IDENTITY(ARC, TAG_CLASS(Trooper_Uniform), preview)

	#define RC_IDENTITY(preview) \
		REP_IDENTITY(RC, TAG_CLASS(Katarn_Armor), preview)

	#define MAGS_MISC \
		MAG_3(TAG_CLASS(21Rnd_EC30_Mag)), \
		MAG_2(SmokeShellGreen), \
		MAG_2(Chemlight_green), \
		MAG_2(JLTS_stun_mag_long), \
		MAG_2(HandGrenade), \
		MAG_1(SmokeShell)

	JLTS_CLASS(JLTS_Clone_P2_DC15A, B_Soldier_F)
	JLTS_CLASS(JLTS_Clone_P2_lieutenant, B_Officer_F)
	JLTS_CLASS(JLTS_Clone_P2_AT, B_Soldier_LAT_F)
	JLTS_CLASS(JLTS_Clone_P2_corporal, B_Soldier_SL_F)
	JLTS_CLASS(JLTS_Clone_P2_marksman, B_Soldier_M_F)
	JLTS_CLASS(JLTS_Clone_P2_medic, B_Medic_F)
	JLTS_CLASS(JLTS_Clone_P2_EOD, B_Soldier_exp_F)
	JLTS_CLASS(JLTS_Clone_P2_AR, B_soldier_AR_F)

	NEW_CLASS(Clone_DC15A): JLTS_Clone_P2_DC15A
	{
		displayName = "Clone Trooper (DC-15A)";
		TR_IDENTITY(Clone_DC15A)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_DC15S): JLTS_Clone_P2_DC15S 
	{
		displayName = "Clone Trooper (DC-15S)";
		TR_IDENTITY(Clone_DC15S)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_DC15AUGL): JLTS_Clone_P2_DC15AUGL 
	{
		displayName = "Clone Grenadier (DC-15A)";
		TR_IDENTITY(Clone_DC15AUGL)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), JLTS_CloneVestHolster, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A_GL_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_DP23): JLTS_Clone_P2_DP23 
	{
		displayName = "Clone Trooper (DP-23)";
		TR_IDENTITY(Clone_DP23)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_AT): JLTS_Clone_P2_AT 
	{
		displayName = "Clone AT Trooper";
		TR_IDENTITY(Clone_AT)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), TAG_CLASS(RPS6X), SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_5(MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Captain): JLTS_Clone_P2_captain 
	{
		displayName = "Clone Captain";
		TR_IDENTITY(Clone_Captain)
		EQUIPMENT(TAG_CLASS(Officer_Helmet), TAG_CLASS(Officer_Accessories), 0, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Commander): JLTS_Clone_P2_commander 
	{
		displayName = "Clone Commander";
		TR_IDENTITY(Clone_Commander)
		EQUIPMENT(TAG_CLASS(Stim_Helmet), TAG_CLASS(Commander_Accessories), JLTS_Clone_jumppack_mc, JLTS_CloneNVGMC, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Corporal): JLTS_Clone_P2_corporal 
	{
		displayName = "Clone Corporal";
		TR_IDENTITY(Clone_Corporal)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), JLTS_CloneVestHolster, 0, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15C_GL_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(36Rnd_EC50_Mag)), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Jumper): JLTS_Clone_P2_jump 
	{
		displayName = "Clone Jet Trooper";
		TR_IDENTITY(Clone_Jumper)
		EQUIPMENT(TAG_CLASS(Jet_Trooper_Helmet), JLTS_CloneVestHolster, JLTS_Clone_jumppack_JT12, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Lieutenant): JLTS_Clone_P2_lieutenant 
	{
		displayName = "Clone Lieutenant";
		TR_IDENTITY(Clone_Lieutenant)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Lieutenant_Accessories), 0, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Major): JLTS_Clone_P2_major 
	{
		displayName = "Clone Major";
		TR_IDENTITY(Clone_Major)
		EQUIPMENT(TAG_CLASS(Raven_Helmet), TAG_CLASS(Officer_Accessories), 0, JLTS_CloneNVGCC, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Marksman): JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Marksman";
		TR_IDENTITY(Clone_Marksman)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Recon_Accessories), 0, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DW32S), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(20Rnd_EC60_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Medic): JLTS_Clone_P2_medic
	{
		displayName = "Clone Medic";
		TR_IDENTITY(Clone_Medic)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Medic_Vest), TAG_CLASS(Medic_Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR_medic""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(Clone_EOD): JLTS_Clone_P2_eod 
	{
		displayName = "Clone Engineer";
		Engineer = 2;
		canDeactivateMines = 1;
		TR_IDENTITY(Clone_EOD)
		EQUIPMENT(TAG_CLASS(Engineer_Helmet), JLTS_CloneVestSuspender, TAG_CLASS(EOD_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DP23_Lased), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(TAG_CLASS(30Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(Clone_RTO): JLTS_Clone_P2_RTO 
	{
		displayName = "Clone RTO";
		TR_IDENTITY(Clone_RTO)
		EQUIPMENT(TAG_CLASS(RTO_Helmet), JLTS_CloneVestSuspender, TAG_CLASS(RTO_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Sergeant): JLTS_Clone_P2_sergeant 
	{
		displayName = "Clone Sergeant";
		TR_IDENTITY(Clone_Sergeant)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Kama), 0, TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_SergeantMajor): JLTS_Clone_P2_sergeantmajor 
	{
		displayName = "Clone Sergeant-Major";
		TR_IDENTITY(Clone_SergeantMajor)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Recon_Officer_Accessories), 0, TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_AR): JLTS_Clone_P2_AR 
	{
		displayName = "Clone Heavy Trooper";
		TR_IDENTITY(Clone_AR)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), JLTS_CloneVestAirborneNCO, TAG_CLASS(Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15L_AR), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_Sharpshooter): JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Sharpshooter";
		TR_IDENTITY(Clone_Sharpshooter)
		EQUIPMENT(TAG_CLASS(Trooper_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Macrobinocular_Low), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(Valken38X_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	NEW_CLASS(Clone_P1_DC15A): JLTS_Clone_P2_DC15A 
	{
		displayName = "Clone Trooper (DC-15A)";
		P1_IDENTITY(Clone_P1_DC15A)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_DC15S): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Trooper (DC-15S)";
		P1_IDENTITY(Clone_P1_DC15S)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_DC15AUGL): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Grenadier (DC-15A)";
		icon = "JLTS_iconManHeavy";
		P1_IDENTITY(Clone_P1_DC15AUGL)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), JLTS_CloneVestHolster, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A_GL), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_AT): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone AT Trooper";
		icon = "iconManAT";
		P1_IDENTITY(Clone_P1_AT)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), TAG_CLASS(RPS6X), SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_5(MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Captain): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Captain";
		icon = "iconManOfficer";
		P1_IDENTITY(Clone_P1_Captain)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Officer_Accessories), 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Commander): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Commander";
		icon = "iconManOfficer";
		P1_IDENTITY(Clone_P1_Commander)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Commander_Accessories), 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Corporal): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Corporal";
		icon = "iconManLeader";
		P1_IDENTITY(Clone_P1_Corporal)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A_GL_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Lieutenant): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Lieutenant";
		icon = "iconManOfficer";
		P1_IDENTITY(Clone_P1_Lieutenant)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Lieutenant_Accessories), 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Medic): TAG_CLASS(Clone_P1_DC15S)
	{
		displayName = "Clone Medic";
		attendant = 1;
		icon = "iconManMedic";
		P1_IDENTITY(Clone_P1_Medic)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Medic_Vest), TAG_CLASS(Medic_Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR_medic""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(Clone_P1_EOD): TAG_CLASS(Clone_P1_DC15S)
	{
		displayName = "Clone Engineer";
		Engineer = 2;
		canDeactivateMines = 1;
		icon = "iconManExplosive";
		P1_IDENTITY(Clone_P1_EOD)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), JLTS_CloneVestSuspender, TAG_CLASS(EOD_Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(Clone_P1_RTO): TAG_CLASS(Clone_P1_DC15S)
	{
		displayName = "Clone RTO";
		P1_IDENTITY(Clone_P1_RTO)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), JLTS_CloneVestSuspender, TAG_CLASS(RTO_Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Sergeant): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Sergeant";
		icon = "iconManLeader";
		P1_IDENTITY(Clone_P1_Sergeant)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Kama), 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15A), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_AR): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Heavy Trooper";
		icon = "JLTS_iconManSupportGunner";
		P1_IDENTITY(Clone_P1_AR)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), JLTS_CloneVestAirborneNCO, TAG_CLASS(Backpack), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15L_AR), TAG_CLASS(DC17SA_Reflex), 0, 0)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(Clone_P1_Sharpshooter): TAG_CLASS(Clone_P1_DC15A)
	{
		displayName = "Clone Sharpshooter";
		icon = "JLTS_iconManSniper";
		P1_IDENTITY(Clone_P1_Sharpshooter)
		EQUIPMENT(TAG_CLASS(P1_Trooper_Helmet), TAG_CLASS(Recon_NCO_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Macrobinocular_Low), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(Valken38X_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	NEW_CLASS(ARF_DC15S): TAG_CLASS(Clone_DC15S)
	{
		displayName = "ARF Trooper (DC-15S)";
		icon = "JLTS_iconManRecon";
		ARF_IDENTITY(ARF_DC15S)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARF_Sniper): TAG_CLASS(Clone_Sharpshooter)
	{
		displayName = "ARF Sniper";
		ARF_IDENTITY(ARF_Sniper)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15X), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
	};
	NEW_CLASS(ARF_Spotter): TAG_CLASS(Clone_Marksman)
	{
		displayName = "ARF Spotter";
		ARF_IDENTITY(ARF_Spotter)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_NCO_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	NEW_CLASS(ARF_JTAC): TAG_CLASS(Clone_RTO)
	{
		displayName = "ARF JTAC";
		icon = "JLTS_iconManRecon";
		ARF_IDENTITY(ARF_JTAC)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(RTO_Backpack_Recon), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARF_AT): TAG_CLASS(Clone_AT)
	{
		displayName = "ARF AT Trooper";
		ARF_IDENTITY(ARF_AT)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), TAG_CLASS(RPS6X), SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAG_3(MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.6,
			CLASS(ARF_Helmet_P2), 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	NEW_CLASS(ARF_EOD): TAG_CLASS(Clone_EOD)
	{
		displayName = "ARF Engineer";
		ARF_IDENTITY(ARF_EOD)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DP23_Lased), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(TAG_CLASS(30Rnd_EC50_Mag)), \
			MAGS_MISC
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.3,
			CLASS(ARF_Helmet_P2), 0.7
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear}; [_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(ARF_CLS): TAG_CLASS(Clone_Medic)
	{
		displayName = "ARF Medic";
		ARF_IDENTITY(ARF_CLS)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Medic_Vest), TAG_CLASS(Belt_Bag_Medic), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARF_NCO): TAG_CLASS(Clone_Sergeant)
	{
		displayName = "ARF Sergeant";
		ARF_IDENTITY(ARF_NCO)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Recon_Officer_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.7,
			CLASS(ARF_Helmet_P2), 0.3
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	NEW_CLASS(ARF_Lieutenant): TAG_CLASS(Clone_Lieutenant)
	{
		displayName = "ARF Lieutenant";
		ARF_IDENTITY(ARF_Lieutenant)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Lieutenant_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.7,
			CLASS(ARF_Helmet_P2), 0.3
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	NEW_CLASS(ARF_Captain): TAG_CLASS(Clone_Captain)
	{
		displayName = "ARF Captain";
		ARF_IDENTITY(ARF_Captain)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Officer_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.6,
			CLASS(ARF_Helmet_P2), 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	NEW_CLASS(ARF_Major): TAG_CLASS(Clone_Commander)
	{
		displayName = "ARF Major";
		ARF_IDENTITY(ARF_Major)
		EQUIPMENT(TAG_CLASS(ARF_Helmet), TAG_CLASS(Commander_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			CLASS(ARF_Helmet), 0.6,
			CLASS(ARF_Helmet_P2), 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};

	NEW_CLASS(BARC_DC15S): TAG_CLASS(ARF_DC15S)
	{
		displayName = "BARC Trooper (DC-15S)";
		BARC_IDENTITY(BARC_DC15S)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	NEW_CLASS(BARC_Sniper): TAG_CLASS(ARF_Sniper)
	{
		displayName = "BARC Sniper";
		BARC_IDENTITY(BARC_Sniper)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15X), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
	};
	NEW_CLASS(BARC_Spotter): TAG_CLASS(ARF_Spotter)
	{
		displayName = "BARC Spotter";
		BARC_IDENTITY(BARC_Spotter)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Recon_NCO_Accessories), TAG_CLASS(Belt_Bag), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	NEW_CLASS(BARC_JTAC): TAG_CLASS(ARF_JTAC)
	{
		displayName = "BARC JTAC";
		BARC_IDENTITY(BARC_JTAC)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Recon_Accessories), TAG_CLASS(RTO_Backpack_Recon), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	NEW_CLASS(BARC_CLS): TAG_CLASS(ARF_CLS)
	{
		displayName = "BARC Medic";
		BARC_IDENTITY(BARC_CLS)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Medic_Vest), TAG_CLASS(Belt_Bag_Medic), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	NEW_CLASS(BARC_NCO): TAG_CLASS(ARF_NCO)
	{
		displayName = "BARC Sergeant";
		BARC_IDENTITY(BARC_NCO)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Recon_Officer_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		headgearList[] = {};
		class EventHandlers {};
	};
	NEW_CLASS(BARC_Lieutenant): TAG_CLASS(ARF_Lieutenant)
	{
		displayName = "BARC Lieutenant";
		BARC_IDENTITY(BARC_Lieutenant)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Lieutenant_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		headgearList[] = {};
		class EventHandlers {};
	};
	NEW_CLASS(BARC_Captain): TAG_CLASS(ARF_Captain)
	{
		displayName = "BARC Captain";
		BARC_IDENTITY(BARC_Captain)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Officer_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		headgearList[] = {};
		class EventHandlers {};
	};
	NEW_CLASS(BARC_Major): TAG_CLASS(ARF_Major)
	{
		displayName = "BARC Major";
		BARC_IDENTITY(BARC_Major)
		EQUIPMENT(TAG_CLASS(BARC_Helmet), TAG_CLASS(Commander_Accessories), TAG_CLASS(Belt_Bag), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		headgearList[] = {};
		class EventHandlers {};
	};

	NEW_CLASS(AB_DC15C): TAG_CLASS(Clone_DC15S)
	{
		displayName = "Airborne Trooper (DC-15C)";
		AB_IDENTITY(AB_DC15C)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15C_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(36Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_DC15LE): TAG_CLASS(Clone_DC15A)
	{
		displayName = "Airborne Trooper (DC-15LE)";
		AB_IDENTITY(AB_DC15LE)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15LE), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_DC15LE_UGL): TAG_CLASS(Clone_DC15AUGL)
	{
		displayName = "Airborne Grenadier (DC-15LE)";
		AB_IDENTITY(AB_DC15LE)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15LE_GL), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_5(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_AT): TAG_CLASS(Clone_AT)
	{
		displayName = "Airborne AT Trooper";
		AB_IDENTITY(AB_AT)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15LE), TAG_CLASS(DC17SA_Reflex), TAG_CLASS(RPS6X), SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(45Rnd_EC40_Mag)), \
			MAG_5(MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_EOD): TAG_CLASS(Clone_EOD)
	{
		displayName = "Airborne Engineer";
		AB_IDENTITY(AB_EOD)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DP23_Lased), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(TAG_CLASS(30Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_AR): TAG_CLASS(Clone_AR)
	{
		displayName = "Airborne Heavy Trooper";
		AB_IDENTITY(AB_AR)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborne, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15L_AR), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_CLS): TAG_CLASS(Clone_Medic)
	{
		displayName = "Airborne Medic";
		AB_IDENTITY(AB_CLS)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), TAG_CLASS(Medic_Vest), TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15C_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(36Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_NCO): TAG_CLASS(Clone_Sergeant)
	{
		displayName = "Airborne NCO";
		AB_IDENTITY(AB_NCO)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), JLTS_CloneVestAirborneNCO, TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15C_GL_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(36Rnd_EC50_Mag)), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(AB_Officer): TAG_CLASS(Clone_Captain)
	{
		displayName = "Airborne Officer";
		AB_IDENTITY(AB_Officer)
		EQUIPMENT(TAG_CLASS(Airborne_Helmet), TAG_CLASS(Officer_Accessories), TAG_CLASS(Belt_Bag), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15C_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(36Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	NEW_CLASS(AB_NCO_A): TAG_CLASS(AB_NCO) { scope = 1; };
	NEW_CLASS(AB_NCO_B): TAG_CLASS(AB_NCO) { scope = 1; };
	NEW_CLASS(AB_NCO_C): TAG_CLASS(AB_NCO) { scope = 1; };
	NEW_CLASS(AB_NCO_D): TAG_CLASS(AB_NCO) { scope = 1; };

	NEW_CLASS(ARC_DC15S): TAG_CLASS(ARF_DC15S)
	{
		displayName = "ARC Trooper (DC-15S)";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(ARC_DC15S)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(ARC_Westar): TAG_CLASS(ARC_DC15S)
	{
		displayName = "ARC Trooper (Westar-M5)";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(ARC_Westar)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(60Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARC_GL): TAG_CLASS(ARC_Westar)
	{
		displayName = "ARC Trooper (Westar-M5 GL)";
		icon = "JLTS_iconManHeavy";
		ARC_IDENTITY(ARC_GL)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_GL), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAG_5(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARC_AT): TAG_CLASS(ARC_Westar)
	{
		displayName = "ARC AT Trooper";
		icon = "iconManAT";
		ARC_IDENTITY(ARC_AT)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Backpack), TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_Scoped), TAG_CLASS(DC17SA_Reflex), TAG_CLASS(RPS6X), SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(60Rnd_EC40_Mag)), \
			MAG_3(MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARC_EOD): TAG_CLASS(Clone_EOD)
	{
		displayName = "ARC Engineer";
		ARC_IDENTITY(ARC_EOD)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(EOD_Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DP23_Lased), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(TAG_CLASS(30Rnd_EC50_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARC_Medic): TAG_CLASS(ARF_CLS)
	{
		displayName = "ARC Medic";
		ARC_IDENTITY(ARC_Medic)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Medic_Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(60Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(ARC_JTAC): TAG_CLASS(ARF_JTAC)
	{
		displayName = "ARC JTAC";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(ARC_JTAC)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(RTO_Backpack), TAG_CLASS(Rangefinder), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(60Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(ARC_Sniper): TAG_CLASS(ARF_Sniper)
	{
		displayName = "ARC Sniper";
		ARC_IDENTITY(ARC_Sniper)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Belt_Bag), TAG_CLASS(Macrobinocular_Low), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(Firepuncher_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	NEW_CLASS(ARC_Lieutenant): TAG_CLASS(ARF_Lieutenant)
	{
		displayName = "ARC Lieutenant";
		ARC_IDENTITY(ARC_Lieutenant)
		EQUIPMENT(TAG_CLASS(ARC_Helmet), TAG_CLASS(ARC_Vest), TAG_CLASS(Backpack), TAG_CLASS(Macrobinocular), JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(WestarM5_Scoped), TAG_CLASS(DC17SA_Reflex), 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(TAG_CLASS(60Rnd_EC40_Mag)), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init = "[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};

	NEW_CLASS(RC_DC17M): TAG_CLASS(Clone_DC15A)
	{
		displayName = "Clone Commando (DC-17M)";
		icon = "JLTS_iconManReconAdvanced";
		RC_IDENTITY(RC_DC17M)
		EQUIPMENT(TAG_CLASS(Katarn_Helmet), 0, TAG_CLASS(Katarn_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(RC_NCO): TAG_CLASS(Clone_Sergeant)
	{
		displayName = "Clone Commando (NCO)";
		RC_IDENTITY(RC_NCO)
		EQUIPMENT(TAG_CLASS(Katarn_Helmet), 3AS_Katarn_Vest_Team_Leader, TAG_CLASS(Katarn_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(RC_Tech): TAG_CLASS(Clone_EOD)
	{
		displayName = "Clone Commando (Tech)";
		canDeactivateMines = 1;
		RC_IDENTITY(RC_Tech)
		EQUIPMENT(TAG_CLASS(Katarn_Helmet), TAG_CLASS(Katarn_Vest_Tech), TAG_CLASS(Katarn_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(RC_Demo): TAG_CLASS(RC_Tech)
	{
		displayName = "Clone Commando (Demo)";
		RC_IDENTITY(RC_Demo)
		EQUIPMENT(TAG_CLASS(Katarn_Helmet), TAG_CLASS(Katarn_Vest_Demo), TAG_CLASS(Katarn_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAG_5(3AS_AntiArmour_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	NEW_CLASS(RC_Sniper): TAG_CLASS(Clone_Sharpshooter)
	{
		displayName = "Clone Commando (Sniper)";
		RC_IDENTITY(RC_Sniper)
		EQUIPMENT(TAG_CLASS(Katarn_Helmet), 3AS_Katarn_Vest_Sniper, TAG_CLASS(Katarn_Backpack), 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_5Rnd_EC80_mag), \
			MAG_5(3AS_5Rnd_EC80_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	NEW_CLASS(Clone_Pilot): TAG_CLASS(Clone_EOD)
	{
		displayName = "Clone Pilot";
		Engineer = 1;
		canDeactivateMines = 0;
		TR_IDENTITY(Clone_Pilot)
		EQUIPMENT(TAG_CLASS(P2_Pilot_Helmet), JLTS_CloneVestHolster, TAG_CLASS(RTO_Backpack_Mini), 0, JLTS_clone_comlink)
		WEAPONS(TAG_CLASS(DC15S_Reflex), TAG_CLASS(DC17SA_Reflex), 0, 0)
		items[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"ToolKit"
		};
		class EventHandlers {};
	};
	NEW_CLASS(Clone_P1_Pilot): TAG_CLASS(Clone_Pilot)
	{
		P1_IDENTITY(Clone_P1_Pilot)
		EQUIPMENT(TAG_CLASS(P1_Pilot_Helmet), JLTS_CloneVestHolster, TAG_CLASS(RTO_Backpack_Mini), JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
};