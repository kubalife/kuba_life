#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
enableRadio false;
enableSentences false;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith {
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(FETCH_CONST(life_coplevel) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

player setVariable ['copLevel',1];
player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
[] spawn life_fnc_placeablesInit;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

// Anpassung Copgehalt wegen Tickets
switch (FETCH_CONST(life_coplevel)) do
{
	case 1: { life_paycheck = life_paycheck + 50; }; //Level 1 Rekrut
    case 2: { life_paycheck = life_paycheck + 200; }; //Level 2 Officer
    case 3: { life_paycheck = life_paycheck + 400; }; //Level 3 Patrol
    case 4: { life_paycheck = life_paycheck + 600; }; //Level 4 Detec
    case 5: { life_paycheck = life_paycheck + 800; }; //Level 5 Searg
    case 6: { life_paycheck = life_paycheck + 1000; }; //Level 6 Lieu
    case 7: { life_paycheck = life_paycheck + 1200; }; //Level 7 Capt
    case 8: { life_paycheck = life_paycheck + 1400; }; //Level 8 Major
    case 9: { life_paycheck = life_paycheck + 1600; }; //Level 9 Ass
	case 10: { life_paycheck = life_paycheck + 1800; }; //Level 10 Chief
	default { life_paycheck = life_paycheck };
};
