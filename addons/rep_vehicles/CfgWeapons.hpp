class CfgWeapons 
{
	class 3AS_ATRT_Uniform;
	class 87th_ATRT_Uniform: 3AS_ATRT_Uniform
	{
		author="Anorexican";
		displayName="AT-RT Uniform";
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
		class ItemInfo
		{
			uniformClass="87th_ATRT";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\87th_ATRT_co.paa)
		};
	};
};