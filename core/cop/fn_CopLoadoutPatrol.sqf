#include "..\..\script_macros.hpp"
/*
 File: fn_copLoadout.sqf
 Author: Bryan "Tonic" Boardwine
 Edited: Itsyuka
 Description:
 Loads the cops out with the default gear.
*/
if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith { hint "Du bist kein Polizeibeamter! Verschwinde!" };

private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "U_Rangemaster";
player addVest "V_PlateCarrier1_blk";
player addBackpack "B_Bergen_mcamo";
player addHeadgear "H_Beret_02";

/* TAZER */
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";

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
player addItem "ACE_packingBandage";


[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;