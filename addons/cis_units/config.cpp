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
            CLASS(Droid_B1_Geo_E5),
            CLASS(Droid_B1_Geo_Commander),
            CLASS(Droid_B1_NCO),
            CLASS(Droid_B1_Pilot),

            CLASS(Droid_X1_E5C),
            CLASS(Droid_X1_E5S),
            CLASS(Droid_X1_EPL2),
            CLASS(Droid_X1_SBB3),
            CLASS(Droid_X1_Z7),

            CLASS(Droid_B1_AA),
            CLASS(Droid_B1_AT),
            CLASS(Droid_B1_E5S),
            CLASS(Droid_B1_Training),

            CLASS(Droid_B2),
            CLASS(Droid_B2_Scatter),
            CLASS(Droid_B2_Grenade),
            CLASS(Droid_B2_Salvo),
            
            CLASS(Droid_BX),
            CLASS(Droid_BX_SL),
            CLASS(Droid_BX_Diplomat),
            CLASS(Droid_BX_Merc),
            CLASS(Droid_BX_Training)
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