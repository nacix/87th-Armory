class XtdGearInfos
{
	class CfgWeapons
	{
		#define XTD_P2_HELMET(className,variantName,customName) \
			class TAG##_##className##_Helmet \
			{ \
				model = QUOTE(TAG##_P2_Helmet); \
				variant = QUOTE(variantName); \
				custom = QUOTE(customName); \
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

		XTD_P2_HELMET(Trooper, Trooper, None)
		XTD_P2_HELMET(Jet_Trooper, Jet, None)
		XTD_P2_HELMET(ARC, ARC, None)

		XTD_P2_HELMET(Alcatraz, Trooper, Alcatraz)
		XTD_P2_HELMET(Cat, Trooper, Cat)
		XTD_P2_HELMET(Noggy, Trooper, Noggy)
		XTD_P2_HELMET(Raven, Trooper, Raven)
		XTD_P2_HELMET(Stim, Trooper, Stim)
		XTD_P2_HELMET(Stryder, ARC, Stryder)

		XTD_ARF_HELMET(Trooper, Helmet)
		XTD_ARF_HELMET(Tasty, Helmet_Tasty)

		XTD_ARF_UNIFORM(Trooper, Uniform)

		XTD_BARC_HELMET(Trooper, Helmet)
	};
};