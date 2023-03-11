class CfgWeapons {
	class ItemInfo;
	class NVGoggles;
	class Uniform_Base;
	class UniformItem;
	class 3as_ATRT_Helmet;
	class 3as_P2_Pilot_helmet;
	class 3AS_Katarn_Helmet_Base;
	class 3AS_Katarn_Vest_Demo_Base;
	class 3AS_Katarn_Vest_Tech_Base;
	class JLTS_CloneHelmetAB;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestCommander;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestOfficer;
	class SEA_Helmet_ARF_Base;

	class 87th_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author = "Stim";
		displayname = "[87th] Trooper Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Trooper_Helmet_co.paa) };
	};
	class 87th_Captain_Helmet: 87th_Trooper_Helmet
	{
		displayname = "[87th] Captain Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Captain_Helmet_co.paa) };
	};
	class 87th_ARC_Helmet: 87th_Trooper_Helmet
	{
		displayname = "[87th] ARC Helmet";
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_ARC_Helmet_co.paa)};
	};
	class 87th_Airborne_Helmet: JLTS_CloneHelmetAB
	{
		author = "Stim";
		displayname = "[87th] Airborne Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_Airborne_Helmet_co.paa) };
	};
	class 87th_ARF_Helmet: SEA_Helmet_ARF_Base
	{
		author = "Stim";
		displayname = "[87th] ARF Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\arf\87th_ARF_Helmet_co.paa),
			QPATHTOF(data\helmets\arf\87th_ARF_Plates_co.paa),
			QPATHTOF(data\helmets\arf\87th_ARF_Visor_co.paa)
		};
	};
	class 87th_ATRT_Helmet: 3as_ATRT_Helmet
	{
		author = "Stim";
		displayname = "[87th] ATRT Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_ATRT_Helmet_co.paa) };
	};
	class 87th_BARC_Helmet: JLTS_CloneHelmetBARC
	{
		author = "Stim";
		displayname = "[87th] BARC Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_BARC_Helmet_co.paa) };
	};
	class 87th_Katarn_Helmet: 3AS_Katarn_Helmet_Base
	{
		author = "Stim";
		displayname = "[87th] Katarn Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa)
		};
	};
	class 87th_P2_Pilot_helmet: 3as_P2_Pilot_helmet
	{
		author = "Stim";
		displayname = "[87th] Pilot Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			QPATHTOF(data\helmets\87th_Pilot_Helmet_co.paa),
			""
		};
	};
	class 87th_Commander_Helmet: 87th_Trooper_Helmet
	{
		author = "Stim";
		displayname = "[87th] Commander Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Commander_Helmet_co.paa) };
	};
	class 87th_NVG: NVGoggles
	{
		author = "Stim";
		displayname = "[87th] NVG";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =  { QPATHTOF(data\other\87th_NVG_co.paa) };
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
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
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	class 87th_Officer_Accessories: JLTS_CloneVestOfficer
	{
		author = "Stim";
		displayname = "[87th] Officer Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
	};
	class 87th_Commander_Accessories: JLTS_CloneVestCommander
	{
		author = "Stim";
		displayname = "[87th] Commander Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
	};
	class 87th_Lieutenant_Accessories: JLTS_CloneVestLieutenant
	{
		author = "Stim";
		displayname = "[87th] Lieutenant Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
	};
	class 87th_Kama: JLTS_CloneVestKama
	{
		author = "Stim";
		displayname = "[87th] Kama";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
	};
	class 87th_Katarn_Vest_Demo: 3AS_Katarn_Vest_Demo_Base
	{
		author = "Stim";
		displayname = "[87th] Katarn Demolitions Pack";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Katarn_Demo_co.paa) };
	};
	class 87th_Katarn_Vest_Tech: 3AS_Katarn_Vest_Tech_Base
	{
		author = "Stim";
		displayname = "[87th] Katarn Technician Pack";
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
	class 87th_Katarn_Armor: Uniform_Base
	{
		author = "Stim";
		scope = 2;
		tas_is_commando = 1;
		displayname = "[87th] Katarn Armor";
		picture = "\3AS\3AS_Characters\Commando\data\Armor_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "87th_Commando_Base";
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};