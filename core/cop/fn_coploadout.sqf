/*
	Author: Panda
	SteamID: 76561198145366418
	FileName: fn_copLoadout.sqf
	Information: Load the cop with the gear he died with.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
_oldGear = life_panda_cop_gear;
_uniform = _oldGear select 0;
_uniformItems = (_oldGear select 1) select 0;
_vest = _oldGear select 2;
_vestItems = (_oldGear select 3) select 0;
_backpack = _oldGear select 4;
_backpackItems = (_oldGear select 5) select 0;
_headGear = _oldGear select 6;
_goggles = _oldGear select 7;
_primaryWeapon = _oldGear select 8;
_primaryWeaponItems = (_oldGear select 9) select 0;
_secondaryWeapon = _oldGear select 10;
_secondaryWeaponItems = (_oldGear select 11) select 0;

player addUniform _uniform;
player addVest _vest;
player addBackpack _backpack;
player addHeadGear _headGear;
player addGoggles _goggles;
player addWeapon _primaryWeapon;
player addWeapon _secondaryWeapon;

player addWeapon "DDOPP_X26";
player addMagazine "DDOPP_6Rnd_X26";
player addMagazine "DDOPP_6Rnd_X26";
player addMagazine "DDOPP_6Rnd_X26";

player addItem "pmc_earpiece";
player assignItem "pmc_earpiece";
player addItem "Rangefinder";
player assignItem "Rangefinder";

player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

//Funkgerät
player addItem "tf_anprc152";
player assignItem "tf_anprc152";

// Virtuelle Items
[true,"toolkit",2] call life_fnc_handleInv;
[true,"spikeStrip",4] call life_fnc_handleInv;
[true,"donuts",10] call life_fnc_handleInv;
[true,"coffee",10] call life_fnc_handleInv;

//Altes Cop-Gear laden
{
	player addWeaponItem [primaryWeapon player,_x];
} foreach _primaryWeaponItems;

{
	player addWeaponItem [secondaryWeapon player,_x];
} foreach _secondaryWeaponItems;

{
	player addItemToUniform _x;
} foreach _uniformItems;

{
	player addItemToVest _x;
} foreach _vestItems;

{
	player addItemToBackpack _x;
} foreach _backpackItems;
