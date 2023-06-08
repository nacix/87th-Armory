#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[]=
        {
            CLASS(Droid_B1_E5),
            CLASS(Droid_B1_E5C),
            CLASS(Droid_B1_Commander),
            CLASS(Droid_B1_Crew),
            CLASS(Droid_B1_NCO),
            CLASS(Droid_B1_Pilot),
            CLASS(Droid_B1_AA),
            CLASS(Droid_B1_AT),
            CLASS(Droid_B1_E5S),
            CLASS(Droid_B1_RD4),

            CLASS(Droid_B1_E5_Geo),
            CLASS(Droid_B1_E5C_Geo),
            CLASS(Droid_B1_Commander_Geo),
            CLASS(Droid_B1_Crew_Geo),
            CLASS(Droid_B1_NCO_Geo),
            CLASS(Droid_B1_Pilot_Geo),
            CLASS(Droid_B1_AA_Geo),
            CLASS(Droid_B1_AT_Geo),
            CLASS(Droid_B1_E5S_Geo),
            CLASS(Droid_B1_RD4_Geo),

            CLASS(Droid_B1_E5_Sim),
            CLASS(Droid_B1_E5C_Sim),
            CLASS(Droid_B1_Commander_Sim),
            CLASS(Droid_B1_Crew_Sim),
            CLASS(Droid_B1_NCO_Sim),
            CLASS(Droid_B1_Pilot_Sim),
            CLASS(Droid_B1_AA_Sim),
            CLASS(Droid_B1_AT_Sim),
            CLASS(Droid_B1_E5S_Sim),
            CLASS(Droid_B1_RD4_Sim),
            CLASS(Droid_BX_Sim),

            CLASS(Droid_X1_E5),
            CLASS(Droid_X1_E5C),
            CLASS(Droid_X1_E5S),
            CLASS(Droid_X1_RD4),
            CLASS(Droid_X1_SBB3),
            CLASS(Droid_X1_Z7),

            CLASS(Droid_B2),
            CLASS(Droid_B2_Scatter),
            CLASS(Droid_B2_Grenade),
            CLASS(Droid_B2_Salvo),
            
            CLASS(Droid_BX),
            CLASS(Droid_BX_SL),
            CLASS(Droid_BX_Diplomat),
            CLASS(Droid_BX_Merc)
        };
        weapons[] = {};
        requiredAddons[] = {"cba_main", "WBK_DifferentRobotics_1"};
		author = "Anorexican";
		authors[] = {"Anorexican"};
		url = CSTRING(URL);
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"