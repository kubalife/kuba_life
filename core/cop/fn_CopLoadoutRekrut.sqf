#include "..\..\script_macros.hpp"
/*
 File: fn_copLoadout.sqf
 Author: Bryan "Tonic" Boardwine
 Edited: Andi Ommsen
 Description:
 Loads the cops out with the default gear.
*/

//Abfragen ob Cop und nach dem Geld
if(playerSide in [civilian,independent]) exitWith {hintSilent "Zeig mir erst deine Marke bevor ich dir Ausrüstung aushändige! Verschwinde!"};

//Definition und nackig machen
private["_handle","_price"];
_price = 10000;
if(_price > CASH) exitWith {titleText[localize "STR_Shop_NotEnoughClothes","PLAIN"];};
CASH = CASH - _price;
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "RR_Clothing_Police_RM_New_DOCadet_obj";
player addVest "cnp_vest_reflec";
player addBackpack "B_Bergen_mcamo";
player addHeadgear "policia_cnp_gorra";

/* TAZER */
player addWeapon "DDOPP_X26";
player addMagazine "DDOPP_6Rnd_X26";
player addMagazine "DDOPP_6Rnd_X26";
player addMagazine "DDOPP_6Rnd_X26";
player addMagazine "DDOPP_6Rnd_X26";

/* SCHARFE WAFFE */
player addWeapon "SMG_05_F";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";
player addMagazine "30Rnd_9x21_Mag_SMG_02";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "ItemBinocular";
player assignItem "ItemBinocular";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_morphine";
player addItem "ACE_morphine";
player addItem "ACE_epinephrine";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_cabletie";
player addItem "ACE_earplugs";

/*
//Z-Inventar Items
[true,"toolkit",2] call life_fnc_handleInv;
[true,"spikeStrip",2] call life_fnc_handleInv;
[true,"donuts",10] call life_fnc_handleInv;
[true,"waterBottle",10] call life_fnc_handleInv;
[true,"coffee",4] call life_fnc_handleInv;
*/
[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;