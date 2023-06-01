class CfgVehicles
{
    class JLTS_Droid_B1_E5;
    class lsd_cis_b2_standard;

    NEW_CLASS(Droid_B1_E5): JLTS_Droid_B1_E5
    {
        displayName = TAG_NAME(B1 Battle Droid (E-5));
        _generalMacro = CLASS(Droid_B1_E5);
        editorPreview = "";
        faction = "WBK_AI_StarWars_Droids";
		displayName = "B1 Battle droid";
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
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
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
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
    };
};