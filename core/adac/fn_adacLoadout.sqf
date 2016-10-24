#include "..\..\script_macros.hpp"
/*
 File: fn_adacLoadout.sqf
 Author: Bryan "Tonic" Boardwine
 Edit: Raptor772000
 Description:
 ADAC anziehen...
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
player forceAddUniform "CUP_U_C_Mechanic_01";
player addBackpack "AM_PoliceBelt";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;