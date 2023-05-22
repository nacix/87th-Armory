class XtdGearInfos
{
	class CfgWeapons
	{
		// Basic ARF Helmet Variants
		class 87th_ARF_Helmet
		{
			model = "87th_ARF_Helmet";
			variant = "Trooper";
			mandible = "None";
			camo = "None";
		};
		#define XTD_ARF_HELMET_CAMO(className,variantName,camoType) \
			class TAG##_ARF_##className##_##camoType \
			{ \
				model = QUOTE(TAG##_ARF_Helmet); \
				variant = QUOTE(variantName); \
				mandible = "None"; \
				camo = QUOTE(camoType); \
			}; \
			class TAG##_ARF_##className##_##camoType##_P2 \
			{ \
				model = QUOTE(TAG##_ARF_Helmet); \
				variant = QUOTE(variantName); \
				mandible = "Attached"; \
				camo = QUOTE(camoType); \
		};
		#define XTD_ARF_HELMET(variantName,className) \
			class TAG##_ARF_##className \
			{ \
				model = QUOTE(TAG##_ARF_Helmet); \
				variant = QUOTE(variantName); \
				mandible = "None"; \
				camo = "None"; \
			}; \
			class TAG##_ARF_##className##_P2 \
			{ \
				model = QUOTE(TAG##_ARF_Helmet); \
				variant = QUOTE(variantName); \
				mandible = "Attached"; \
				camo = "None"; \
			}; \
			XTD_ARF_HELMET_CAMO(className, variantName, Desert) \
			XTD_ARF_HELMET_CAMO(className, variantName, Sarid) \
			XTD_ARF_HELMET_CAMO(className, variantName, Woodland) \
			XTD_ARF_HELMET_CAMO(className, variantName, Winter) \
			XTD_ARF_HELMET_CAMO(className, variantName, Urban)

		#define XTD_ARF_UNIFORM_CAMO(className,variantName,camoType) \
			class TAG##_ARF_##className##_##camoType \
			{ \
				model = QUOTE(TAG##_ARF_Uniform); \
				variant = QUOTE(variantName); \
				camo = QUOTE(camoType); \
		};
		#define XTD_ARF_UNIFORM(variantName,className) \
			class TAG##_ARF_##className \
			{ \
				model = QUOTE(TAG##_ARF_Uniform); \
				variant = QUOTE(variantName); \
				camo = "None"; \
			}; \
			XTD_ARF_UNIFORM_CAMO(className, variantName, Desert) \
			XTD_ARF_UNIFORM_CAMO(className, variantName, Sarid) \
			XTD_ARF_UNIFORM_CAMO(className, variantName, Woodland) \
			XTD_ARF_UNIFORM_CAMO(className, variantName, Winter) \
			XTD_ARF_UNIFORM_CAMO(className, variantName, Urban)

		#define XTD_BARC_HELMET_CAMO(className,variantName,camoType) \
			class TAG##_BARC_##className##_##camoType \
			{ \
				model = QUOTE(TAG##_BARC_Helmet); \
				variant = QUOTE(variantName); \
				camo = QUOTE(camoType); \
		};
		#define XTD_BARC_HELMET(variantName,className) \
			class TAG##_BARC_##className \
			{ \
				model = QUOTE(TAG##_BARC_Helmet); \
				variant = QUOTE(variantName); \
				camo = "None"; \
			}; \
			XTD_BARC_HELMET_CAMO(className, variantName, Desert) \
			XTD_BARC_HELMET_CAMO(className, variantName, Sarid) \
			XTD_BARC_HELMET_CAMO(className, variantName, Woodland) \
			XTD_BARC_HELMET_CAMO(className, variantName, Winter) \
			XTD_BARC_HELMET_CAMO(className, variantName, Urban)

		// Basic ARF Helmet Variants (Tasty)
		class 87th_ARF_Helmet_Tasty
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "None";
		};
		class 87th_ARF_Helmet_Tasty_Desert
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "Desert";
		};
		class 87th_ARF_Helmet_Tasty_Sarid
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "Sarid";
		};
		class 87th_ARF_Helmet_Tasty_Woodland
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "Woodland";
		};
		class 87th_ARF_Helmet_Tasty_Winter
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "Winter";
		};
		class 87th_ARF_Helmet_Tasty_Urban
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "None";
			camo = "Urban";
		};

		// Mandibled ARF Helmet Variants (Tasty)
		class 87th_ARF_Helmet_Tasty_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "None";
		};
		class 87th_ARF_Helmet_Tasty_Desert_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "Desert";
		};
		class 87th_ARF_Helmet_Tasty_Sarid_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "Sarid";
		};
		class 87th_ARF_Helmet_Tasty_Woodland_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "Woodland";
		};
		class 87th_ARF_Helmet_Tasty_Winter_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "Winter";
		};
		class 87th_ARF_Helmet_Tasty_Urban_P2
		{
			model = "87th_ARF_Helmet";
			variant = "Tasty";
			mandible = "Attached";
			camo = "Urban";
		};

		// ARF Uniform Variants
		class 87th_ARF_Uniform
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "None";
		};
		class 87th_ARF_Uniform_Desert
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "Desert";
		};
		class 87th_ARF_Uniform_Sarid
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "Sarid";
		};
		class 87th_ARF_Uniform_Woodland
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "Woodland";
		};
		class 87th_ARF_Uniform_Winter
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "Winter";
		};
		class 87th_ARF_Uniform_Urban
		{
			model = "87th_ARF_Uniform";
			variant = "Trooper";
			camo = "Urban";
		};

		class 87th_BARC_Helmet
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "None";
		};
		class 87th_BARC_Helmet_Desert
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "Desert";
		};
		class 87th_BARC_Helmet_Sarid
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "Sarid";
		};
		class 87th_BARC_Helmet_Woodland
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "Woodland";
		};
		class 87th_BARC_Helmet_Winter
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "Winter";
		};
		class 87th_BARC_Helmet_Urban
		{
			model = "87th_BARC_Helmet";
			variant = "Trooper";
			camo = "Urban";
		};
	};
};