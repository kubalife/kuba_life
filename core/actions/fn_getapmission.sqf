#include "..\..\script_macros.hpp"
/*
	File: fn_getAPMission.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Selects a random AP point for a air delivery mission.
	Needs to be revised.
*/
private["_ap","_target"];
_target = param [0,ObjNull,[ObjNull]];

_flugzeug = nearestObjects[player, [
    "sab_camel_pro",
    "sab_FAAllegro_4",
    "sab_FAAllegro",
    "sab_FAAllegro_3",
    "sab_FAAllegro_5",
    "sab_RobinDR400",
    "sab_RobinDR400_4",
    "sab_RobinDR400_2",
    "sab_RobinDR400_3",
    "sab_RobinDR400_5",
    "sab_piper5",
    "sab_piper4",
    "sab_piper2",
    "sab_piper",
    "sab_piper3",
    "uns_skymaster_civ_yellow",
    "uns_skymaster_civ_red",
    "uns_skymaster_civ_gold",
    "uns_skymaster_civ",
    "uns_skymaster_civ_blue",
    "IVORY_T6A_1",
    "GNT_C185",
    "GNT_C185F",
    "sab_curtissjn4_9",
    "sab_do228_3",
    "sab_do228_3_1",
    "sab_do228_3_2",
    "Sab_Sikorsky38_3",
    "Sab_Sikorsky38_2",
    "uns_c1a2cargo",
    "CUP_C_C47_CIV",
    "IVORY_ERJ135_1",
    "ivory_yak42d_1"
], 20];
if !(nearestObjects == _flugzeug) exitWith {
    hint "Wo ist dein Flugzeug? Parke es mindestens 20m zum Terminal.";
};

if(str(_target) in LIFE_SETTINGS(getArray,"air_points")) then {
	private "_point";
	_point = LIFE_SETTINGS(getArray,"air_points");
	_point deleteAt (_point find (str(_target)));
	_ap = _point call BIS_fnc_selectRandom;
} else {
	_ap = LIFE_SETTINGS(getArray,"air_points") call BIS_fnc_selectRandom;
};

life_ap_start = _target;

life_delivery_in_progress = true;
life_ap_point = call compile format["%1",_ap];

_ap = [_ap,"_"," "] call KRON_Replace;
life_cur_task = player createSimpleTask [format["Delivery_%1",life_ap_point]];
life_cur_task setSimpleTaskDescription [format[localize "STR_NOTF_DPStart",toUpper _ap],"Air Delivery Job",""];
life_cur_task setTaskState "Assigned";
player setCurrentTask life_cur_task;
[true,"luftbrief",10] call life_fnc_handleInv;

["DeliveryAssigned",[format[localize "STR_NOTF_DPTask",toUpper _ap]]] call bis_fnc_showNotification;

[] spawn {
	waitUntil {!life_delivery_in_progress OR !alive player};
	if(!alive player) then {
		life_cur_task setTaskState "Failed";
		player removeSimpleTask life_cur_task;
		["DeliveryFailed",[localize "STR_NOTF_DPFailed"]] call BIS_fnc_showNotification;
		life_delivery_in_progress = false;
		life_ap_point = nil;
	};
};