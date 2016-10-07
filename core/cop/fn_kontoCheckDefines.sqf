/*

	File: fn_kontoCheckDefines.sqf
	Author: Michael Moskau
	Server: Kuba-Life.de

	Description:
	Setzt Kontostand etc der Person.
*/

params[
	"_target",
	["_caller",ObjNull,[ObjNull]]
];

if(isNil "_caller") exitWith {};
if(isNil "_target") exitWith {};
if(isNull _caller) exitWith {};
if(!alive _caller) exitWith {};

_bankRaw = life_atmbank;
_nameT = name _target;
_bank = [_bankRaw] call life_fnc_numberText;

[_bank,_nameT] remoteExec ["life_fnc_kontoCheckFeedback",_caller];