class CfgVehicles 
{
	class 3AS_ATRT;
	class 3as_LAAT_Mk2;
	class 87th_LAAT: 3as_LAAT_Mk2 
	{
		author="Anorexican";
		displayname="[87th] LAAT/I Mk.2";
		faction="87th_Legion";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_LAAT.jpg);
		editorSubcategory="87th_Vehicles";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\laat\87th_LAAT_Hull_co.paa),
			QPATHTOF(data\laat\87th_LAAT_Wings_co.paa),
			"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
			QPATHTOF(data\laat\87th_LAAT_Weapon_Details_co.paa),
			"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
		};
		crew="87th_Clone_Pilot";
		typicalcargo[] = {"87th_Clone_Pilot"};
	};
	class 87th_ATRT: 3AS_ATRT
	{
		author="Anorexican & 3AS";
		displayName="[87th] AT-RT";
		genericNames="87th_Names_ATRT";
		icon = "JLTS_iconManMarshalCMDR";
		// editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ATRT.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Vehicles";
		uniformClass="87th_ATRT_Uniform";
		nakedUniform="87th_ATRT_Uniform";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\atrt\87th_ATRT_co.paa)
		};
		weapons[]=
		{
			"87th_ATRT_Weapon"
		};
		magazines[]=
		{
			"3AS_9999Rnd_ATRT_Mag"
		};
		linkedItems[]=
		{
			"Integrated_NVG_TI_1_F",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch",
			"ItemRadio"
		};
		class EventHandlers {};
	};
};