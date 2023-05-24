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

	#define P2_UNIFORM \
		faction = "87th_Legion"; \
		editorSubcategory = "87th_Troopers"; \
		uniformClass = "87th_Trooper_Uniform"; \
		hiddenSelectionsTextures[]= \
		{ \
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa), \
            QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa) \
        };

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
		PREVIEW(87th_Clone_DC15A)
		P2_UNIFORM
		EQUIPMENT(87th_Trooper_Helmet, JLTS_NVG_droid_chip_2, JLTS_clone_comlink)
		WEAPONS(87th_3AS_DC15A_F, JLTS_DC17SA)
		#define MAGAZINES \
			MAG_10(3AS_45Rnd_EC50_Mag), \
			MAG_3(JLTS_DC17SA_mag), \
			MAG_2(SmokeShellGreen), \
			MAG_2(Chemlight_green), \
			MAG_2(JLTS_stun_mag_long), \
			MAG_2(HandGrenade), \
			MAG_1(SmokeShell)
		magazines[] = { MAGAZINES };
		respawnMagazines[] = { MAGAZINES };
	};
	class 87th_Clone_DC15S: JLTS_Clone_P2_DC15S 
	{
		displayName = "Clone Trooper (DC-15S)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_DC15S.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_DC15AUGL: JLTS_Clone_P2_DC15AUGL 
	{
		displayName = "Clone Grenadier (DC-15A)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_DC15AUGL.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15A_GL",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15A_GL",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_DP23: JLTS_Clone_P2_DP23 
	{
		displayName = "Clone Trooper (DP-23)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_DP23.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_AT: JLTS_Clone_P2_AT 
	{
		displayName = "Clone AT Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_AT.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Captain: JLTS_Clone_P2_captain 
	{
		displayName = "Clone Captain";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Captain.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Captain_Helmet",
			"87th_NVG",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Captain_Helmet",
			"87th_NVG",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Commander: JLTS_Clone_P2_commander 
	{
		displayName = "Clone Commander";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Commander.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Commander_Helmet",
			"JLTS_CloneNVGMC",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_jumppack_mc";
		respawnLinkedItems[]=
		{
			"87th_Commander_Helmet",
			"JLTS_CloneNVGMC",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Corporal: JLTS_Clone_P2_corporal 
	{
		displayName = "Clone Corporal";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Corporal.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass="87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"JLTS_CloneVestHolster",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"JLTS_CloneVestHolster",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Jumper: JLTS_Clone_P2_jump 
	{
		displayName = "Clone Jet Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Jumper.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"SWLB_CEE_Clone_Scarf_White",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_jumppack_JT12";
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"SWLB_CEE_Clone_Scarf_White",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	}; 
	class 87th_Clone_Lieutenant: JLTS_Clone_P2_lieutenant 
	{
		displayName = "Clone Lieutenant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Lieutenant.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGRange",
			"87th_Lieutenant_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGRange",
			"87th_Lieutenant_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Major: JLTS_Clone_P2_major 
	{
		displayName = "Clone Major";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Major.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGCC",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGCC",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Marksman: JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Marksman";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Marksman.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass="87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DW32S",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DW32S",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
	};
	class 87th_Clone_Medic: JLTS_Clone_P2_medic 
	{
		displayName = "Clone Medic";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Medic.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Medic_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Medic_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		backpack = "87th_Medic_Backpack";
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_EOD: JLTS_Clone_P2_eod 
	{
		displayName = "Clone EOD Trooper";
		Engineer = 2;
		canDeactivateMines = 1;
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_EOD.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		backpack = "87th_Backpack";
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_RTO: JLTS_Clone_P2_RTO 
	{
		displayName = "Clone RTO";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_RTO.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		backpack="87th_RTO_Backpack";
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Sergeant: JLTS_Clone_P2_sergeant 
	{
		displayName = "Clone Sergeant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Sergeant.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"87th_Kama",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"87th_NVG",
			"87th_Kama",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_SergeantMajor: JLTS_Clone_P2_sergeantmajor 
	{
		displayName = "Clone Sergeant-Major";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_SergeantMajor.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestReconOfficer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestReconOfficer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_AR: JLTS_Clone_P2_AR 
	{
		displayName = "Clone Heavy Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_AR.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass = "87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		backpack = "87th_Backpack";
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_Sharpshooter: JLTS_Clone_P2_marksman 
	{
		displayName = "Clone Sharpshooter";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Sharpshooter.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Troopers";
		uniformClass="87th_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_Chest_co.paa),
        	QPATHTOEF(rep_armor, data\armor\87th_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVG_spec",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Trooper_Helmet",
			"JLTS_CloneNVG_spec",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_JLTS_DC15X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_JLTS_DC15X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};

	class 87th_Clone_P1_DC15A: JLTS_Clone_P2_DC15A 
	{
		displayName = "Clone Trooper (DC-15A)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_DC15A.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_P1_Troopers";
		uniformClass = "87th_P1_Trooper_Uniform";
		hiddenSelectionsTextures[]= 
		{
            QPATHTOEF(rep_armor, data\armor\87th_P1_Chest_co.paa),
            QPATHTOEF(rep_armor, data\armor\87th_P1_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15A_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15A_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_P1_DC15S: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Trooper (DC-15S)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_DC15S.jpg);
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_P1_DC15AUGL: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Grenadier (DC-15A)";
		icon = "JLTS_iconManHeavy";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_DC15AUGL.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15A_GL",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15A_GL",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_P1_AT: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone AT Trooper";
		icon = "iconManAT";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_AT.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_P1_Captain: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone Captain";
		icon = "iconManOfficer";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Captain.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"SWLB_clone_rangefinder_HUD",
			"JLTS_NVG_droid_chip_2",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"SWLB_clone_rangefinder_HUD",
			"JLTS_NVG_droid_chip_2",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_Commander: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone Commander";
		icon = "iconManOfficer";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Commander.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"3as_Phase1CC_Visor",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"3as_Phase1CC_Visor",
			"JLTS_NVG_droid_chip_2",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_Corporal: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Corporal";
		icon = "iconManLeader";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Corporal.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_Lieutenant: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone Lieutenant";
		icon = "iconManOfficer";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Lieutenant.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"87th_Lieutenant_Accessories",
			"3as_Phase1_Lamps",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"87th_Lieutenant_Accessories",
			"3as_Phase1_Lamps",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_Medic: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone Medic";
		attendant = 1;
		icon="iconManMedic";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Medic.jpg);
		backpack = "87th_Medic_Backpack";
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_medic""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_P1_EOD: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone EOD Trooper";
		Engineer = 2;
		canDeactivateMines = 1;
		icon = "iconManExplosive";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_EOD.jpg);
		backpack = "87th_Backpack";
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR_EOD""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_Clone_P1_RTO: 87th_Clone_P1_DC15S 
	{
		displayName = "Clone RTO";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_RTO.jpg);
		backpack="87th_RTO_Backpack";
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestSuspender",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_Sergeant: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Sergeant";
		icon = "iconManLeader";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Sergeant.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"87th_Kama",
			"SWLB_clone_rangefinder_HUD",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"87th_Kama",
			"SWLB_clone_rangefinder_HUD",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_Clone_P1_AR: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Heavy Trooper";
		icon = "JLTS_iconManSupportGunner";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_AR.jpg);
		backpack = "87th_Backpack";
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_Clone_P1_Sharpshooter: 87th_Clone_P1_DC15A 
	{
		displayName = "Clone Sharpshooter";
		icon = "JLTS_iconManSniper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Sharpshooter.jpg);
		linkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Trooper_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_JLTS_DC15X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_JLTS_DC15X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC15X_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};

	class 87th_ARF_DC15S: 87th_Clone_DC15S 
	{
		displayName = "ARF Trooper (DC-15S)";
		icon = "JLTS_iconManRecon";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_DC15S.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
	};
	class 87th_ARF_Sniper: 87th_Clone_Sharpshooter 
	{
		displayName = "ARF Sniper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_Sniper.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_ARF_Spotter: 87th_Clone_Marksman 
	{
		displayName = "ARF Spotter";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_Spotter.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_ARF_JTAC: 87th_Clone_RTO 
	{
		displayName = "ARF JTAC";
		icon = "JLTS_iconManRecon";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_JTAC.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_RTO_pack";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_ARF_AT: 87th_Clone_AT 
	{
		displayName = "ARF AT Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_AT.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
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
		displayName = "ARF EOD Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_EOD.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
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
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_CLS.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "87th_Medic_Backpack";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestHolster",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15S_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
	};
	class 87th_ARF_NCO: 87th_Clone_Sergeant 
	{
		displayName = "ARF Sergeant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_NCO.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestReconOfficer",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"JLTS_CloneVestReconOfficer",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
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
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_Lieutenant.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Lieutenant_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Lieutenant_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
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
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_Captain.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Officer_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Officer_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
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
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARF_Major.jpg);
		editorSubcategory = "87th_ARF";
		linkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Commander_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARF_Helmet",
			"87th_Commander_Accessories",
			"JLTS_NVG_droid_chip_2",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
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

	/*
	class 87th_ATRT_Driver: 87th_ARF_DC15S
	{
		displayName = "AT-RT Driver";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ATRT_Driver.jpg);
		Engineer = 1;
		canDeactivateMines = 0;
		linkedItems[]=
		{
			"87th_ATRT_Helmet",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ATRT_Helmet",
			"JLTS_CloneVestReconNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	*/

	class 87th_BARC_DC15S: 87th_ARF_DC15S 
	{
		displayName = "BARC Trooper (DC-15S)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_DC15S.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_Sniper: 87th_ARF_Sniper 
	{
		displayName = "BARC Sniper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_Sniper.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_Spotter: 87th_ARF_Spotter 
	{
		displayName = "BARC Spotter";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_Spotter.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_JTAC: 87th_ARF_JTAC 
	{
		displayName = "BARC JTAC";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_JTAC.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_CLS: 87th_ARF_CLS
	{
		displayName = "BARC Medic";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_CLS.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_NVG_droid_chip_2",
			"JLTS_CloneVestRecon",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_NCO: 87th_ARF_NCO 
	{
		displayName = "BARC Sergeant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_NCO.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestReconOfficer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestReconOfficer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_Lieutenant: 87th_ARF_Lieutenant 
	{
		displayName = "BARC Lieutenant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_Lieutenant.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGRange",
			"87th_Lieutenant_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGRange",
			"87th_Lieutenant_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_Captain: 87th_ARF_Captain 
	{
		displayName = "BARC Captain";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_Captain.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"87th_NVG",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_BARC_Major: 87th_ARF_Major 
	{
		displayName = "BARC Major";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC_Major.jpg);
		editorSubcategory = "87th_BARC";
		linkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGCC",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_BARC_Helmet",
			"JLTS_CloneNVGCC",
			"87th_Commander_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class 87th_AB_DC15C: 87th_Clone_DC15S 
	{
		displayName = "Airborne Trooper (DC-15C)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_DC15C.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_DC15LE: 87th_Clone_DC15A 
	{
		displayName = "Airborne Trooper (DC-15LE)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_DC15LE.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15LE_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15LE_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_DC15LE_UGL: 87th_Clone_DC15AUGL 
	{
		displayName = "Airborne Grenadier (DC-15LE)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_DC15LE_UGL.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15LE_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15LE_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_AT: 87th_Clone_AT 
	{
		displayName = "Airborne AT Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_AT.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15LE_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15LE_F",
			"JLTS_DC17SA",
			"87th_RPS6X",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"3AS_45Rnd_EC50_Mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_EOD: 87th_Clone_EOD
	{
		displayName = "Airborne EOD Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_EOD.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_AR: 87th_Clone_AR 
	{
		displayName = "Airborne Heavy Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_AR.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15L_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"3AS_200Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade"
		};
	};
	class 87th_AB_CLS: 87th_Clone_Medic 
	{
		displayName = "Airborne Medic";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_CLS.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"JLTS_CloneVestAirborne",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple",
			"442_SmokeShellpurple"
		};
	};
	class 87th_AB_NCO: 87th_Clone_Sergeant 
	{
		displayName = "Airborne NCO";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_NCO.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"442_p1_clone_glass1_44_nh",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"442_p1_clone_glass1_44_nh",
			"JLTS_CloneVestAirborneNCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_AB_Officer: 87th_Clone_Captain 
	{
		displayName = "Airborne Officer";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_AB_Officer.jpg);
		editorSubcategory = "87th_AB";
		linkedItems[]=
		{
			"87th_Airborne_Helmet",
			"442_p2_clone_glass3_nh",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "JLTS_Clone_belt_bag";
		respawnLinkedItems[]=
		{
			"87th_Airborne_Helmet",
			"442_p2_clone_glass3_nh",
			"87th_Officer_Accessories",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_DC15C_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"3AS_40Rnd_EC40_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
	};

	class 87th_AB_NCO_A: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_B: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_C: 87th_AB_NCO { scope = 1; };
	class 87th_AB_NCO_D: 87th_AB_NCO { scope = 1; };

	class 87th_ARC_DC15S: 87th_ARF_DC15S
	{
		displayName = "ARC Trooper (DC-15S)";
		icon = "JLTS_iconManReconAdvanced";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_DC15S.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "87th_Backpack";
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Westar: 87th_ARC_DC15S
	{
		displayName = "ARC Trooper (Westar-M5)";
		icon = "JLTS_iconManReconAdvanced";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_Westar.jpg);
		weapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_ARC_GL: 87th_ARC_Westar
	{
		displayName = "ARC Trooper (Westar-M5 GL)";
		icon = "JLTS_iconManHeavy";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_GL.jpg);
		weapons[]=
		{
			"3AS_WestarM5_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_WestarM5_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"3AS_6Rnd_HE_Grenade_shell",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_ARC_AT: 87th_ARC_Westar
	{
		displayName = "ARC AT Trooper";
		icon = "iconManAT";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_AT.jpg);
		weapons[]=
		{
			"87th_3AS_WestarM5_F",
			"87th_RPS6X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_WestarM5_F",
			"87th_RPS6X",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"87th_MK40X_AT_Guided",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_ARC_EOD: 87th_Clone_EOD
	{
		displayName = "ARC EOD Trooper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_EOD.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_ARC_Medic: 87th_ARF_CLS
	{
		displayName = "ARC Medic";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_Medic.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class 87th_ARC_JTAC: 87th_ARF_JTAC
	{
		displayName = "ARC JTAC";
		icon = "JLTS_iconManReconAdvanced";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_JTAC.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGRange",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_3AS_WestarM5_F",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		backpack = "87th_RTO_Backpack";
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Sniper: 87th_ARF_Sniper
	{
		displayName = "ARC Sniper";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_Sniper.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "87th_Backpack";
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"87th_NVG",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"87th_k_773_rifle",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"87th_k_773_rifle",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"442_408_10rnd_blue_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};
	class 87th_ARC_Lieutenant: 87th_ARF_Lieutenant
	{
		displayName = "ARC Lieutenant";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ARC_Lieutenant.jpg);
		editorSubcategory = "87th_ARC";
		linkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGCC",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "87th_Backpack";
		respawnLinkedItems[]=
		{
			"87th_ARC_Helmet",
			"JLTS_CloneNVGCC",
			"JLTS_CloneVestARC",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"3AS_WestarM5_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_WestarM5_GL",
			"JLTS_DC17SA",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"3AS_60Rnd_EC50_Mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		class EventHandlers
		{
			init="[_this select 0, ""JLTS_GAR""] call BIS_fnc_setUnitInsignia;";
		};
	};

	class 87th_RC_DC17M: 87th_Clone_DC15A 
	{
		displayName = "Clone Commando (DC-17M)";
		icon = "JLTS_iconManReconAdvanced";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RC_DC17M.jpg);
		editorSubcategory = "87th_RC";
		uniformClass = "87th_Katarn_Armor";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOEF(rep_armor, data\armor\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
		backpack = "87th_Katarn_Backpack";
		linkedItems[]=
		{
			"87th_Katarn_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Katarn_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
		respawnMagazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
	};
	class 87th_RC_NCO: 87th_Clone_Sergeant 
	{
		displayName = "Clone Commando (NCO)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RC_NCO.jpg);
		editorSubcategory = "87th_RC";
		uniformClass = "87th_Katarn_Armor";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOEF(rep_armor, data\armor\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
		backpack = "87th_Katarn_Backpack";
		linkedItems[]=
		{
			"87th_Katarn_Helmet",
			"3AS_Katarn_Vest_Team_Leader",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Katarn_Helmet",
			"3AS_Katarn_Vest_Team_Leader",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
		respawnMagazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
	};
	class 87th_RC_Tech: 87th_Clone_EOD 
	{
		displayName = "Clone Commando (Tech)";
		canDeactivateMines = 1;
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RC_Tech.jpg);
		editorSubcategory = "87th_RC";
		uniformClass = "87th_Katarn_Armor";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOEF(rep_armor, data\armor\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
		backpack = "87th_Katarn_Backpack";
		linkedItems[]=
		{
			"87th_Katarn_Helmet",
			"87th_Katarn_Vest_Tech",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Katarn_Helmet",
			"87th_Katarn_Vest_Tech",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
		respawnMagazines[]=
		{
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_100Rnd_EC40_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
	};
	class 87th_RC_Demo: 87th_RC_Tech 
	{
		displayName = "Clone Commando (Demo)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RC_Demo.jpg);
		editorSubcategory = "87th_RC";
		linkedItems[]=
		{
			"87th_Katarn_Helmet",
			"87th_Katarn_Vest_Demo",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Katarn_Helmet",
			"87th_Katarn_Vest_Demo",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 87th_RC_Sniper: 87th_Clone_Sharpshooter 
	{
		displayName = "Clone Commando (Sniper)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RC_Sniper.jpg);
		editorSubcategory = "87th_RC";
		uniformClass = "87th_Katarn_Armor";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOEF(rep_armor, data\armor\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
		backpack = "87th_Katarn_Backpack";
		linkedItems[]=
		{
			"87th_Katarn_Helmet",
			"3AS_Katarn_Vest_Sniper",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_Katarn_Helmet",
			"3AS_Katarn_Vest_Sniper",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_DC17M_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
		respawnMagazines[]=
		{
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"3AS_AntiArmour_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"3AS_ThermalDetonator",
			"3AS_ThermalDetonator"
		};
	};

	class 87th_Clone_Pilot: 87th_Clone_EOD 
	{
		displayName = "Clone Pilot";
		Engineer = 1;
		canDeactivateMines = 0;
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_Pilot.jpg);
		editorSubcategory = "87th_Troopers";
		backpack = "JLTS_Clone_RTO_pack";
		linkedItems[]=
		{
			"87th_P2_Pilot_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P2_Pilot_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		magazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"3AS_60Rnd_EC30_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
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
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_Clone_P1_Pilot.jpg);
		editorSubcategory = "87th_P1_Troopers";
		uniformClass = "87th_P1_Trooper_Uniform";
		
		hiddenSelectionsTextures[]=
		{
            QPATHTOEF(rep_armor, data\uniforms\ct\87th_P1_Chest_co.paa),
            QPATHTOEF(rep_armor, data\uniforms\ct\87th_P1_Legs_co.paa)
        };
		linkedItems[]=
		{
			"87th_P1_Pilot_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"87th_P1_Pilot_Helmet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
};