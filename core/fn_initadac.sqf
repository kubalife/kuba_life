#include "..\script_macros.hpp"
/*
 File: fn_initAdac.sqf
 Author: Bryan "Tonic" Boardwine
 Edit: Raptor772000
 Description:
 Initializes the adac..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};
if((FETCH_CONST(life_adaclevel)) < 1 && (FETCH_CONST(life_adminlevel) == 0)) exitWith {
 ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
 sleep 35;
};
if(EQUAL(LIFE_SETTINGS(getNumber,"allow_adac_weapons"),0)) then
{
 [] spawn
 {
 while {true} do
 {
 waitUntil {sleep 3; currentWeapon player != ""};
 removeAllWeapons player;
 };
 };
};
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
//[] execVM "IgiLoad\IgiLoadInit.sqf"; //wenn ihr kein IgiLoad wollt, einfach mit 2 Strichen vor der Zeile ignorieren Bsp. //_igiload = execVM.......