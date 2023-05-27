class XtdGearModels
{
	class CfgWeapons 
	{
		#define BANNER_GENERIC(value) \
			class value \
			{ \
				image = QPATHTOF(data\ui\xtd_banner.paa); \
			};
		#define BANNER_CAMO(camoType) \
			class camoType \
			{ \
				image = QPATHTOF(data\ui\xtd_camo_##camoType##); \
			};
		#define CAMO_BANNERS \
			BANNER_GENERIC(None) \
			BANNER_CAMO(Winter) \
			BANNER_CAMO(Desert) \
			BANNER_CAMO(Sarid) \
			BANNER_CAMO(Woodland) \
			BANNER_CAMO(Urban)

		NEW_CLASS(P2_Helmet)
		{
			label = TAG_NAME(P2 Helmet);
			author = "Anorexican";
			options[] = {"variant", "custom"};
			class variant
			{
				label = "Variants";
				values[] = {"Trooper", "ARC", "Jet"};
				alwaysSelectable = 1;
				BANNER_GENERIC(Trooper)
				BANNER_GENERIC(ARC)
				BANNER_GENERIC(Jet)
			};
			class custom
			{
				label = "Customs";
				values[] = {"None", "Stim", "Raven", "Stryder", "Cat", "Noggy", "Byte", "Domino", "Officer"};
				alwaysSelectable = 1;
				BANNER_GENERIC(None)
				BANNER_GENERIC(Stim)
				BANNER_GENERIC(Raven)
				BANNER_GENERIC(Stryder)
				BANNER_GENERIC(Cat)
				BANNER_GENERIC(Noggy)
				BANNER_GENERIC(Byte)
				BANNER_GENERIC(Domino)
				BANNER_GENERIC(Officer)
			};
		};

		NEW_CLASS(P2_Pilot_Helmet)
		{
			label = TAG_NAME(Pilot Helmet);
			author = "Anorexican";
			options[] = {"variant", "custom"};
			class variant
			{
				label = "Variants";
				values[] = {"P2", "P1"};
				alwaysSelectable = 1;
				class P2
				{
					label = "Phase II";
					image = QPATHTOF(data\ui\xtd_banner.paa);
				};
				class P1
				{
					label = "Phase I";
					image = QPATHTOF(data\ui\xtd_banner.paa);
				};
			};
			class custom
			{
				label = "Customs";
				values[] = {"None", "Stim"};
				alwaysSelectable = 1;
				BANNER_GENERIC(None)
				BANNER_GENERIC(Stim)
			};
		};

		NEW_CLASS(ARF_Helmet)
		{
			label = TAG_NAME(ARF Helmet);
			author = "Anorexican";
			options[] = {"variant", "mandible", "camo"};
			class variant
			{
				label = "Variants";
				values[] = {"Trooper", "Tasty"};
				alwaysSelectable = 1;
				BANNER_GENERIC(Trooper)
				BANNER_GENERIC(Tasty)
			};
			class mandible
			{
				label = "Mandible";
				values[] = {"None", "Attached"};
				changeInGame = 1;
				alwaysSelectable = 1;
				changeDelay = 5;
				class None
				{
					actionLabel = "Detach Mandible";
					image = QPATHTOF(data\ui\xtd_banner.paa);
				};
				class Attached
				{
					actionLabel = "Attach Mandible";
					image = QPATHTOF(data\ui\xtd_banner.paa);
				};
			};
			class camo
			{
				label = "Camouflage";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
				CAMO_BANNERS
			};
		};

		NEW_CLASS(ARF_Uniform)
		{
			label = TAG_NAME(ARF Armor);
			author = "Anorexican";
			options[] = {"variant", "camo"};
			class variant
			{
				label = "Variants";
				values[] = {"Trooper"};
				alwaysSelectable = 1;
				BANNER_GENERIC(Trooper)
			};
			class camo
			{
				label = "Camouflage";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
				CAMO_BANNERS
			};
		};

		NEW_CLASS(BARC_Helmet)
		{
			label = TAG_NAME(BARC Helmet);
			author = "Anorexican";
			options[] = {"variant", "camo"};
			class variant
			{
				label = "Variants";
				values[] = {"Trooper"};
				alwaysSelectable = 1;
				BANNER_GENERIC(Trooper)
			};
			class camo
			{
				label = "Camouflage";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
				CAMO_BANNERS
			};
		};
	};
};