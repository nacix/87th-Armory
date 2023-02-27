class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher {};
	class MissileLauncher;
	
	class 87th_RPS6X: Launcher_Base_F 
	{
		class Single: Mode_SemiAuto 
		{
			sounds[] = {"StandardSound"};
			class StandardSound 
			{
				soundSetShot[]= 
				{
					"jsrs_rpg7v_shot_soundset",
					"jsrs_warhead_reverb_soundset"
				};
			};
		};
	};
};