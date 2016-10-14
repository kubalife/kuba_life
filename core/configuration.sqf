#include "..\script_macros.hpp"
/*
	File: configuration.sqf
	Author:

	Description:
	Master Life Configuration File
	This file is to setup variables for the client, there are still other configuration files in the system

*****************************
****** Backend Variables *****
*****************************
*/
_medics = (independent countSide playableUnits);

life_wanted =false;
life_query_time = time;
life_action_delay = time;
life_trunk_vehicle = Objnull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_drink = 0;
life_net_dropped = false;
life_siren_active = false;
life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
life_spikestrip = ObjNull;
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
tawvd_addon_disable = true;
life_god = false;
life_frozen = false;
life_save_gear = [];
life_container_activeObj = ObjNull;
life_disable_getIn = false;
life_disable_getOut = false;
life_admin_debug = false;
life_preview_3D_vehicle_cam = objNull;
life_preview_3D_vehicle_object = objNull;
life_preview_light = objNull;
life_pos_exist = false;
life_pos_attach = [];
life_civ_position = [];
life_markers = false;
safezone = false;
life_callBackup = true;
life_nlrtimer_running = false;
life_nlrtimer_stop = false;
life_bloodActionPlaying = false;
life_isSuicide = false;
masked = false;
life_request_timer = false;
gagged = false;


if(_medics > 0) then { //-- Medic anwesend
    life_respawn_timer = 8; //Scaled in minutes
} else { //-- Kein Medic anwesend
    life_respawn_timer = 3;
};
/*
CHVD_allowNoGrass = false;
CHVD_maxView = 4000;
CHVD_maxObj = 4000;
*/
//Settings
life_settings_enableSidechannel = GVAR_PNAS["life_enableSidechannel",true];
life_settings_tagson = GVAR_PNAS["life_settings_tagson",true];
life_settings_revealObjects = GVAR_PNAS["life_settings_revealObjects",false];
life_settings_viewDistanceFoot = GVAR_PNAS["life_viewDistanceFoot",1000];
life_settings_viewDistanceCar = GVAR_PNAS["life_viewDistanceCar",1000];
life_settings_viewDistanceAir = GVAR_PNAS["life_viewDistanceAir",1000];

//Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
life_clothing_purchase = [-1,-1,-1,-1,-1];
/*
*****************************
****** Weight Variables *****
*****************************
*/
life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWTTP");
life_carryWeight = 0; //Represents the players current inventory weight (MUST START AT 0).

/*
*****************************
****** Life Variables *******
*****************************
*/
life_net_dropped = false;
life_use_atm = true;
life_is_arrested = false;
life_is_alive = false;
life_delivery_in_progress = false;
life_thirst = 100;
life_hunger = 100;
life_drug = 0;
CASH = 0;

life_istazed = false;
life_isknocked = false;
life_seatbelt = false;
life_vehicles = [];

life_skydive = false;

/*
	Master Array of items?
*/
//Setup variable inv vars.
{
	SVAR_MNS [ITEM_VARNAME(configName _x),0];
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

/* Setup the BLAH! */
{
	_varName = getText(_x >> "variable");
	_sideFlag = getText(_x >> "side");

	SVAR_MNS [LICENSE_VARNAME(_varName,_sideFlag),false];
} forEach ("true" configClasses (missionConfigFile >> "Licenses"));
