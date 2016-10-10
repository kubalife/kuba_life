#include "..\..\script_macros.hpp"
/*
	File: fn_maskAction.sqf
	Author: Larry aka. Tim
*/
private["_unit", "_state"];
params [
	["_unit",objNull,[objNull]]
];
_state = animationState _unit;
if(isNull _unit) exitWith {}; // Not Valid
if(life_inv_blindfold < 1) exitWith {hint "Du hast keinen Sack!";};
if(player distance _unit > 3) exitWith {hint "Die Person ist zu weit entfernt";};
//if((_unit GVAR["masked",true])) exitWith {hint "Die Person hat schon einen Sack überm Kopf";};
//if(playerSide == west) exitWith {hint "Du bist ein Polizist. Lass das!";};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};


if((_state == "ACE_AmovPercMstpSsurWnonDnon") || (_state == "ACE_AmovPercMstpScapWnonDnon")) then {
_unit SVAR["masked",true,true];
[player] remoteExecCall ["life_fnc_masked",_unit];
hint "Du hast dem Spieler einen Sack über den Kopf gestülpt!";

}else{
exitWith {hint "Die Person muss gefesselt sein oder sich ergeben!"};
};
