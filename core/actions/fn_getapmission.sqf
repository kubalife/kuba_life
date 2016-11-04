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