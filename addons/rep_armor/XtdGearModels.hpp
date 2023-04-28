class XtdGearModels
{
	class CfgWeapons 
	{
		class 87th_ARF_Helmet
		{
			label = "[87th] ARF Helmet";
			author = "Anorexican";
			options[] = {"variant", "mandible", "camo"};
			class variant
			{
				label = "Variant";
				values[] = {"Trooper", "Tasty"};
				alwaysSelectable = 1;
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
				};
				class Attached
				{
					actionLabel = "Attach Mandible";
				};
			};
			class camo
			{
				label = "Camo";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
			};
		};

		class 87th_ARF_Uniform
		{
			label = "[87th] ARF Armor";
			author = "Anorexican";
			options[] = {"variant", "camo"};
			class variant
			{
				label = "Variant";
				values[] = {"Trooper"};
				alwaysSelectable = 1;
			};
			class camo
			{
				label = "Camo";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
			};
		};

		class 87th_BARC_Helmet
		{
			label = "[87th] BARC Helmet";
			author = "Anorexican";
			options[] = {"variant", "camo"};
			class variant
			{
				label = "Variant";
				values[] = {"Trooper"};
				alwaysSelectable = 1;
			};
			class camo
			{
				label = "Camo";
				values[] = {"None", "Winter", "Desert", "Sarid", "Woodland", "Urban"};
				alwaysSelectable = 1;
			};
		};
	};
};