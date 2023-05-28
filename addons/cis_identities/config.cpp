#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		author = "Anorexican";
		authors[] = {"Anorexican"};
		url = CSTRING(URL);
    };
};