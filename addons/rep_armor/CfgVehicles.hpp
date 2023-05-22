class CfgVehicles {
	#define SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,mult) \
		armor = QUOTE(baseArmor*mult); \
		passThrough = QUOTE(pass); \
		explosionShielding = QUOTE(blastProc*mult); \
		minimalHit = QUOTE(minHit); \
		material=-1;

	#define SET_ARMOR_HEAD(baseArmor,pass,blastProc,minHit,headMult) \
		class HitFace \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name="face_hub"; \
			radius=0.08; \
		}; \
		class HitNeck: HitFace \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name="neck"; \
			radius=0.1; \
		}; \
		class HitHead: HitNeck \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name="head"; \
			radius=0.2; \
			depends="HitFace max HitNeck"; \
		};

	#define SET_ARMOR_TORSO(baseArmor,pass,blastProc,minHit) \
		class HitPelvis \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name="pelvis"; \
			radius=0.24; \
			visual="injury_body"; \
		}; \
		class HitAbdomen: HitPelvis \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name="spine1"; \
			radius=0.16; \
		}; \
		class HitDiaphragm: HitAbdomen \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name="spine2"; \
			radius=0.18; \
		}; \
		class HitChest: HitDiaphragm \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name="spine3"; \
			radius=0.18; \
		}; \
		class HitBody: HitChest \
		{ \
			armor=1000; \
			material=-1; \
			name="body"; \
			passThrough=1; \
			radius=0; \
			explosionShielding=6; \
			minimalHit=0.01; \
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
		};

	#define SET_ARMOR_LIMBS(baseArmor,pass,blastProc,minHit,limbMult) \
		class HitArms \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name="arms"; \
			radius=0.1; \
			visual="injury_hands"; \
		}; \
		class HitHands: HitArms \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name="hands"; \
			radius=0.1; \
			visual="injury_hands"; \
			depends="HitArms"; \
		}; \
		class HitLegs \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name="legs"; \
			radius=0.14; \
			visual="injury_legs"; \
		}; \
		class Incapacitated: HitLegs \
		{ \
			armor=1000; \
			material=-1; \
			name="body"; \
			passThrough=1; \
			radius=0; \
			explosionShielding=3; \
			visual=""; \
			minimalHit=0; \
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
		}; \
		class HitLeftArm \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name="hand_l"; \
			radius=0.08; \
			visual="injury_hands"; \
		}; \
		class HitRightArm: HitLeftArm \
		{ \
			name="hand_r"; \
		}; \
		class HitLeftLeg \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name="leg_l"; \
			radius=0.1; \
			visual="injury_legs"; \
		}; \
		class HitRightLeg: HitLeftLeg \
		{ \
			name="leg_r"; \
		};

	#define SET_ARMOR(baseArmor,pass,blastProc,minHit,headMult,limbMult) \
		class HitPoints: HitPoints \
		{ \
			SET_ARMOR_HEAD(baseArmor,1,blastProc,minHit,headMult) \
			SET_ARMOR_TORSO(baseArmor,pass,blastProc,minHit) \
			SET_ARMOR_LIMBS(baseArmor,1,blastProc,minHit,limbMult) \
		};

	class B_Soldier_Base_F;
	class B_Soldier_F: B_Soldier_Base_F
	{
		class HitPoints;
	};
	class B_Kitbag_rgr;
	class 3AS_Katarn_Backpack_Base;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack;

	class 87th_Backpack: JLTS_Clone_backpack 
	{
		author = "Stim";
		displayName = "[87th] Trooper Backpack";
		maximumLoad = 200;
        hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_Backpack_co.paa) };
	};
    class 87th_Medic_Backpack: 87th_Backpack 
	{
		displayName = "[87th] Medic Backpack";
		maximumLoad = 450;
        hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_Medic_Backpack_co.paa) };
	};

	class 87th_Belt_Bag: JLTS_Clone_belt_bag
	{
		author = "Anorexican";
		displayName = "[87th] Belt Bag";
		maximumLoad = 250;
	};
	class 87th_Belt_Bag_Medic: 87th_Belt_Bag
	{
		author = "Anorexican";
		displayName = "[87th] Belt Bag (Medic)";
		maximumLoad = 450;
		hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_Belt_Bag_Medic_co.paa) };
	};

	class 87th_EOD_Backpack: 87th_Backpack 
	{
		displayName = "[87th] EOD Backpack";
		maximumLoad = 425;
        hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_EOD_Backpack_co.paa) };
	};

	class 87th_RTO_Backpack: 87th_Backpack
	{
		displayName = "[87th] RTO Backpack";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
        hiddenSelectionsTextures[]= 
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
	class 87th_RTO_Backpack_Mini: 87th_Backpack
	{
		displayName = "[87th] Mini RTO Pack";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_RTO_pack_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]= 
		{
        	QPATHTOF(data\other\87th_Mini_RTO_co.paa)
        };
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
	};
	class 87th_RTO_Backpack_Recon: 87th_Backpack
	{
		displayName = "[87th] Recon RTO Pack";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_RTO_pack_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[]= 
		{
        	QPATHTOF(data\other\87th_Recon_RTO_co.paa)
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
		hiddenSelectionsTextures[] = { QPATHTOF(data\other\87th_Katarn_Backpack_co.paa) };
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
		armor = 2;
		armorStructural=4;
		explosionShielding = 0.40;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\ct\87th_Chest_co.paa),
			QPATHTOF(data\uniforms\ct\87th_Legs_co.paa)
		};
		SET_ARMOR(11.5,0.8,7.25,0.01,0.25,0.4)
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class 87th_Clone_P1_Base: 87th_Clone_Base
	{
		displayName = "CloneMedicBase";
		uniformClass = "87th_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\ct\87th_P1_Chest_co.paa),
			QPATHTOF(data\uniforms\ct\87th_P1_Legs_co.paa)
		};
	};
	class 87th_Medic_Base: 87th_Clone_Base 
	{
		displayName = "CloneMedicBase";
		uniformClass = "87th_Medic_Uniform";
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\uniforms\ct\87th_Medic_Chest_co.paa),
			QPATHTOF(data\uniforms\ct\87th_Legs_co.paa)
		};
	};

	class 87th_ARF_Base: 87th_Clone_Base
	{
		displayName = "ARFBase";
		uniformClass = "87th_ARF_Uniform";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_co.paa)
		};
	};
	class 87th_ARF_Base_Desert: 87th_Clone_Base
	{
		displayName = "ARFBaseDesert";
		uniformClass = "87th_ARF_Uniform_Desert";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_Desert_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_Desert_co.paa)
		};
	};
	class 87th_ARF_Base_Sarid: 87th_Clone_Base
	{
		displayName = "ARFBaseSarid";
		uniformClass = "87th_ARF_Uniform_Sarid";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_Sarid_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_Sarid_co.paa)
		};
	};
	class 87th_ARF_Base_Woodland: 87th_Clone_Base
	{
		displayName = "ARFBaseWoodland";
		uniformClass = "87th_ARF_Uniform_Woodland";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_Woodland_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_Woodland_co.paa)
		};
	};
	class 87th_ARF_Base_Winter: 87th_Clone_Base
	{
		displayName = "ARFBaseWinter";
		uniformClass = "87th_ARF_Uniform_Winter";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_Winter_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_Winter_co.paa)
		};
	};
	class 87th_ARF_Base_Urban: 87th_Clone_Base
	{
		displayName = "ARFBaseUrban";
		uniformClass = "87th_ARF_Uniform_Urban";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\arf\87th_ARF_Chest_Urban_co.paa),
			QPATHTOF(data\uniforms\arf\87th_ARF_Legs_Urban_co.paa)
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
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\87th_Katarn_Armor_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
		SET_ARMOR(13.481,0.8,9,0.01,0.35,0.25)
	};
};