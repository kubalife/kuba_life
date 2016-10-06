/*

	File: fn_kontoCheck.sqf
	Author: Michael Moskau
	Server: Kuba-Life.de

	Description:
	Überprüfen der Parameter.
*/

private["_unit"];

if(playerSide in [civilian,independent,east]) exitWith {};

_unit = lbData [2406,lbCurSel 2406];
_unit = call compile format["%1",_unit];

if(isNil "_unit") exitWith { };
if(isNull _unit) exitWith { };


[_unit,player] remoteExec ["life_fnc_kontoCheckDefines",_unit];