#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = CSTRING(AuxTeam);
		authors[] = {"Anorexican"};
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"lsd_identities",
			"CIV_woman_voice"
        };
        units[] = {};
		weapons[] = {};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgVoice.hpp"
#include "CfgFaces.hpp"
#include "CfgIdentities.hpp"