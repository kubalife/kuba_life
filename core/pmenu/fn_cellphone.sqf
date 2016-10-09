#include "..\..\script_macros.hpp"
/*
	File: fn_cellphone.sqf
	Author: Alan

	Description:
	Opens the cellphone menu?
*/
private["_display","_units","_type","_name","_lbNum"];
_name = [_this,0,"",[""]] call BIS_fnc_param;

disableSerialization;
waitUntil {!isNull findDisplay 3000};
_display = findDisplay 3000;
_units = _display displayCtrl 3004;

ctrlSetText [3003, ""];
lbClear _units;

if((FETCH_CONST(life_adminlevel) < 1)) then {
	ctrlShow[3020,false];
	ctrlShow[3021,false];
};
if((FETCH_CONST(life_coplevel) < 5) || playerSide != west) then { //5 kann durch einen beliebigen Rang ersetzt werden, ab dem es verfügbar sein soll
 ctrlShow[3023,false];
};
{
	if(alive _x) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "Med"};
			case east: {_type = "Adac"};
		};
		_units lbAdd format["%1 (%2)",_x GVAR ["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];

		if(_name != "") then
		{
			if(name _x isEqualTo _name) then
			{
				_lbNum = lbSize(_units);
			};
		};
	};
} forEach playableUnits;

if(_name == "") then
{
	lbSetCurSel [3004,0];
}
else
{
	lbSetCurSel [3004,_lbNum];
};