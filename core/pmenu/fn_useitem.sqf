#include "..\..\script_macros.hpp"
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if(EQUAL(lbCurSel 2005,-1)) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
	case (_item in ["waterBottle","coffee","redgull","orangensaft","grapefruitsaft"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;
			[player,"drink"] remoteExec ["life_fnc_say3D",RANY];
			if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 0;};
			if(EQUAL(_item,"redgull") || (EQUAL(_item,"coffee")) && {EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)}) then {
				[] spawn {
					life_redgull_effect = time;
					titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
					player enableFatigue false;
					waitUntil {!alive player OR ((time - life_redgull_effect) > (3 * 60))};
					player enableFatigue true;
				};
			};
		};
	};

	case (EQUAL(_item,"boltcutter")): {
		[cursorObject] spawn life_fnc_boltcutter;
		closeDialog 0;
	};

	case (EQUAL(_item,"blastingcharge")): {
		player reveal fed_bank;
		(group player) reveal fed_bank;
		[cursorObject] spawn life_fnc_blastingCharge;
	};

	case (EQUAL(_item,"defusekit")): {
		[cursorObject] spawn life_fnc_defuseKit;
	};

	case (_item == "gpstracker"): {
		[cursorTarget] spawn life_fnc_gpsTracker;closeDialog 0;
	};

	case (EQUAL(_item,"storagesmall")): {
		[false] call life_fnc_storageBox;
	};

	case (EQUAL(_item,"storagebig")): {
		[true] call life_fnc_storageBox;
	};

	case (EQUAL(_item,"spikeStrip")): {
		if(!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};

	case (EQUAL(_item,"fuelFull")): {
		if(vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
		[] spawn life_fnc_jerryRefuel;
	};

	case (EQUAL(_item,"lockpick")): {
		[] spawn life_fnc_lockpick;
	};

	case (_item == "marijuana"):
	{
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			[] spawn life_fnc_weed;
		};
  };
//############################################################## Fahrzeuge ##############################################################

  	case (EQUAL(_item,"hemtttransport")): {
		[true] call life_fnc_hemtttransport;
	};
  	case (EQUAL(_item,"uh1c")): {
		[true] call life_fnc_uh1c;
	};
  	case (EQUAL(_item,"as532red")): {
		[true] call life_fnc_as532red;
	};
  	case (EQUAL(_item,"as532blue")): {
		[true] call life_fnc_as532blue;
	};
  	case (EQUAL(_item,"orcaschwarz")): {
		[true] call life_fnc_orcaschwarz;
	};
  	case (EQUAL(_item,"tempestdevice")): {
		[true] call life_fnc_tempestdevice;
	};
	case (EQUAL(_item,"shounkafordgt")): {
		[true] call life_fnc_shounkafordgt;
	};
	case (EQUAL(_item,"supratuned")): {
		[true] call life_fnc_supratuned;
	};
	case (EQUAL(_item,"mtvr_4X4")): {
		[true] call life_fnc_mtvr_4X4;
	};
	case (EQUAL(_item,"mtvr_MK23")): {
		[true] call life_fnc_mtvr_MK23;
	};
	case (EQUAL(_item,"mtvr_MK27")): {
		[true] call life_fnc_mtvr_MK27;
	};
	case (EQUAL(_item,"mtvr_MK27T")): {
		[true] call life_fnc_mtvr_MK27T;
	};
  	case (EQUAL(_item,"golf")): {
		[true] call life_fnc_golf;
	};
	case (EQUAL(_item,"am1964")): {
		[true] call life_fnc_am1964;
	};
	case (EQUAL(_item,"belair")): {
		[true] call life_fnc_belair;
	};
	case (EQUAL(_item,"corvettec1")): {
		[true] call life_fnc_corvettec1;
	};
	case (EQUAL(_item,"cadieldorado")): {
		[true] call life_fnc_cadieldorado;
	};
	case (EQUAL(_item,"suprasecret")): {
		[true] call life_fnc_suprasecret;
	};
	case (EQUAL(_item,"mv22")): {
		[true] call life_fnc_mv22;
	};
	case (EQUAL(_item,"mv22cargo")): {
		[true] call life_fnc_mv22cargo;
	};
	case (EQUAL(_item,"mi6camo")): {
		[true] call life_fnc_mi6camo;
	};
	case (EQUAL(_item,"mi17camo")): {
		[true] call life_fnc_mi17camo;
	};
	case (EQUAL(_item,"c130black")): {
		[true] call life_fnc_c130black;
	};
	case (EQUAL(_item,"c130green")): {
		[true] call life_fnc_c130green;
	};
	case (EQUAL(_item,"c130greencargo")): {
		[true] call life_fnc_c130greencargo;
	};
	case (EQUAL(_item,"aw159")): {
		[true] call life_fnc_aw159;
	};
	case (EQUAL(_item,"sa330")): {
		[true] call life_fnc_sa330;
	};
	case (EQUAL(_item,"hmmwv")): {
		[true] call life_fnc_hmmwv;
	};
	case (EQUAL(_item,"merlinhc3")): {
		[true] call life_fnc_merlinhc3;
	};
	case (EQUAL(_item,"chinook")): {
		[true] call life_fnc_chinook;
	};
	case (EQUAL(_item,"ch53")): {
		[true] call life_fnc_ch53;
	};
	case (EQUAL(_item,"c47skytrain")): {
		[true] call life_fnc_c47skytrain;
	};

/*
  	case (EQUAL(_item,"tempestdevice")):
	{
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		call life_fnc_tempestdevice;
		};
	};
 */
	case (EQUAL(_item,"nitro")): {
		[] spawn life_fnc_nitro;
	};

	case (EQUAL(_item,"blindfold")): {
		if(playerSide in [independent]) exitWith {hint "Du kannst das nicht benutzen!"};
		if(vehicle player != player) exitWith {hint "In einem Fahrzeug funktioniert das nicht!"};
		_unit = cursorTarget;
		if(isNull _unit) exitWith {};
		if((player distance _unit > 3)) exitWith {hint "Du bist zu weit weg!";};
		if(!(_unit getVariable "civrestrained")) exitWith {hint "Die Person muss schon gefesselt sein!";};
		if((_unit getVariable "masked")) exitWith {hint "Die Person hat doch schon einen Sack auf dem Kopf!";};
		if(player == _unit) exitWith {};
		if(!isPlayer _unit) exitWith {};
		if(([false,_item,1]call life_fnc_handleInv)) then
		{
			[] spawn life_fnc_maskAction;
		};
	};

	case (EQUAL(_item,"beer")): {
		if(playerSide in [west,independent]) exitWith {hint localize "STR_MISC_WestIndNoNo";};
		if((player getVariable ["inDrink",FALSE])) exitWith {hint localize "STR_MISC_AlreadyDrinking";};
		if(([false,_item,1]call life_fnc_handleInv)) then
		{
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.02;
			if (life_drink < 0.06) exitWith {};
			[] spawn life_fnc_drinkbeer;
			[player,"drink"] remoteExec ["life_fnc_say3D",RANY];
		};
	};

	case (EQUAL(_item,"whiskey")): {
		if(playerSide in [west,independent]) exitWith {hint localize "STR_MISC_WestIndNoNo";};
		if((player getVariable ["inDrink",FALSE])) exitWith {hint localize "STR_MISC_AlreadyDrinking";};
		if(([false,_item,1]call life_fnc_handleInv)) then
		{
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.06;
			if (life_drink < 0.07) exitWith {};
			[] spawn life_fnc_drinkwhiskey;
			[player,"drink"] remoteExec ["life_fnc_say3D",RANY];
		};
	};

	case (EQUAL(_item,"moonshine")): {
		if(playerSide in [west,independent]) exitWith {hint localize "STR_MISC_WestIndNoNo";};
		if((player getVariable ["inDrink",FALSE])) exitWith {hint localize "STR_MISC_AlreadyDrinking";};
		if(([false,_item,1]call life_fnc_handleInv)) then
		{
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.08;
			if (life_drink < 0.09) exitWith {};
			[] spawn life_fnc_drinkmoonshine;
			[player,"drink"] remoteExec ["life_fnc_say3D",RANY];
		};
	};

	case (EQUAL(_item,"cocaine_processed")):
	{
		if(playerSide in [west,independent]) exitWith {hint "You can't take drugs on duty!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "You are already high!";};
		if(([false,_item,1] call life_fnc_handleInv)) then
			{
				if(isNil "life_drug") then {life_drug = 0;};
				life_drug = life_drug + 0.08;
				if (life_drug < 0.00) exitWith {};
				[] spawn life_fnc_Cocaine;
			};
	};

	case (EQUAL(_item,"heroin_processed")):
	{
		if(playerSide in [west,independent]) exitWith {hint "You can't take drugs on duty!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "You are already high!";};
		if(([false,_item,1] call life_fnc_handleInv)) then
			{
				if(isNil "life_drug") then {life_drug = 0;};
				life_drug = life_drug + 0.08;
				if (life_drug < 0.00) exitWith {};
				[] spawn life_fnc_Heroin;
			};
	};


	case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;
				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;};
					[player,"eat"] remoteExec ["life_fnc_say3D",RANY];
					case (_sum > 100): {life_hunger = 100;};
					default {life_hunger = _sum;};
				};
			};
		};
	};

	default {
		hint localize "STR_ISTR_NotUsable";
	};
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_inventory;
[] call life_fnc_hudUpdate;
