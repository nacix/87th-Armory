class CfgVehicles 
{
	class 3as_LAAT_Mk2;
	class 87th_LAAT: 3as_LAAT_Mk2 
	{
		displayname="[87th] LAAT/I Mk.2";
		faction="87th_Legion";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_LAAT.jpg);
		editorSubcategory="87th_Air";
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
};