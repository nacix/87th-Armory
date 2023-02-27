class CfgWeapons {
	class HeadgearItem;
	class H_HelmetO_ViperSP_hex_F;
	class ItemCore;
	class ItemInfo;
	class NVGoggles;
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class JLTS_CloneHelmetP2;
	class 3AS_Katarn_Helmet_Base;
	class 3AS_Katarn_Vest_Demo_Base;
	class 3AS_Katarn_Vest_Tech_Base;

	class 87th_Trooper_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		displayName = "87th Trooper Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_Trooper_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_Captain_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		displayName = "87th Captain Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_Captain_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]= 
			{
				"camo1"
			};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_ARC_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		displayName = "87th ARC Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_ARC_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_Airborne_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		displayName = "87th Airborne Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\87th_Airborne_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_ARF_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		weaponPoolAvailable = 1;
		scope = 2;
		displayName = "87th ARF Helmet";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		model = "JLTS_AE\SEA_Helmet_ARF.p3d";
		hiddenSelections[]= 
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\arf\87th_ARF_Helmet_co.paa),
			QPATHTOF(data\helmets\arf\87th_ARF_Plates_co.paa),
			QPATHTOF(data\helmets\arf\87th_ARF_Visor_co.paa)
		};
		descriptionShort = "87th Standard Issued Phase 2 Helmet";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "JLTS_AE\SEA_Helmet_ARF.p3d";
			hiddenSelections[]= 
			{
				"Camo1",
				"Visor"
			};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_BARC_Helmet: JLTS_CloneHelmetP2
	{
		author = "Stim";
		displayName = "87th BARC Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetBARC_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\87th_BARC_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_Katarn_Helmet: 3AS_Katarn_Helmet_Base
	{
		author = "Stim";
		displayName = "87th Katarn Helmet";
		picture = "\3AS\3AS_Characters\Commando\data\Helmet_ca.paa";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa)
		};
	};
	class 87th_P2_Pilot_helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "87th Pilot Helmet";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[]= 
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[]= 
			{
				"Camo",
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5"
			};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_Commander_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author = "Stim";
		displayName = "87th Commander Helmet";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_Commander_Helmet_co.paa)};
		model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class 87th_NVG: NVGoggles
	{
		author = "Stim";
		displayName = "87th NVG";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\other\87th_NVG_co.paa)};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]= 
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {0,1};
		class ItemInfo
		{
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	class 87th_Officer_Accessories: V_PlateCarrier1_rgr
	{
		author = "Stim";
		scope = 2;
		displayName = "87th Officer Accessories";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\vests\87th_Officer_Attachments_co.paa)};
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass = "Supply70";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class 87th_Commander_Accessories: 87th_Officer_Accessories
	{
		displayName = "87th Commander Accessories";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			containerClass = "Supply70";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class 87th_Lieutenant_Accessories: 87th_Officer_Accessories
	{
		displayName = "87th Lieutenant Accessories";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
			containerClass = "Supply70";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class 87th_Kama: 87th_Officer_Accessories
	{
		displayName = "87th Kama";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			containerClass = "Supply70";
			hiddenSelections[]= 
			{
				"camo1"
			};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class 87th_Katarn_Vest_Demo: 3AS_Katarn_Vest_Demo_Base
	{
		author = "Stim";
		scope = 2;
		displayName = "87th Katarn Demolitions Pack";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\vests\87th_Katarn_Demo_co.paa)};
	};
	class 87th_Katarn_Vest_Tech: 3AS_Katarn_Vest_Tech_Base
	{
		author = "Stim";
		scope = 2;
		displayName = "87th Katarn Technician Pack";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\vests\87th_Katarn_Tech_co.paa)};
	};
	class 87th_Trooper_Uniform: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		displayName = "87th Trooper Armor";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "87th_Clone_Base";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class 87th_Katarn_Armor: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		tas_is_commando = 1;
		displayName = "87th Katarn Armor";
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "87th_Commando_Base";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};