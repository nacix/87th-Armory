class CfgVehicles
{
	#define DISABLE_BREATH_SOUNDS \
		class SoundBreath \
		{ \
			breath[] = {}; \
		}; \
		class SoundDrown \
		{ \
			breath[] = {}; \
		}; \
		class SoundInjured \
		{ \
			breath[] = {}; \
		}; \
		class SoundBleeding \
		{ \
			breath[] = {}; \
		}; \
		class SoundBurning \
		{ \
			breath[] = {}; \
		}; \
		class SoundChoke \
		{ \
			breath[] = {}; \
		}; \
		class SoundRecovered \
		{ \
			breath[] = {}; \
		};

    class JLTS_Droid_B1_E5;
    class lsd_cis_b2_standard;
	class lsd_cis_bxdroid_specops;

    NEW_CLASS(Droid_B1_E5): JLTS_Droid_B1_E5
    {
        displayName = TAG_NAME(B1 Battle Droid (E-5));
        _generalMacro = CLASS(Droid_B1_E5);
		editorPreview = "";

		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		
		class SoundEnvironExt {
			generic[] = {
             {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
             {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {	
		    soldier[] = {
             {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
             {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
		};
		DISABLE_BREATH_SOUNDS
    };
	NEW_CLASS(Droid_B1_Commander): TAG_CLASS(Droid_B1_E5)
	{

	};
	NEW_CLASS(Droid_B1_Crew): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Geo_E5): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Geo_Commander): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Marine): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Pilot): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Proto): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Rocket): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Security): TAG_CLASS(Droid_B1_E5)
	{
		
	};
	NEW_CLASS(Droid_B1_Training): TAG_CLASS(Droid_B1_E5)
	{
		
	};

    NEW_CLASS(Droid_B2): lsd_cis_b2_standard
    {
        displayName = TAG_NAME(B2 Super Battle Droid);
        uniformClass = "lsd_cis_b2Droid_uniform";
        backpack = "";
        weapons[] = {"WBK_B2_NormalMod","Throw","Put"};
        magazines[] = {"SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag"};
        items[] = {};
        linkedItems[] = {"ls_cis_bxCommando_vest","ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid"};
		faction = "WBK_AI_StarWars_Droids";
		_generalMacro = "WBK_AI_StarWars_Droids";
		displayName = "B2 Super Battle Droid (Normal Mod.)";	
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {		
			generic[] = {
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
			};
		};
		class SoundEquipment {	
		    soldier[] = {
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}},
			 {"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}},
             {"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}
            };
		};
		DISABLE_BREATH_SOUNDS
    };
	NEW_CLASS(Droid_B2_Shotgun): TAG_CLASS(Droid_B2)
	{
		
	};
	NEW_CLASS(Droid_B2_Rocket): TAG_CLASS(Droid_B2)
	{
		
	};

	NEW_CLASS(Droid_BX): lsd_cis_bxdroid_specops
	{
		displayName = TAG_NAME(BX-Series Commando Droid);
		uniformClass = "lsd_cis_bxDroid_uniform";
		backpack = "";
		weapons[] = {"SWLW_E5","WBK_Dutch_Vibro","Throw","Put"};
		magazines[] = {"SWLW_E5_Mag","WBK_Cybercrystal","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","SWLW_E5_Mag","ACE_CTS9"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ls_cis_bxCommando_vest","ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_mandalorian_rangefinder_nvg"};
		faction = "WBK_AI_StarWars_Droids";
		_generalMacro = "WBK_AI_StarWars_Droids";
		displayName = "BX Droid Commando";	
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		canBleed = 0;
		class SoundEnvironExt {		
			generic[] = {
             {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
             {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
			};
		};
		class SoundEquipment {	
		    soldier[] = {
             {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, 
             {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
             {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
			 {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, 
             {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
             {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
			 {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, 
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
             {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
			 {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
		};
		DISABLE_BREATH_SOUNDS
	};
	NEW_CLASS(Droid_BX_Lead): TAG_CLASS(Droid_BX)
	{
		
	};
	NEW_CLASS(Droid_BX_Diplomat): TAG_CLASS(Droid_BX)
	{
		
	};
	NEW_CLASS(Droid_BX_PMC): TAG_CLASS(Droid_BX)
	{
		
	};
	NEW_CLASS(Droid_BX_Training): TAG_CLASS(Droid_BX)
	{
		
	};
};