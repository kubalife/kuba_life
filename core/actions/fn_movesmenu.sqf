#include "..\..\script_macros.hpp"

/*
	File: fn_movesMenu.sqf
	Author: Jack "Scarso" Farhall
*/

private["_display","_list","_moves"];
disableSerialization;
player playMoveNow "";

_moves = [
    ["Kung Fu","AmovPercMstpSnonWnonDnon_exerciseKata"],
	["Push Ups","AmovPercMstpSnonWnonDnon_exercisePushup"],
	["Knee Bends (Fast)","AmovPercMstpSnonWnonDnon_exercisekneeBendB"],
	["Knee Bends (Normal)","AmovPercMstpSnonWnonDnon_exercisekneeBendA"],
	["Scared","AmovPercMstpSnonWnonDnon_Scared"],
	["Take a Piss","Acts_AidlPercMstpSlowWrflDnon_pissing"],
	["Drunk Walk","AcinPercMstpSnonWnonDnon_agony"],
	["Pew","Acts_starterPistol_out"],
	["Reifen Reparieren","Acts_carFixingWheel"],
	["Crazy Dance","A3L_Crazy_Dance"],
	["Crazy drunk Dance","cl3_crazydrunkdance"],
	["Dubstep Dance","cl3_dubstepdance"],
	["Dubstep Pop Dance","cl3_dubstepPop"],
	["Duolvan","cl3_Duolvan"],
	["Stephan","cl3_Stephan"],
	["Duo Stephan","cl3_DuoStephan"],
	["Hiphop Dance","cl3_hiphopdance"],
	["Nightclub Dance","cl3_nightclubdance"],
	["Robot Dance","cl3_robotdance"],
	["Russian Dance","cl3_russiandance"]
	];

waitUntil {!isNull (findDisplay 2900)};
_display = findDisplay 2900;
_list = _display displayCtrl 2902;
lbClear _list;

{

	_list lbAdd format["%1", _x select 0];
	_list lbSetdata [(lbSize _list)-1,str(_x select 1)];
} foreach _moves;
//ommsen