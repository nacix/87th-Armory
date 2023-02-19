class CfgWeapons {
	class UniformItem;
	class VestItem;
	class NVGoggles;
	class H_HelmetO_ViperSP_hex_F;
	class HeadgearItem;
	class U_I_CombatUniform;
	class V_PlateCarrier1_rgr;
	class JLTS_CloneHelmetP2;
	class ItemInfo;
	class ItemCore;
	class 3AS_DC15A_F;
	class 3AS_DC15S_F;
	class 3AS_DC15A_GL;
	class 3AS_DC15C_GL;
	class 3AS_DC15C_F;
	class 3AS_DC15L_F;
	class JLTS_DC15X;

	class 87th_Trooper_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author="Stim";
		displayName="87th Trooper Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\armor\87th_Trooper_Helmet_co.paa"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[]={};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_Raven_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author="Stim";
		displayName="87th Ravens Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\armor\87th_Raven_Helmet_co.paa"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[]={};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_Tasty_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author="Stim";
		displayName="87th Tastys Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\armor\87th_Tasty_Helmet_co.paa"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[]={};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_ARF_Helmet: H_HelmetO_ViperSP_hex_F
	{
		weaponPoolAvailable=1;
		scope=2;
		displayName="87th ARF Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		model="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[] = {
			"x\87th\addons\troopers\data\armor\87th_ARF_Helmet_co.paa",
			"x\87th\addons\troopers\data\armor\87th_ARF_Helmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\ARF\ARF.rvmat"
		};
		descriptionShort="Republic Standard Issued Phase 2 Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_BARC_Helmet: JLTS_CloneHelmetP2
	{
		author="Stim";
		displayName="87th BARC Helmet";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetBARC_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\armor\87th_BARC_Helmet_co.paa"};
		model="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		subItems[]={};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_P2_Pilot_helmet: H_HelmetO_ViperSP_hex_F
	{
		author="Stim";
		scope=2;
		weaponPoolAvailable=1;
		displayName="87th Pilot Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[] = {
			"x\87th\addons\troopers\data\armor\87th_Pilot_Helmet_co.paa",
			"x\87th\addons\troopers\data\armor\87th_Pilot_Helmet_co.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"x\87th\addons\troopers\data\armor\87th_Pilot_Helmet_co.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_Commander_Helmet: H_HelmetO_ViperSP_hex_F
	{
		author="Stim";
		displayName="87th Commander Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\armor\87th_Commander_Helmet_co.paa"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		subItems[]={};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_NVG: NVGoggles
	{
		author="Stim";
		displayName="87th NVG";
		//modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\accessories\87th_NVG_co.paa"};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff="\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 87th_Officer_Accessories: V_PlateCarrier1_rgr
	{
		author="Stim1087";
		scope=2;
		displayName="87th Officer Accessories";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"x\87th\addons\troopers\data\accessories\87th_Officer_Attachments_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 87th_Commander_Accessories: 87th_Officer_Accessories
	{
		displayName="87th Commander Accessories";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 87th_Lieutenant_Accessories: 87th_Officer_Accessories
	{
		displayName="87th Lieutenant Accessories";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 87th_Kama: 87th_Officer_Accessories
	{
		displayName="87th Kama";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 87th_Trooper_Uniform: U_I_CombatUniform
	{
		author="Stim";
		scope=2;
		displayName="87th Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="87th_Clone_DC15A";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 87th_3AS_DC15A_F: 3AS_DC15A_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
		};
	};
	class 87th_3AS_DC15S_F: 3AS_DC15S_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_holo_dc15s";
			};
		};
	};
	class 87th_3AS_DC15A_GL: 3AS_DC15A_GL
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
		};
	};
	class 87th_3AS_DC15C_GL: 3AS_DC15C_GL
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_reflex_dc15c";
			};
		};
	};
	class 87th_3AS_DC15C_F: 3AS_DC15C_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_acog_dc15c";
			};
		};
	};
	class 87th_3AS_DC15L_F: 3AS_DC15L_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_dc15l";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "3as_bipod_dc15l_f";
			};
		};
	};
	class 87th_JLTS_DC15X : JLTS_DC15X
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "jlts_dc15x_scope";
			};
		};
	};
};