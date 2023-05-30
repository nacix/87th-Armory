class CfgVehicles
{
    class JLTS_Droid_B1_E5;

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
};