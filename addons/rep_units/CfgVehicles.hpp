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
			"87th_face_clone", \
			"87th_Clone" \
		}; \
	};

	#define REP_IDENTITY(category, uniform, preview) \
		IDENTITY(87th_Legion, category, uniform, preview)

	#define TR_IDENTITY(preview) \
		REP_IDENTITY(87th_Troopers, 87th_Trooper_Uniform, preview)

	#define P1_IDENTITY(preview) \
		REP_IDENTITY(87th_P1_Troopers, 87th_P1_Trooper_Uniform, preview)

	#define ARF_IDENTITY(preview) \
		REP_IDENTITY(87th_ARF, 87th_ARF_Uniform, preview)

	#define BARC_IDENTITY(preview) \
		REP_IDENTITY(87th_BARC, 87th_ARF_Uniform, preview)

	#define AB_IDENTITY(preview) \
		REP_IDENTITY(87th_AB, 87th_Trooper_Uniform, preview)

	#define ARC_IDENTITY(preview) \
		REP_IDENTITY(87th_ARC, 87th_Trooper_Uniform, preview)

	#define RC_IDENTITY(preview) \
		REP_IDENTITY(87th_RC, 87th_Katarn_Armor, preview)

	#define MAGS_MISC \
		MAG_3(87th_21Rnd_EC30_Mag), \
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

	class 87th_Clone_DC15A: JLTS_Clone_P2_DC15A
	{
		displayName = "Clone Trooper (DC-15A)";
		TR_IDENTITY(87th_Clone_DC15A)
		EQUIPMENT(87th_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_DC15S: JLTS_Clone_P2_DC15S 
	{
		displayName = "Clone Trooper (DC-15S)";
		TR_IDENTITY(87th_Clone_DC15S)
		EQUIPMENT(87th_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_DC15AUGL: JLTS_Clone_P2_DC15AUGL 
	{
		displayName = "Clone Grenadier (DC-15A)";
		TR_IDENTITY(87th_Clone_DC15AUGL)
		EQUIPMENT(87th_Trooper_Helmet, JLTS_CloneVestHolster, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A_GL_Reflex, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_DP23: JLTS_Clone_P2_DP23 
	{
		displayName = "Clone Trooper (DP-23)";
		TR_IDENTITY(87th_Clone_DP23)
		EQUIPMENT(87th_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_AT: JLTS_Clone_P2_AT 
	{
		displayName = "Clone AT Trooper";
		TR_IDENTITY(87th_Clone_AT)
		EQUIPMENT(87th_Trooper_Helmet, JLTS_CloneVestAirborne, 87th_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 87th_RPS6X, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_5(87th_MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Captain: JLTS_Clone_P2_captain 
	{
		displayName = "Clone Captain";
		TR_IDENTITY(87th_Clone_Captain)
		EQUIPMENT(87th_Officer_Helmet, 87th_Officer_Accessories, 0, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Commander: JLTS_Clone_P2_commander 
	{
		displayName = "Clone Commander";
		TR_IDENTITY(87th_Clone_Commander)
		EQUIPMENT(87th_Stim_Helmet, 87th_Commander_Accessories, JLTS_Clone_jumppack_mc, JLTS_CloneNVGMC, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Corporal: JLTS_Clone_P2_corporal 
	{
		displayName = "Clone Corporal";
		TR_IDENTITY(87th_Clone_Corporal)
		EQUIPMENT(87th_Trooper_Helmet, JLTS_CloneVestHolster, 0, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DC15C_GL_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_36Rnd_EC50_Mag), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Jumper: JLTS_Clone_P2_jump 
	{
		displayName = "Clone Jet Trooper";
		TR_IDENTITY(87th_Clone_Jumper)
		EQUIPMENT(87th_Jet_Trooper_Helmet, JLTS_CloneVestHolster, JLTS_Clone_jumppack_JT12, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Lieutenant: JLTS_Clone_P2_lieutenant 
	{
		displayName = "Clone Lieutenant";
		TR_IDENTITY(87th_Clone_Lieutenant)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Lieutenant_Accessories, 0, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Major: JLTS_Clone_P2_major 
	{
		displayName = "Clone Major";
		TR_IDENTITY(87th_Clone_Major)
		EQUIPMENT(87th_Raven_Helmet, 87th_Officer_Accessories, 0, JLTS_CloneNVGCC, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Marksman: JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Marksman";
		TR_IDENTITY(87th_Clone_Marksman)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Recon_Accessories, 0, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DW32S, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_20Rnd_EC60_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Medic: JLTS_Clone_P2_medic
	{
		displayName = "Clone Medic";
		TR_IDENTITY(87th_Clone_Medic)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Medic_Vest, 87th_Medic_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_medic""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_EOD: JLTS_Clone_P2_eod 
	{
		displayName = "Clone Engineer";
		Engineer = 2;
		canDeactivateMines = 1;
		TR_IDENTITY(87th_Clone_EOD)
		EQUIPMENT(87th_Engineer_Helmet, JLTS_CloneVestSuspender, 87th_EOD_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(87th_DP23_Lased, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(87th_30Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_RTO: JLTS_Clone_P2_RTO 
	{
		displayName = "Clone RTO";
		TR_IDENTITY(87th_Clone_RTO)
		EQUIPMENT(87th_RTO_Helmet, JLTS_CloneVestSuspender, 87th_RTO_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Sergeant: JLTS_Clone_P2_sergeant 
	{
		displayName = "Clone Sergeant";
		TR_IDENTITY(87th_Clone_Sergeant)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Kama, 0, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_SergeantMajor: JLTS_Clone_P2_sergeantmajor 
	{
		displayName = "Clone Sergeant-Major";
		TR_IDENTITY(87th_Clone_SergeantMajor)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Recon_Officer_Accessories, 0, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_AR: JLTS_Clone_P2_AR 
	{
		displayName = "Clone Heavy Trooper";
		TR_IDENTITY(87th_Clone_AR)
		EQUIPMENT(87th_Trooper_Helmet, JLTS_CloneVestAirborneNCO, 87th_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15L_AR, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_Sharpshooter: JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Sharpshooter";
		TR_IDENTITY(87th_Clone_Sharpshooter)
		EQUIPMENT(87th_Trooper_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, 87th_Macrobinocular_Low, JLTS_clone_comlink)
		WEAPONS(87th_Valken38X_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	class 87th_Clone_P1_DC15A: JLTS_Clone_P2_DC15A 
	{
		displayName = "Clone Trooper (DC-15A)";
		P1_IDENTITY(87th_Clone_P1_DC15A)
		EQUIPMENT(87th_P1_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_DC15S: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Trooper (DC-15S)";
		P1_IDENTITY(87th_Clone_P1_DC15S)
		EQUIPMENT(87th_P1_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_DC15AUGL: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Grenadier (DC-15A)";
		icon = "JLTS_iconManHeavy";
		P1_IDENTITY(87th_Clone_P1_DC15AUGL)
		EQUIPMENT(87th_P1_Trooper_Helmet, JLTS_CloneVestHolster, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A_GL, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_4(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_AT: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone AT Trooper";
		icon = "iconManAT";
		P1_IDENTITY(87th_Clone_P1_AT)
		EQUIPMENT(87th_P1_Trooper_Helmet, JLTS_CloneVestAirborne, 87th_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 87th_RPS6X, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_5(87th_MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Captain: 87th_Clone_P1_DC15A
	{
		displayName = "Clone Captain";
		icon = "iconManOfficer";
		P1_IDENTITY(87th_Clone_P1_Captain)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Officer_Accessories, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Commander: 87th_Clone_P1_DC15A
	{
		displayName = "Clone Commander";
		icon = "iconManOfficer";
		P1_IDENTITY(87th_Clone_P1_Commander)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Commander_Accessories, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Corporal: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Corporal";
		icon = "iconManLeader";
		P1_IDENTITY(87th_Clone_P1_Corporal)
		EQUIPMENT(87th_P1_Trooper_Helmet, 0, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A_GL_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Lieutenant: 87th_Clone_P1_DC15A
	{
		displayName = "Clone Lieutenant";
		icon = "iconManOfficer";
		P1_IDENTITY(87th_Clone_P1_Lieutenant)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Lieutenant_Accessories, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Medic: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone Medic";
		attendant = 1;
		icon="iconManMedic";
		P1_IDENTITY(87th_Clone_P1_Medic)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Medic_Vest, 87th_Medic_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_medic""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_P1_EOD: 87th_Clone_P1_DC15S
	{
		displayName = "Clone Engineer";
		Engineer = 2;
		canDeactivateMines = 1;
		icon = "iconManExplosive";
		P1_IDENTITY(87th_Clone_P1_EOD)
		EQUIPMENT(87th_P1_Trooper_Helmet, JLTS_CloneVestSuspender, 87th_EOD_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_P1_RTO: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone RTO";
		P1_IDENTITY(87th_Clone_P1_RTO)
		EQUIPMENT(87th_P1_Trooper_Helmet, JLTS_CloneVestSuspender, 87th_RTO_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Sergeant: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Sergeant";
		icon = "iconManLeader";
		P1_IDENTITY(87th_Clone_P1_Sergeant)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Kama, 0, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15A, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_AR: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Heavy Trooper";
		icon = "JLTS_iconManSupportGunner";
		P1_IDENTITY(87th_Clone_P1_AR)
		EQUIPMENT(87th_P1_Trooper_Helmet, JLTS_CloneVestAirborneNCO, 87th_Backpack, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15L_AR, 87th_DC17SA_Reflex, 0, 0)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_P1_Sharpshooter: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Sharpshooter";
		icon = "JLTS_iconManSniper";
		P1_IDENTITY(87th_Clone_P1_Sharpshooter)
		EQUIPMENT(87th_P1_Trooper_Helmet, 87th_Recon_NCO_Accessories, 87th_Belt_Bag, 87th_Macrobinocular_Low, JLTS_clone_comlink)
		WEAPONS(87th_Valken38X_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	class 87th_ARF_DC15S: 87th_Clone_DC15S 
	{
		displayName = "ARF Trooper (DC-15S)";
		icon = "JLTS_iconManRecon";
		ARF_IDENTITY(87th_ARF_DC15S)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARF_Sniper: 87th_Clone_Sharpshooter 
	{
		displayName = "ARF Sniper";
		ARF_IDENTITY(87th_ARF_Sniper)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15X, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
	};
	class 87th_ARF_Spotter: 87th_Clone_Marksman 
	{
		displayName = "ARF Spotter";
		ARF_IDENTITY(87th_ARF_Spotter)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	class 87th_ARF_JTAC: 87th_Clone_RTO 
	{
		displayName = "ARF JTAC";
		icon = "JLTS_iconManRecon";
		ARF_IDENTITY(87th_ARF_JTAC)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_RTO_Backpack_Recon, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
	};
	class 87th_ARF_AT: 87th_Clone_AT 
	{
		displayName = "ARF AT Trooper";
		ARF_IDENTITY(87th_ARF_AT)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 87th_RPS6X, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAG_3(87th_MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.6,
			"87th_ARF_Helmet_P2", 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class 87th_ARF_EOD: 87th_Clone_EOD
	{
		displayName = "ARF Engineer";
		ARF_IDENTITY(87th_ARF_EOD)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DP23_Lased, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(87th_30Rnd_EC50_Mag), \
			MAGS_MISC
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.3,
			"87th_ARF_Helmet_P2", 0.7
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear}; [_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARF_CLS: 87th_Clone_Medic 
	{
		displayName = "ARF Medic";
		ARF_IDENTITY(87th_ARF_CLS)
		EQUIPMENT(87th_ARF_Helmet, 87th_Medic_Vest, 87th_Belt_Bag_Medic, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARF_NCO: 87th_Clone_Sergeant 
	{
		displayName = "ARF Sergeant";
		ARF_IDENTITY(87th_ARF_NCO)
		EQUIPMENT(87th_ARF_Helmet, 87th_Recon_Officer_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.7,
			"87th_ARF_Helmet_P2", 0.3
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class 87th_ARF_Lieutenant: 87th_Clone_Lieutenant 
	{
		displayName = "ARF Lieutenant";
		ARF_IDENTITY(87th_ARF_Lieutenant)
		EQUIPMENT(87th_ARF_Helmet, 87th_Lieutenant_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.7,
			"87th_ARF_Helmet_P2", 0.3
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class 87th_ARF_Captain: 87th_Clone_Captain 
	{
		displayName = "ARF Captain";
		ARF_IDENTITY(87th_ARF_Captain)
		EQUIPMENT(87th_ARF_Helmet, 87th_Officer_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.6,
			"87th_ARF_Helmet_P2", 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class 87th_ARF_Major: 87th_Clone_Commander 
	{
		displayName = "ARF Major";
		ARF_IDENTITY(87th_ARF_Major)
		EQUIPMENT(87th_ARF_Helmet, 87th_Commander_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		headgearList[]=
		{
			"87th_ARF_Helmet", 0.6,
			"87th_ARF_Helmet_P2", 0.4
		};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};

	class 87th_BARC_DC15S: 87th_ARF_DC15S 
	{
		displayName = "BARC Trooper (DC-15S)";
		BARC_IDENTITY(87th_BARC_DC15S)
		EQUIPMENT(87th_BARC_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	class 87th_BARC_Sniper: 87th_ARF_Sniper 
	{
		displayName = "BARC Sniper";
		BARC_IDENTITY(87th_BARC_Sniper)
		EQUIPMENT(87th_BARC_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_DC15X, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAG_6(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
	};
	class 87th_BARC_Spotter: 87th_ARF_Spotter 
	{
		displayName = "BARC Spotter";
		BARC_IDENTITY(87th_BARC_Spotter)
		EQUIPMENT(87th_BARC_Helmet, 87th_Recon_Accessories, 87th_Belt_Bag, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	class 87th_BARC_JTAC: 87th_ARF_JTAC 
	{
		displayName = "BARC JTAC";
		BARC_IDENTITY(87th_BARC_JTAC)
		EQUIPMENT(87th_BARC_Helmet, 87th_Recon_Accessories, 87th_RTO_Backpack_Recon, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	class 87th_BARC_CLS: 87th_ARF_CLS
	{
		displayName = "BARC Medic";
		BARC_IDENTITY(87th_BARC_CLS)
		EQUIPMENT(87th_BARC_Helmet, 87th_Medic_Vest, 87th_Belt_Bag_Medic, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
	class 87th_BARC_NCO: 87th_ARF_NCO 
	{
		displayName = "BARC Sergeant";
		BARC_IDENTITY(87th_BARC_NCO)
		EQUIPMENT(87th_BARC_Helmet, 87th_Recon_Officer_Accessories, 87th_Belt_Bag, 87th_Rangefinder, JLTS_clone_comlink)
	};
	class 87th_BARC_Lieutenant: 87th_ARF_Lieutenant 
	{
		displayName = "BARC Lieutenant";
		BARC_IDENTITY(87th_BARC_Lieutenant)
		EQUIPMENT(87th_BARC_Helmet, 87th_Lieutenant_Accessories, 87th_Belt_Bag, 87th_Rangefinder, JLTS_clone_comlink)
	};
	class 87th_BARC_Captain: 87th_ARF_Captain 
	{
		displayName = "BARC Captain";
		BARC_IDENTITY(87th_BARC_Captain)
		EQUIPMENT(87th_BARC_Helmet, 87th_Officer_Accessories, 87th_Belt_Bag, 87th_Rangefinder, JLTS_clone_comlink)
	};
	class 87th_BARC_Major: 87th_ARF_Major 
	{
		displayName = "BARC Major";
		BARC_IDENTITY(87th_BARC_Major)
		EQUIPMENT(87th_BARC_Helmet, 87th_Commander_Accessories, 87th_Belt_Bag, 87th_Rangefinder, JLTS_clone_comlink)
	};

	class 87th_AB_DC15C: 87th_Clone_DC15S 
	{
		displayName = "Airborne Trooper (DC-15C)";
		AB_IDENTITY(87th_AB_DC15C)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15C_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_36Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_DC15LE: 87th_Clone_DC15A 
	{
		displayName = "Airborne Trooper (DC-15LE)";
		AB_IDENTITY(87th_AB_DC15LE)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15LE, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_DC15LE_UGL: 87th_Clone_DC15AUGL 
	{
		displayName = "Airborne Grenadier (DC-15LE)";
		AB_IDENTITY(87th_AB_DC15LE)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15LE_GL, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_5(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_AT: 87th_Clone_AT 
	{
		displayName = "Airborne AT Trooper";
		AB_IDENTITY(87th_AB_AT)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15LE, 87th_DC17SA_Reflex, 87th_RPS6X, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_45Rnd_EC40_Mag), \
			MAG_5(87th_MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_EOD: 87th_Clone_EOD
	{
		displayName = "Airborne Engineer";
		AB_IDENTITY(87th_AB_EOD)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DP23_Lased, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(87th_30Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_AR: 87th_Clone_AR 
	{
		displayName = "Airborne Heavy Trooper";
		AB_IDENTITY(87th_AB_AR)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborne, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15L_AR, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(3AS_200Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_CLS: 87th_Clone_Medic 
	{
		displayName = "Airborne Medic";
		AB_IDENTITY(87th_AB_CLS)
		EQUIPMENT(87th_Airborne_Helmet, 87th_Medic_Vest, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15C_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_36Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_NCO: 87th_Clone_Sergeant 
	{
		displayName = "Airborne NCO";
		AB_IDENTITY(87th_AB_NCO)
		EQUIPMENT(87th_Airborne_Helmet, JLTS_CloneVestAirborneNCO, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15C_GL_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_36Rnd_EC50_Mag), \
			MAG_8(1Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_AB_Officer: 87th_Clone_Captain 
	{
		displayName = "Airborne Officer";
		AB_IDENTITY(87th_AB_Officer)
		EQUIPMENT(87th_Airborne_Helmet, 87th_Officer_Accessories, 87th_Belt_Bag, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15C_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_36Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	class 87th_AB_NCO_A: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_B: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_C: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_D: 87th_AB_NCO { scope = 1; };

	class 87th_ARC_DC15S: 87th_ARF_DC15S
	{
		displayName = "ARC Trooper (DC-15S)";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(87th_ARC_DC15S)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Westar: 87th_ARC_DC15S
	{
		displayName = "ARC Trooper (Westar-M5)";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(87th_ARC_Westar)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_60Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARC_GL: 87th_ARC_Westar
	{
		displayName = "ARC Trooper (Westar-M5 GL)";
		icon = "JLTS_iconManHeavy";
		ARC_IDENTITY(87th_ARC_GL)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_GL, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_60Rnd_EC30_Mag), \
			MAG_5(3Rnd_HE_Grenade_shell), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARC_AT: 87th_ARC_Westar
	{
		displayName = "ARC AT Trooper";
		icon = "iconManAT";
		ARC_IDENTITY(87th_ARC_AT)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Backpack, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_Scoped, 87th_DC17SA_Reflex, 87th_RPS6X, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_60Rnd_EC40_Mag), \
			MAG_3(87th_MK40X_AT_Guided), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARC_EOD: 87th_Clone_EOD
	{
		displayName = "ARC Engineer";
		ARC_IDENTITY(87th_ARC_EOD)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_EOD_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_DP23_Lased, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_8(JLTS_DP23_Mag), \
			MAG_8(87th_30Rnd_EC50_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARC_Medic: 87th_ARF_CLS
	{
		displayName = "ARC Medic";
		ARC_IDENTITY(87th_ARC_Medic)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Medic_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_60Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_ARC_JTAC: 87th_ARF_JTAC
	{
		displayName = "ARC JTAC";
		icon = "JLTS_iconManReconAdvanced";
		ARC_IDENTITY(87th_ARC_JTAC)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_RTO_Backpack, 87th_Rangefinder, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_60Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Sniper: 87th_ARF_Sniper
	{
		displayName = "ARC Sniper";
		ARC_IDENTITY(87th_ARC_Sniper)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Belt_Bag, 87th_Macrobinocular_Low, JLTS_clone_comlink)
		WEAPONS(87th_Firepuncher_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_10Rnd_EC80_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Lieutenant: 87th_ARF_Lieutenant
	{
		displayName = "ARC Lieutenant";
		ARC_IDENTITY(87th_ARC_Lieutenant)
		EQUIPMENT(87th_ARC_Helmet, 87th_ARC_Vest, 87th_Backpack, 87th_Macrobinocular, JLTS_clone_comlink)
		WEAPONS(87th_WestarM5_Scoped, 87th_DC17SA_Reflex, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(87th_60Rnd_EC40_Mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};

	class 87th_RC_DC17M: 87th_Clone_DC15A 
	{
		displayName = "Clone Commando (DC-17M)";
		icon = "JLTS_iconManReconAdvanced";
		RC_IDENTITY(87th_RC_DC17M)
		EQUIPMENT(87th_Katarn_Helmet, 0, 87th_Katarn_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_RC_NCO: 87th_Clone_Sergeant 
	{
		displayName = "Clone Commando (NCO)";
		RC_IDENTITY(87th_RC_NCO)
		EQUIPMENT(87th_Katarn_Helmet, 3AS_Katarn_Vest_Team_Leader, 87th_Katarn_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_RC_Tech: 87th_Clone_EOD 
	{
		displayName = "Clone Commando (Tech)";
		canDeactivateMines = 1;
		RC_IDENTITY(87th_RC_Tech)
		EQUIPMENT(87th_Katarn_Helmet, 87th_Katarn_Vest_Tech, 87th_Katarn_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_RC_Demo: 87th_RC_Tech 
	{
		displayName = "Clone Commando (Demo)";
		RC_IDENTITY(87th_RC_Demo)
		EQUIPMENT(87th_Katarn_Helmet, 87th_Katarn_Vest_Demo, 87th_Katarn_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_100Rnd_EC40_mag), \
			MAG_5(3AS_AntiArmour_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_RC_Sniper: 87th_Clone_Sharpshooter 
	{
		displayName = "Clone Commando (Sniper)";
		RC_IDENTITY(87th_RC_Sniper)
		EQUIPMENT(87th_Katarn_Helmet, 3AS_Katarn_Vest_Sniper, 87th_Katarn_Backpack, 0, JLTS_clone_comlink)
		WEAPONS(3AS_DC17M_F, 0, 0, SWLB_clone_binocular)
		#define MAGAZINES \
			MAG_10(3AS_5Rnd_EC80_mag), \
			MAG_5(3AS_5Rnd_EC80_mag), \
			MAGS_MISC
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};

	class 87th_Clone_Pilot: 87th_Clone_EOD 
	{
		displayName = "Clone Pilot";
		Engineer = 1;
		canDeactivateMines = 0;
		TR_IDENTITY(87th_Clone_Pilot)
		EQUIPMENT(87th_P2_Pilot_Helmet, JLTS_CloneVestHolster, 87th_RTO_Backpack_Mini, 0, JLTS_clone_comlink)
		WEAPONS(87th_DC15S_Reflex, 87th_DC17SA_Reflex, 0, 0)
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
	class 87th_Clone_P1_Pilot: 87th_Clone_Pilot
	{
		P1_IDENTITY(87th_Clone_P1_Pilot)
		EQUIPMENT(87th_P1_Pilot_Helmet, JLTS_CloneVestHolster, 87th_RTO_Backpack_Mini, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
	};
};