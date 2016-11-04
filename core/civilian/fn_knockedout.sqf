#include "..\..\script_macros.hpp"
/*
	File: fn_knockedOut.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Starts and monitors the knocked out state.
*/
private "_obj";
params [
	["_target",objNull,[objNull]],
	["_who","",[""]]
];

if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(EQUAL(_who,"")) exitWith {};

titleText[format[localize "STR_Civ_KnockedOut",_who],"PLAIN"];
player playMoveNow "Incapacitated";

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

life_isknocked = true;
[] call SOCK_fnc_updateRequest;
player attachTo [_obj,[0,0,0]];
//player playMoveNow "ace_unconscious";
[player, true, 15] call ace_medical_fnc_setUnconscious;
[player, 0.8, "head", "punch"] call ace_medical_fnc_addDamageToUnit
sleep 15;
detach player;
deleteVehicle _obj;
life_isknocked = false;
player SVAR ["robbed",FALSE,TRUE];
