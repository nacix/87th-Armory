class CfgWeapons {
	// Sets armor value for a HitPoint
	#define SET_ARMOR_VALS(baseArmor,pass,mult) \
		armor = QUOTE(baseArmor*mult); \
		passThrough = QUOTE(pass);

	// Calls armor value setter for each region of the head with given multiplier
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
	
	// Calls armor value setter for each region of the torso with given multiplier
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

	// Calls armor value setter for each region of the arms with given multiplier
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

	// Calls armor value setter for each region of the legs with given multiplier
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

	// Calls setters for each part of the body
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

	// Adds a P2 Clone Trooper helmet
	#define ADD_CT_HELMET(className,rawName) \
		class TAG##_##className##_Helmet: TAG##_Trooper_Helmet \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\##TAG##_##className##_Helmet_co.paa) }; \
		};

	// Adds a camo variant for the given ARF helmet
	#define ADD_ARF_CAMO(className,rawName,header,camoType,isDark) \
		class TAG##_##header##_##camoType##: TAG##_##header \
		{ \
			displayName = TAG_NAME(rawName ##(##camoType##)); \
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
			displayName = TAG_NAME(rawName ##(##camoType## - P2)); \
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
	// Calls camo setter for all applicable ARF camo selections
	#define ADD_ARF_HELMET_CAMOS(className,rawName,header) \
		ADD_ARF_CAMO(className, rawName, header, Desert, 0) \
		ADD_ARF_CAMO(className, rawName, header, Sarid, 0) \
		ADD_ARF_CAMO(className, rawName, header, Woodland, 1) \
		ADD_ARF_CAMO(className, rawName, header, Winter, 0) \
		ADD_ARF_CAMO(className, rawName, header, Urban, 1)
	// Adds a new ARF helmet class with all available camo variants
	#define ADD_ARF_HELMET(className,rawName) \
		class TAG##_ARF_Helmet_##className##: TAG##_ARF_Helmet \
		{ \
			displayName = TAG_NAME(rawName); \
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
			displayName = TAG_NAME(rawName ##(P2)); \
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

	// Adds a camo variant for the given arf uniform
	#define ADD_ARF_UNIFORM(camoType) \
		class TAG##_ARF_Uniform_##camoType##: TAG##_ARF_Uniform \
		{ \
			displayName = TAG_NAME(ARF Armor (##camoType##)); \
			class ItemInfo: ItemInfo \
			{ \
				uniformClass = QUOTE(TAG##_ARF_Base_##camoType##); \
			}; \
		};

	// Adds a camo variant for the given barc helmet
	#define ADD_BARC_HELMET_CAMO(className,rawName,header,camoType) \
		class TAG##_##header##_##camoType##: TAG##_##header \
		{ \
			displayName = TAG_NAME(BARC Helmet (##camoType##)); \
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
		class TAG##_##phase##_Pilot_Helmet_##className##: TAG_CLASS(P2_Pilot_Helmet) \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet_##className)_co.paa), \
				QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet_##className)_co.paa), \
				"", \
				"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa", \
				QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet_##className)_co.paa), \
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

	class TAG##_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author = "Stim";
		displayName = TAG_NAME(Trooper Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\TAG_CLASS(Trooper_Helmet)_co.paa) };
		DEF_ARMOR_BASE
	};

	class TAG##_Engineer_Helmet: 3as_Engineer_Helmet
	{
		author="Stim";
		displayName=TAG_NAME(Engineer Helmet);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\engi\TAG_CLASS(Engineer_Helmet)_ca.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\engi\TAG_CLASS(Engineer_Helmet).rvmat)
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
	class TAG##_RTO_Helmet: ls_sob_phase2SpecOp_helmet
	{
		author = "Stim";
		displayName = TAG_NAME(RTO Helmet);
		hiddenSelectionsTextures[] = 
		{
			QPATHTOF(data\helmets\rto\TAG_CLASS(RTO_Helmet)_co.paa),
			QPATHTOF(data\helmets\rto\RTO_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\rto\TAG_CLASS(RTO.rvmat)),
			QPATHTOF(data\helmets\rto\RTO_Visor.rvmat)
		};
		DEF_ARMOR_BASE
	};

	class TAG##_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(ARF Helmet);
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\trooper\TAG_CLASS(ARF_Helmet)_co.paa),
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
	class TAG##_ARF_Helmet_P2: ls_gar_phase2Arf_helmet
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(ARF Helmet (P2));
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\trooper\TAG_CLASS(ARF_Helmet)_co.paa),
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

	// Add camo variants to base ARF helmet
	ADD_ARF_HELMET_CAMOS(Trooper, ARF Helmet, ARF_Helmet)

	class TAG##_BARC_Helmet: JLTS_CloneHelmetBARC
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(BARC Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\barc\trooper\TAG_CLASS(BARC_Helmet)_co.paa) };
		DEF_ARMOR_BASE
	};

	// Add camo variants to base BARC helmet
	ADD_BARC_HELMET_CAMOS(Trooper, BARC Helmet, BARC_Helmet)

	class TAG##_Airborne_Helmet: JLTS_CloneHelmetAB
	{
		author = "Stim";
		displayName = TAG_NAME(Airborne Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\TAG_CLASS(Airborne_Helmet)_co.paa) };
		DEF_ARMOR_BASE
	};

	class TAG##_P2_Pilot_Helmet: 3as_P2_Pilot_helmet
	{
		author = "Stim";
		displayName = TAG_NAME(Pilot Helmet);
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet)_co.paa),
			QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet)_co.paa),
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			QPATHTOF(data\helmets\pilot\TAG_CLASS(Pilot_Helmet)_co.paa),
			""
		};
		DEF_ARMOR_BASE
	};
	class TAG##_P1_Pilot_Helmet: 3as_P1_Pilot_helmet
	{
		displayName = TAG_NAME(Phase 1 Pilot Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\pilot\TAG_CLASS(P1_Pilot_Helmet)_co.paa) };
		DEF_ARMOR_BASE
	};

	class TAG##_P1_Trooper_Helmet: 3as_P1_Base
	{
		author = "Stim";
		displayName = TAG_NAME(Phase 1 Trooper Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\TAG_CLASS(P1_Trooper_Helmet)_co.paa) };
		subItems[] = {};
		DEF_ARMOR_BASE
	};

	class TAG##_Katarn_Helmet: 3AS_H_Katarn_Helmet
	{
		scope = 2;
		author = "Stim";
		displayName = TAG_NAME(Katarn Helmet);
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\TAG_CLASS(Katarn_Helmet)_co.paa),
			QPATHTOF(data\helmets\TAG_CLASS(Katarn_Helmet)_co.paa)
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
	ADD_CT_HELMET(Cat, Cat's Helmet)
	ADD_CT_HELMET(Noggy, Noggy's Helmet)
	ADD_CT_HELMET(Byte, Byte's Helmet)
	ADD_CT_HELMET(Domino, Domino's Helmet)
	ADD_CT_HELMET(Officer, Officer Helmet)

	// Custom ARF Helmet Definitions
	ADD_ARF_HELMET(Tasty, Tasty's ARF Helmet)

	// Custom Pilot Helmet Definitions
	ADD_PILOT_HELMET(Stim, P2, Stim's Pilot Helmet)

	class TAG##_NVG_Base: NVGoggles
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
	class TAG##_Rangefinder: TAG_CLASS(NVG_Base)
	{
		displayName = TAG_NAME(Rangefinder);
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\other\TAG_CLASS(Rangefinder)_co.paa) };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		};
	};
	class TAG##_Macrobinocular: TAG_CLASS(NVG_Base)
	{
		displayName = TAG_NAME(Macrobinocular I);
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\TAG_CLASS(Macro)_co.paa) };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		};
	};
	class TAG##_Macrobinocular_Low: TAG_CLASS(Macrobinocular)
	{
		displayName = TAG_NAME(Macrobinocular I (Specialist));
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		};
	};
	class TAG##_Macrobinocular_Alt: TAG_CLASS(Macrobinocular)
	{
		displayName = TAG_NAME(Macrobinocular II);
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\TAG_CLASS(Macro_Alt)_co.paa) };
	};
	class TAG##_Macrobinocular_Alt_Low: TAG_CLASS(Macrobinocular_Low)
	{
		displayName = TAG_NAME(Macrobinocular II (Specialist));
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\TAG_CLASS(Macro_Alt)_co.paa) };
	};

	class TAG##_ARC_Vest: JLTS_CloneVestARC
	{
		author = "Stim";
		displayName = TAG_NAME(ARC Vest);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(ARC_Vest)_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45)
	};
	class TAG##_Medic_Vest: JLTS_CloneVestAirborne
	{
		author = "Stim";
		displayName = TAG_NAME(Medic Accessories);
		hiddenSelectionsTextures[] = { "", QPATHTOF(data\vests\TAG_CLASS(Medic_Vest)_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25)
	};

	class TAG##_Recon_Accessories: JLTS_CloneVestRecon
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(Recon Accessories);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Recon_Attachments)_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25)
	};
	class TAG##_Recon_NCO_Accessories: JLTS_CloneVestReconNCO
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(Recon NCO Accessories);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Recon_Attachments)_co.paa) };
		DEF_ARMOR(1.15,0.5,0,1,0.15,0.45)
	};
	class TAG##_Recon_Officer_Accessories: JLTS_CloneVestReconOfficer
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(Recon Officer Accessories);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\TAG_CLASS(Recon_Officer_Attachments)_co.paa),
			QPATHTOF(data\vests\TAG_CLASS(Recon_Attachments)_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
	};

	class TAG##_Lieutenant_Accessories: JLTS_CloneVestLieutenant
	{
		author = "Stim";
		displayName = TAG_NAME(Lieutenant Accessories);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Officer_Attachments)_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
	};
	class TAG##_Officer_Accessories: JLTS_CloneVestOfficer
	{
		author = "Stim";
		displayName = TAG_NAME(Officer Accessories);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Officer_Attachments)_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
	};
	class TAG##_Commander_Accessories: JLTS_CloneVestCommander
	{
		author = "Stim";
		displayName = TAG_NAME(Commander Accessories);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Officer_Attachments)_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.2,0.45)
	};
	class TAG##_Kama: JLTS_CloneVestKama
	{
		author = "Stim";
		displayName = TAG_NAME(Kama);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Officer_Attachments)_co.paa) };
		DEF_ARMOR(1.15,0.5,0,1,0.15,0.45)
	};

	class TAG##_Katarn_Vest_Demo: 3AS_Katarn_Vest_Demo_Base
	{
		author = "Stim";
		scope = 2;
		displayName = TAG_NAME(Katarn Demolitions Pack);
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Katarn_Demo)_co.paa) };
	};
	class TAG##_Katarn_Vest_Tech: 3AS_Katarn_Vest_Tech_Base
	{
		author = "Stim";
		scope = 2;
		displayName = TAG_NAME(Katarn Technician Pack);
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\TAG_CLASS(Katarn_Tech)_co.paa) };
	};

	class TAG##_Trooper_Uniform: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		displayName = TAG_NAME(Trooper Armor);
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CLASS(Clone_Base);
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class TAG##_Medic_Uniform: TAG_CLASS(Trooper_Uniform)
	{
		displayName = TAG_NAME(Medic Armor);
		class ItemInfo: ItemInfo
		{
			uniformClass = CLASS(Medic_Base);
			containerClass = "Supply200";
		};
	};
	class TAG##_P1_Trooper_Uniform: TAG_CLASS(Trooper_Uniform)
	{
		displayName = TAG_NAME(Phase 1 Trooper Armor);
		class ItemInfo: ItemInfo
		{
			uniformClass = CLASS(Clone_P1_Base);
			containerClass = "Supply150";
		};
	};

	class TAG##_ARF_Uniform: TAG_CLASS(Trooper_Uniform)
	{
		author = "Stim & Anorexican";
		displayName = TAG_NAME(ARF Armor);
		class ItemInfo: ItemInfo
		{
			uniformClass = CLASS(ARF_Base);
			containerClass = "Supply200";
		};
	};
	
	ADD_ARF_UNIFORM(Desert)
	ADD_ARF_UNIFORM(Sarid)
	ADD_ARF_UNIFORM(Woodland)
	ADD_ARF_UNIFORM(Winter)
	ADD_ARF_UNIFORM(Urban)

	class TAG##_Katarn_Armor: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		tas_is_commando = 1;
		displayName = TAG_NAME(Katarn Armor);
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CLASS(Commando_Base);
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};