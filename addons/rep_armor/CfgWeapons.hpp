class CfgWeapons {
	class ItemInfo;
	class NVGoggles;
	class Uniform_Base;
	class UniformItem;
	class 3as_ATRT_Helmet;
	class 3as_Engineer_Helmet;
	class 3as_P1_Base;
	class 3as_P2_Pilot_helmet;
	class 3as_P1_Pilot_helmet;
	class 3AS_Katarn_Helmet_Base;
	class 3AS_Katarn_Vest_Demo_Base;
	class 3AS_Katarn_Vest_Tech_Base;
	class JLTS_CloneHelmetAB;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestCommander;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestOfficer;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_phase2Arf_helmet;

	class 87th_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author = "Stim";
		displayname = "[87th] Trooper Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Trooper_Helmet_co.paa) };
	};
	class 87th_ARC_Helmet: 87th_Trooper_Helmet
	{
		displayname = "[87th] ARC Helmet";
		hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\ct\87th_ARC_Helmet_co.paa)};
	};
	class 87th_Stryder_Helmet: 87th_Trooper_Helmet
	{
		displayname = "[87th] Stryder's Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Stryder_Helmet_co.paa) };
	};
	class 87th_Captain_Helmet: 87th_Trooper_Helmet
	{
		displayname = "[87th] Captain Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Captain_Helmet_co.paa) };
	};
	class 87th_Commander_Helmet: 87th_Trooper_Helmet
	{
		author = "Stim";
		displayname = "[87th] Commander Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_Commander_Helmet_co.paa) };
	};

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
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class 87th_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		author = "Stim";
		displayname = "[87th] ARF Helmet";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\87th_ARF_Helmet_co.paa),
			"",
			QPATHTOF(data\helmets\arf\ARF_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\arf\ARFHelmet.rvmat),
			"",
			"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat"
		};
		subItems[] = {};
	};
	class 87th_ARF_Helmet_P2: ls_gar_phase2Arf_helmet
	{
		author = "Stim";
		displayname = "[87th] ARF Helmet (P2)";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\87th_ARF_Helmet_co.paa),
			"ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa",
			QPATHTOF(data\helmets\arf\ARF_Visor_co.paa)
		};
		hiddenSelectionsMaterials[]=
		{
			QPATHTOF(data\helmets\arf\ARFHelmet.rvmat),
			"ls_armor_bluefor\helmet\gar\arf\data\camo2.rvmat",
			"ls_armor_bluefor\helmet\gar\arf\data\visor.rvmat"
		};
		subItems[] = {};
	};
	/*
	class 87th_ATRT_Helmet: 3as_ATRT_Helmet
	{
		author = "Stim";
		displayname = "[87th] ATRT Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_ATRT_Helmet_co.paa) };
	};
	*/
	class 87th_BARC_Helmet: JLTS_CloneHelmetBARC
	{
		author = "Stim";
		displayname = "[87th] BARC Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_BARC_Helmet_co.paa) };
	};
	class 87th_Airborne_Helmet: JLTS_CloneHelmetAB
	{
		author = "Stim";
		displayname = "[87th] Airborne Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_Airborne_Helmet_co.paa) };
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
	class 87th_P1_Trooper_Helmet: 3as_P1_Base
	{
		author = "Stim";
		displayname = "[87th] Phase 1 Trooper Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\ct\87th_P1_Trooper_Helmet_co.paa) };
		subItems[] = {};
	};
	class 87th_P1_Pilot_Helmet: 3as_P1_Pilot_helmet
	{
		displayName = "[87th] Phase 1 Pilot Helmet";
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\87th_P1_Pilot_Helmet_co.paa) };
	};
	class 87th_Katarn_Helmet: 3AS_Katarn_Helmet_Base
	{
		scope = 2;
		author = "Stim";
		displayname = "[87th] Katarn Helmet";
		hiddenSelectionsTextures[]= 
		{
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa),
			QPATHTOF(data\helmets\87th_Katarn_Helmet_co.paa)
		};
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

	class 87th_Medic_Vest: JLTS_CloneVestAirborne
	{
		author = "Stim";
		displayname = "[87th] Medic Accessories";
		hiddenSelectionsTextures[] = { "", QPATHTOF(data\vests\87th_Medic_Vest_co.paa) };
	};

	class 87th_Lieutenant_Accessories: JLTS_CloneVestLieutenant
	{
		author = "Stim";
		displayname = "[87th] Lieutenant Accessories";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
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
	class 87th_Kama: JLTS_CloneVestKama
	{
		author = "Stim";
		displayname = "[87th] Kama";
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\87th_Officer_Attachments_co.paa) };
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