#include "..\..\script_macros.hpp"
/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "U_C_Scientist";
player addVest "V_PlateCarrierSpec_blk";
player addHeadgear "H_Cap_marshal";
player addBackpack "B_Carryall_mcamo";
player addItem "NVGoggles_OPFOR";
player assignItem "NVGoggles_OPFOR";
player addItem "MedKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[true,"defibrillator",1] call life_fnc_handleInv;
[true,"toolkit",1] call life_fnc_handleInv;
[true,"donuts",2] call life_fnc_handleInv;
[true,"waterBottle",2] call life_fnc_handleInv;

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
