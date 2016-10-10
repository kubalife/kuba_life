#include "..\..\script_macros.hpp"
/*
    File: fn_removeGagAction.sqf
    Author: lowheartrate
	Assistance by: Panda
	
    Description:
    Removes the gag from the player.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {};
if(_unit GVAR["gagged",false]) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

_unit SVAR["gagged",false,true];