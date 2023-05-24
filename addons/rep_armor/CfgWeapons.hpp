class CfgWeapons {
	#define SET_ARMOR_VALS(baseArmor,pass,mult) \
		armor = QUOTE(baseArmor*mult); \
		passThrough = QUOTE(pass);

	#define SET_ARMOR_HEAD(baseArmor,pass,headMult) \
		class Head \
		{ \
			hitpointName = "HitHead"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		}; \
		class Face \
		{ \
			hitpointName = "HitFace"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		}; \
		class Neck \
		{ \
			hitpointName = "HitNeck"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		};
	
	#define SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
		class Body \
		{ \
			hitpointName = "HitBody"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Chest \
		{ \
			hitpointName = "HitChest"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Diaphragm \
		{ \
			hitpointName = "HitDiaphragm"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Abdomen \
		{ \
			hitpointName = "HitAbdomen"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Pelvis \
		{ \
			hitpointName = "HitPelvis"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		};

	#define SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
		class Arms \
		{ \
			hitpointName = "HitArms"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class Hands \
		{ \
			hitpointName = "HitHands"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class LeftArm \
		{ \
			hitpointName = "HitLeftArm"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class RightArm \
		{ \
			hitpointName = "HitRightArm"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		};

	#define SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
		class Legs \
		{ \
			hitpointName = "HitLegs"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		}; \
		class LeftLeg \
		{ \
			hitpointName = "HitLeftLeg"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		}; \
		class RightLeg \
		{ \
			hitpointName = "HitRightLeg"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		};

	#define SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		class HitpointsProtectionInfo \
		{ \
			SET_ARMOR_HEAD(baseArmor,pass,headMult) \
			SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
			SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
			SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
		};

	// Inherits ItemInfo from parent class and calls master setter for HitPoint armor
	#define DEF_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		class ItemInfo: ItemInfo \
		{ \
			SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		};

	#define ADD_CT_HELMET(className,rawName) \
		class TAG##_##className##_Helmet: TAG##_Trooper_Helmet \
		{ \
			displayName = NAME_PRETTY(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\##TAG##_##className##_Helmet_co.paa) }; \
		};

	#define ADD_ARF_CAMO(className,rawName,header,camoType,isDark) \
		class TAG##_##header##_##camoType##: TAG##_##header \
		{ \
			displayName = NAME_PRETTY(rawName ##(##camoType##)); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\arf\##className##\##TAG##_##header##_##camoType##_co.paa), \
				"", \
				QPATHTOF(data\helmets\arf\ARF_Visor_co.paa) \
			}; \
			#if isDark \
				hiddenSelectionsMaterials[]= \
				{ \
					QPATHTOF(data\helmets\arf\ARFHelmet##className##Dark.rvmat), \
					"", \
					"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat" \
				}; \
			#endif \
		}; \
		class TAG##_##header##_##camoType##_P2: TAG##_##header##_P2 \
		{ \
			displayname = NAME_PRETTY(rawName ##(##camoType## - P2)); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\arf\##className##\##TAG##_##header##_##camoType##_co.paa), \
				"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa", \
				QPATHTOF(data\helmets\arf\ARF_Visor_co.paa) \
			}; \
			#if isDark \
				hiddenSelectionsMaterials[]= \
				{ \
					QPATHTOF(data\helmets\arf\ARFHelmet##className##Dark.rvmat), \
					"ls_armor_bluefor\helmet\gar\arf\data\camo2.rvmat", \
					"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat" \
				}; \
			#endif \
		};
	#define ADD_ARF_HELMET_CAMOS(className,rawName,header) \
		ADD_ARF_CAMO(className, rawName, header, Desert, 0) \
		ADD_ARF_CAMO(className, rawName, header, Sarid, 0) \
		ADD_ARF_CAMO(className, rawName, header, Woodland, 1) \
		ADD_ARF_CAMO(className, rawName, header, Winter, 0) \
		ADD_ARF_CAMO(className, rawName, header, Urban, 1)
	#define ADD_ARF_HELMET(className,rawName) \
		class TAG##_ARF_Helmet_##className##: TAG##_ARF_Helmet \
		{ \
			displayName = NAME_PRETTY(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\arf\##className##\##TAG##_ARF_Helmet_##className##_co.paa), \
				"", \
				QPATHTOF(data\helmets\arf\ARF_Visor_co.paa) \
			}; \
			hiddenSelectionsMaterials[]= \
			{ \
				QPATHTOF(data\helmets\arf\ARFHelmet##className##.rvmat), \
				"", \
				"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat" \
			}; \
		}; \
		class TAG##_ARF_Helmet_##className##_P2: TAG##_ARF_Helmet_P2 \
		{ \
			displayName = NAME_PRETTY(rawName ##(P2)); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\arf\##className##\##TAG##_ARF_Helmet_##className##_co.paa), \
				"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa", \
				QPATHTOF(data\helmets\arf\ARF_Visor_co.paa) \
			}; \
			hiddenSelectionsMaterials[]= \
			{ \
				QPATHTOF(data\helmets\arf\ARFHelmet##className##.rvmat), \
				"ls_armor_bluefor\helmet\gar\arf\data\camo2.rvmat", \
				"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat" \
			}; \
		}; \
		ADD_ARF_HELMET_CAMOS(className, rawName, ARF_Helmet_##className)

	#define ADD_ARF_UNIFORM(camoType) \
		class TAG##_ARF_Uniform_##camoType##: TAG##_ARF_Uniform \
		{ \
			displayName = NAME_PRETTY(ARF Armor (##camoType##)); \
			class ItemInfo: ItemInfo \
			{ \
				uniformClass = QUOTE(TAG##_ARF_Base_##camoType##); \
			}; \
		};

	// Adds a camo variant for the given barc helmet
	#define ADD_BARC_HELMET_CAMO(className,rawName,header,camoType) \
		class TAG##_##header##_##camoType##: TAG##_##header \
		{ \
			displayName = NAME_PRETTY(BARC Helmet (##camoType##)); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\barc\##className##\##TAG##_##header##_##camoType##_co.paa) }; \
		};
	// Calls camo setter for all applicable ARF camo selections
	#define ADD_BARC_HELMET_CAMOS(className,rawName,header) \
		ADD_BARC_HELMET_CAMO(className, rawName, header, Desert) \
		ADD_BARC_HELMET_CAMO(className, rawName, header, Sarid) \
		ADD_BARC_HELMET_CAMO(className, rawName, header, Woodland) \
		ADD_BARC_HELMET_CAMO(className, rawName, header, Winter) \
		ADD_BARC_HELMET_CAMO(className, rawName, header, Urban)

	// Adds a P2 pilot helmet
	#define ADD_PILOT_HELMET(className,phase,rawName) \
		class TAG##_##phase##_Pilot_Helmet_##className##: 87th_P2_Pilot_Helmet \
		{ \
			displayName = NAME_PRETTY(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_##className##_co.paa), \
				QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_##className##_co.paa), \
				"", \
				"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa", \
				QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_##className##_co.paa), \
				"" \
			}; \
		};

	// Defines inherited class with ItemInfo from given parent class
	#define GET_INFO(className,parentClass) \
		class className##: parentClass \
		{ \
			class ItemInfo; \
		};
		
	// Defines inherited class with ItemInfo - always inherits from A3 Viper SP Helmet
	#define GET_INFO_VSP(className) GET_INFO(className, H_HelmetO_ViperSP_hex_F)
	// Defines inherited class with ItemInfo - always inherits from JLTS Officer Vest
	#define GET_INFO_CVO(className) GET_INFO(className, JLTS_CloneVestOfficer)
	// Defines inherited class with ItemInfo - always inherits from LS Blufor Helmet
	#define GET_INFO_BFH(className) GET_INFO(className, ls_blueforHelmet_base)

	class HeadgearItem;
	class NVGoggles;
	class Uniform_Base;
	class UniformItem;
	class H_HelmetO_ViperSP_hex_F;
	class V_PlateCarrier1_rgr;

	class 3as_Engineer_Helmet;
	class 3as_P1_Pilot_helmet
	{
		class ItemInfo;
	};
	class 3AS_Katarn_Helmet_Base;
	class 3AS_Katarn_Vest_Demo_Base;
	class 3AS_Katarn_Vest_Tech_Base;
	class ls_blueforHelmet_base;

	GET_INFO_VSP(3as_P2_Pilot_helmet)
	GET_INFO_VSP(JLTS_CloneHelmetAB)
	GET_INFO_VSP(JLTS_CloneHelmetP2)
	GET_INFO_VSP(3as_P1_Base)

	GET_INFO(3AS_H_Katarn_Helmet, 3AS_Katarn_Helmet_Base)
	GET_INFO(JLTS_CloneHelmetBARC, JLTS_CloneHelmetP2)

	GET_INFO(JLTS_CloneVestOfficer, V_PlateCarrier1_rgr)
	GET_INFO_CVO(JLTS_CloneVestAirborne)
	GET_INFO_CVO(JLTS_CloneVestARC)
	GET_INFO_CVO(JLTS_CloneVestCommander)
	GET_INFO_CVO(JLTS_CloneVestKama)
	GET_INFO_CVO(JLTS_CloneVestLieutenant)
	GET_INFO_CVO(JLTS_CloneVestRecon)
	GET_INFO_CVO(JLTS_CloneVestReconNCO)
	GET_INFO_CVO(JLTS_CloneVestReconOfficer)

	GET_INFO_BFH(ls_gar_phase1Arf_helmet)
	GET_INFO_BFH(ls_sob_phase2SpecOp_helmet)

	GET_INFO(ls_gar_phase2Arf_helmet, ls_gar_phase1Arf_helmet)

	#define SET_ARMOR_BASE SET_ARMOR(13.5,0.8,1,0,0,0)
	#define DEF_ARMOR_BASE DEF_ARMOR(13.5,0.8,1,0,0,0)

	{
		author = "Stim";
		displayname = "[87th] Trooper Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Trooper_Helmet_co.paa) };
		DEF_ARMOR_BASE
	};

	// Variant CT Helmet Definitions
	ADD_CT_HELMET(ARC, ARC Helmet)
	ADD_CT_HELMET(Jet_Trooper, Jet Trooper Helmet)

	// Custom CT Helmet Definitions
	ADD_CT_HELMET(Stim, Stim's Helmet)
	ADD_CT_HELMET(Raven, Raven's Helmet)
	ADD_CT_HELMET(Stryder, Stryder's Helmet)
	ADD_CT_HELMET(Alcatraz, Alcatraz' Helmet)
	ADD_CT_HELMET(Cat, Cat's Helmet)
	ADD_CT_HELMET(Noggy, Noggy's Helmet)
	ADD_CT_HELMET(Byte, Byte's Helmet)
	ADD_CT_HELMET(Domino, Domino's Helmet)

	class 87th_Engineer_Helmet: 3as_Engineer_Helmet
	{
		author="Stim";
		displayName="[87th] Engineer Helmet";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\engi\87th_Engineer_Helmet_ca.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\engi\87th_Engineer_Helmet.rvmat)
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Engineer.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			SET_ARMOR_BASE
				};
			};
		};
	};
	class 87th_RTO_Helmet: ls_sob_phase2SpecOp_helmet
	{
		author = "Stim";
		displayname = "[87th] RTO Helmet";
		hiddenSelectionsTextures[] = 
		{ 
			QPATHTOF(data\helmets\rto\87th_RTO_Helmet_co.paa),
			QPATHTOF(data\helmets\rto\RTO_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\rto\87th_RTO.rvmat),
			QPATHTOF(data\helmets\rto\RTO_Visor.rvmat)
		};
		DEF_ARMOR_BASE
	};

	class 87th_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		author = "Stim & Anorexican";
		displayname = "[87th] ARF Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\trooper\87th_ARF_Helmet_co.paa),
			"",
			QPATHTOF(data\helmets\arf\ARF_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\arf\ARFHelmetTrooper.rvmat),
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat"
		};
		subItems[] = {};
		DEF_ARMOR_BASE
	};
	class 87th_ARF_Helmet_P2: ls_gar_phase2Arf_helmet
	{
		author = "Stim & Anorexican";
		displayname = "[87th] ARF Helmet (P2)";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\trooper\87th_ARF_Helmet_co.paa),
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			QPATHTOF(data\helmets\arf\ARF_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\arf\ARFHelmetTrooper.rvmat),
			"ls_armor_bluefor\helmet\gar\arf\data\camo2.rvmat",
			"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat"
		};
		subItems[] = {};
		DEF_ARMOR_BASE
	};

	ADD_ARF_HELMET_CAMOS(Trooper, ARF Helmet, ARF_Helmet)

	ADD_ARF_HELMET(Tasty, Tasty's ARF Helmet)

	class 87th_BARC_Helmet: JLTS_CloneHelmetBARC
	{
		author = "Stim & Anorexican";
		displayname = "[87th] BARC Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\barc\trooper\87th_BARC_Helmet_co.paa) };
		DEF_ARMOR_BASE
	};

	// Add camo variants to base BARC helmet
	ADD_BARC_HELMET_CAMOS(Trooper, BARC Helmet, BARC_Helmet)

	class 87th_Airborne_Helmet: JLTS_CloneHelmetAB
	{
		author = "Stim";
		displayname = "[87th] Airborne Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_Airborne_Helmet_co.paa) };
		DEF_ARMOR_BASE
	};
	class 87th_P2_Pilot_helmet: 3as_P2_Pilot_helmet
	{
		author = "Stim";
		displayname = "[87th] Pilot Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_co.paa),
			QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_co.paa),
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			QPATHTOF(data\helmets\pilot\87th_Pilot_Helmet_co.paa),
			""
		};
		DEF_ARMOR_BASE
	};
	class 87th_P1_Pilot_Helmet: 3as_P1_Pilot_helmet
	{
		displayName = "[87th] Phase 1 Pilot Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\pilot\87th_P1_Pilot_Helmet_co.paa) };
		DEF_ARMOR_BASE
	};

	ADD_PILOT_HELMET(Stim, Stim's Pilot Helmet)

	class 87th_P1_Trooper_Helmet: 3as_P1_Base
	{
		author = "Stim";
		displayname = "[87th] Phase 1 Trooper Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_P1_Trooper_Helmet_co.paa) };
		subItems[] = {};
		DEF_ARMOR_BASE
	};
	class 87th_Katarn_Helmet: 3AS_H_Katarn_Helmet
	{
		scope = 2;
		author = "Stim";
		displayname = "[87th] Katarn Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa)
		};
		DEF_ARMOR(18,0.35,1,0,0,0)
	};

	// Variant CT Helmet Definitions
	ADD_CT_HELMET(ARC, ARC Helmet)
	ADD_CT_HELMET(Jet_Trooper, Jet Trooper Helmet)

	// Custom CT Helmet Definitions
	ADD_CT_HELMET(Stim, Stim's Helmet)
	ADD_CT_HELMET(Raven, Raven's Helmet)
	ADD_CT_HELMET(Stryder, Stryder's Helmet)
	ADD_CT_HELMET(Alcatraz, Alcatraz' Helmet)
	ADD_CT_HELMET(Cat, Cat's Helmet)
	ADD_CT_HELMET(Noggy, Noggy's Helmet)
	ADD_CT_HELMET(Byte, Byte's Helmet)
	ADD_CT_HELMET(Domino, Domino's Helmet)

	// Custom ARF Helmet Definitions
	ADD_ARF_HELMET(Tasty, Tasty's ARF Helmet)

	// Custom Pilot Helmet Definitions
	ADD_PILOT_HELMET(Stim, P2, Stim's Pilot Helmet)

	{
		author = "Stim";
		scope = 0;
		hiddenSelections[] = {"camo1"};
		visionMode[]= 
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {0, 1};
		class ItemInfo
		{
			type = 616;
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	
	class 87th_Rangefinder: 87th_NVG_Base
	{
		displayName = "[87th] Rangefinder";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_Rangefinder_co.paa) };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		};
	};

	class 87th_Macrobinocular: 87th_NVG_Base
	{
		displayName = "[87th] Macrobinocular I";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\87th_Macro_co.paa) };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		};
	};
	class 87th_Macrobinocular_Low: 87th_Macrobinocular
	{
		displayName = "[87th] Macrobinocular I (Specialist)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		};
	};
	class 87th_Macrobinocular_Alt: 87th_Macrobinocular
	{
		displayName = "[87th] Macrobinocular II";
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\87th_Macro_Alt_co.paa) };
	};
	class 87th_Macrobinocular_Alt_Low: 87th_Macrobinocular_Low
	{
		displayName = "[87th] Macrobinocular II (Specialist)";
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\87th_Macro_Alt_co.paa) };
	};

	class 87th_ARC_Vest: JLTS_CloneVestARC
	{
		author = "Stim";
		displayname = "[87th] ARC Vest";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_ARC_Vest_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45)
		};
	};
	class 87th_Medic_Vest: JLTS_CloneVestAirborne
	{
		author = "Stim";
		displayname = "[87th] Medic Accessories";
		hiddenSelectionsTextures[] = { "", QPATHTOF(data\vests\87th_Medic_Vest_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25)
	};

	class 87th_Recon_Accessories: JLTS_CloneVestRecon
	{
		author = "Stim & Anorexican";
		displayname = "[87th] Recon Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Recon_Attachments_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25)
		};
	};
	class 87th_Recon_NCO_Accessories: JLTS_CloneVestReconNCO
	{
		author = "Stim & Anorexican";
		displayname = "[87th] Recon NCO Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Recon_Attachments_co.paa) };
		DEF_ARMOR(1.15,0.5,0,1,0.15,0.45)
		};
	};
	class 87th_Recon_Officer_Accessories: JLTS_CloneVestReconOfficer
	{
		author = "Stim & Anorexican";
		displayname = "[87th] Recon Officer Accessories";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\87th_Recon_Officer_Attachments_co.paa),
			QPATHTOF(data\vests\87th_Recon_Attachments_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
	};

	class 87th_Lieutenant_Accessories: JLTS_CloneVestLieutenant
	{
		author = "Stim";
		displayname = "[87th] Lieutenant Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
		};
	};
	class 87th_Officer_Accessories: JLTS_CloneVestOfficer
	{
		author = "Stim";
		displayname = "[87th] Officer Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
		};
	};
	class 87th_Commander_Accessories: JLTS_CloneVestCommander
	{
		author = "Stim";
		displayname = "[87th] Commander Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
		};
	};
	class 87th_Kama: JLTS_CloneVestKama
	{
		author = "Stim";
		displayname = "[87th] Kama";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
		DEF_ARMOR(1.15,0.5,0,1,0.15,0.45)
	};

	class 87th_Katarn_Vest_Demo: 3AS_Katarn_Vest_Demo_Base
	{
		author = "Stim";
		scope = 2;
		displayname = "[87th] Katarn Demolitions Pack";
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Katarn_Demo_co.paa) };
	};
	class 87th_Katarn_Vest_Tech: 3AS_Katarn_Vest_Tech_Base
	{
		author = "Stim";
		scope = 2;
		displayname = "[87th] Katarn Technician Pack";
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Katarn_Tech_co.paa) };
	};

	class 87th_Trooper_Uniform: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		displayname = "[87th] Trooper Armor";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "87th_Clone_Base";
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class 87th_Medic_Uniform: 87th_Trooper_Uniform
	{
		displayname = "[87th] Medic Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass = "87th_Medic_Base";
			containerClass = "Supply200";
		};
	};
	class 87th_P1_Trooper_Uniform: 87th_Trooper_Uniform
	{
		displayname = "[87th] Phase 1 Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass = "87th_Clone_P1_Base";
			containerClass = "Supply150";
		};
	};

	class 87th_ARF_Uniform: 87th_Trooper_Uniform
	{
		author = "Stim & Anorexican";
		displayName = "[87th] ARF Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass = "87th_ARF_Base";
			containerClass = "Supply200";
		};
	};
	
	ADD_ARF_UNIFORM(Desert)
	ADD_ARF_UNIFORM(Sarid)
	ADD_ARF_UNIFORM(Woodland)
	ADD_ARF_UNIFORM(Winter)
	ADD_ARF_UNIFORM(Urban)

	class 87th_Katarn_Armor: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		tas_is_commando = 1;
		displayname = "[87th] Katarn Armor";
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "87th_Commando_Base";
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};