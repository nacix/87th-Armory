class CfgWeapons 
{
	class 3AS_ATRT_Uniform;
	NEW_CLASS(ATRT_Uniform): 3AS_ATRT_Uniform
	{
		author="Anorexican";
		displayName="AT-RT Uniform";
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
		class ItemInfo
		{
			uniformClass = CLASS(ATRT);
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\TAG_CLASS(ATRT)_co.paa)
		};
	};
};