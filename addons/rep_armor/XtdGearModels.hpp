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

		class 87th_P2_Helmet
		{
			label = "[87th] Trooper Helmet";
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
				values[] = {"None", "Stim", "Raven", "Stryder", "Alcatraz", "Cat", "Noggy"};
				alwaysSelectable = 0;
				BANNER_GENERIC(None)
				BANNER_GENERIC(Stim)
				BANNER_GENERIC(Raven)
				BANNER_GENERIC(Stryder)
				BANNER_GENERIC(Alcatraz)
				BANNER_GENERIC(Cat)
				BANNER_GENERIC(Noggy)
			};
		};

		class 87th_ARF_Helmet
		{
			label = "[87th] ARF Helmet";
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

		class 87th_ARF_Uniform
		{
			label = "[87th] ARF Armor";
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

		class 87th_BARC_Helmet
		{
			label = "[87th] BARC Helmet";
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