#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
        author = CSTRING(AuxTeam);
		authors[] = {"Anorexican"};
		url = ECSTRING(main,URL);
    };
};

#include "CfgEventHandlers.hpp"