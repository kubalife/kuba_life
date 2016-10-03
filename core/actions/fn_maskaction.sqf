/*
	File: fn_maskAction.sqf
	Author: Larry aka. Tim
*/
private["_unit"];
params [
	["_unit",objNull,[objNull]]
];

_unit setVariable["masked",true,true];
[player] remoteExecCall ["life_fnc_masked",_unit];
hint "Blindfold has been applied, the player cannot see.";
