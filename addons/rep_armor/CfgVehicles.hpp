class CfgVehicles {
	class B_Soldier_F;
	class B_Kitbag_rgr;
	class 3AS_Katarn_Backpack_Base;

	class 87th_Backpack: B_Kitbag_rgr 
	{
		author = "Stim";
		scope = 2;
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName = "[87th] Trooper Backpack";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		maximumLoad = 200;
		hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\other\87th_Backpack_co.paa)};
	};
    class 87th_Medic_Backpack: 87th_Backpack 
	{
		displayName = "[87th] Medic Backpack";
		maximumLoad = 400;
        hiddenSelectionsTextures[] = {QPATHTOF(data\other\87th_Medic_Backpack_co.paa)};
	};
	class 87th_RTO_Backpack: 87th_Backpack 
	{
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName = "[87th] RTO Backpack";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
        hiddenSelectionsTextures[] = 
		{
        	QPATHTOF(data\other\RTO_Screen_co.paa),
        	QPATHTOF(data\other\87th_Backpack_co.paa)
        };
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
	};
	class 87th_Katarn_Backpack: 3AS_Katarn_Backpack_Base 
	{
		author = "Stim";
		scope = 2;
		displayName = "[87th] Katarn Backpack";
		hiddenSelectionsTextures[] = {QPATHTOF(data\other\87th_Katarn_Backpack_co.paa)};
	};
	class 87th_Clone_Base: B_Soldier_F 
	{
		author = "Anorexican";
		scope = 1;
		_generalMacro = "87th_Clone_Base";
		displayName = "CloneTrooperBase";
		side = 0;
		faction = "87th_Legion";
		uniformClass = "87th_Trooper_Uniform";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\uniforms\ct\87th_Chest_co.paa),
			QPATHTOF(data\uniforms\ct\87th_Legs_co.paa)
		};
	};
	class 87th_Commando_Base: B_Soldier_F 
	{
		author = "Anorexican";
		scope = 1;
		_generalMacro = "87th_Commando_Base";
		displayName = "CloneCommandoBase";
		side = 0;
		faction = "87th_Legion";
		uniformClass = "87th_Katarn_Armor";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[] =
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\uniforms\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
	};
};