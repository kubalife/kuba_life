#include "..\..\..\script_macros.hpp"
/*
	File: fn_deletebericht.sqf
	Author: ohhnice
	
	Description:
	Ein Polizeicomputer. Geschrieben von ohhnice 
*/
private["_valueindex"];
_valueindex = lbValue[6012,(lbCurSel 6012)]; 

//if((FETCH_CONST(life_coplevel) < 3)) exitwith {};      mind. level zum löschen


if(life_HC_isActive) then {
	[_valueindex] remoteExec ["HC_fnc_deleteB",HC_Life];
} else {
	[_valueindex] remoteExec ["TON_fnc_deleteB",RSERV];
};


_strafliste = straftat GVAR [life_computergesucht,[]];

for "_i" from 0 to count _strafliste do
{
	if (_strafliste select _i select 0 == _valueindex) exitwith	
	{	
		_strafliste set [_i,objNull];
		_strafliste = _strafliste - [objNull];
	};
};
straftat SVAR [life_computergesucht,_strafliste,TRUE];