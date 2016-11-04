#include "..\..\script_macros.hpp"
/*
	File: fn_apFinish.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Finishes the DP Mission and calculates the money earned based
	on distance between A->B
*/
private["_ap","_dis","_price"];
_ap = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
life_delivery_in_progress = false;
life_ap_point = nil;
_dis = round((getPos life_ap_start) distance (getPos _ap));
_price = round(0.50 * _dis);
[false,"luftbrief",10] call life_fnc_handleInv;

["DeliverySucceeded",[format[(localize "STR_NOTF_Earned_1"),[_price] call life_fnc_numberText]]] call bis_fnc_showNotification;
life_cur_task setTaskState "Succeeded";
player removeSimpleTask life_cur_task;
ADD(CASH,_price);