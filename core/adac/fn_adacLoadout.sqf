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
player forceAddUniform "U_B_HeliPilotCoveralls";
player addBackpack "B_Kitbag_cbr";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;