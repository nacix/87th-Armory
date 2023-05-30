#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[]=
        {
            CLASS(87th_Droid_B1_E5)
        };
        weapons[] = {};
        requiredAddons[] = {"cba_main", "WBK_DifferentRobotics_1"};
		author = "Anorexican";
		authors[] = {"Anorexican"};
		url = CSTRING(URL);
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"