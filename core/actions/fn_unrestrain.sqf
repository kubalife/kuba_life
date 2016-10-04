#include "..\..\script_macros.hpp"
/*
	File: fn_unrestrain.sqf
	Author:

	Description:

*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if(isNull _unit OR !(_unit GVAR ["restrained",FALSE])) exitWith {}; //Error check?

_unit SVAR ["restrained",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["masked",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE];
_unit SVAR ["tf_unable_to_use_radio", false]; // Funkgerät freischalten
detach _unit;

[0,"STR_NOTF_Unrestrain",true,[_unit GVAR ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
