#include "..\..\script_macros.hpp"
/*
	File: fn_############.sqf
	Author: Andi Ommsen

	Beschreibung:
	Fahrzeugcrafting
*/
private["_azimuth","_mode","_vIndex","_spawnPoints","_className","_purchasePrice","_buyMultiplier","_classNameLife","_rentMultiplier","_colorIndex","_spawnPoint","_vehicle","_vehicleList","_shopSide","_licenses","_licensesName","_exit","_initalPrice"];
_mode = SEL(_this,0);
_exit = false;
_className = lbData[2302,(lbCurSel 2302)];
_vIndex = lbValue[2302,(lbCurSel 2302)];
_classNameLife = _className;
_vehicleList = M_CONFIG(getArray,"CarShops",SEL(life_veh_shop,0),"vehicles");
_shopSide = M_CONFIG(getText,"CarShops",SEL(life_veh_shop,0),"side");
_initalPrice = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,_classNameLife,"price");
_colorIndex = lbValue[2304,(lbCurSel 2304)];
_spawnPoints = SEL(life_veh_shop,1);
_spawnPoint = "";
_azimuth =  getDir player;

life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
uiSleep 4;
life_action_inUse = false;
titleText["Dein Fahrzeug steht dir nun zur Verfügung :)","PLAIN"];

//######################## Stellt das Fahrzeug bereit ######################
_vehicle = createVehicle ["VVV_Aston_Martin_1964_DB5", position player, [], 0, "NONE"];
waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
_vehicle allowDamage false; //Temp disable damage handling..
_vehicle setVectorUp (surfaceNormal position player);
_vehicle setdir _azimuth;
_vehicle setpos (player modelToWorld [0,9,0]);

//######################## Schlüssel + Ownerfestgabe ######################
_vehicle lock 2;
[_vehicle,_colorIndex] call life_fnc_colorVehicle;
[_vehicle] call life_fnc_clearVehicleAmmo;
[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.
_vehicle allowDamage true;
life_vehicles pushBack _vehicle;

//######################## Schlüsselmanagment ######################
[getPlayerUID player,playerSide,_vehicle,1] remoteExecCall ["TON_fnc_keyManagement",RSERV];

if(_mode) then {
	if(!(_className in ["B_MRAP_01_hmg_F"])) then {
		if(life_HC_isActive) then {
			[(getPlayerUID player),playerSide,_vehicle,_colorIndex] remoteExecCall ["HC_fnc_vehicleCreate",HC_Life];
		} else {
			[(getPlayerUID player),playerSide,_vehicle,_colorIndex] remoteExecCall ["TON_fnc_vehicleCreate",RSERV];
		};
	};
};

//######################## Log ######################
if(EQUAL(LIFE_SETTINGS(getNumber,"player_advancedLog"),1)) then {
	if(EQUAL(LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging"),1)) then {
		advanced_log = format ["bought vehicle %1 for %2. On Hand Cash: %3  Bank Balance: %4",_className,[_purchasePrice] call life_fnc_numberText,[CASH] call life_fnc_numberText,[TTPBANK] call life_fnc_numberText];
	} else {
		advanced_log = format ["%1 - %2 bought vehicle %3 for %4. On Hand Cash: %5  Bank Balance %6",profileName,(getPlayerUID player),_className,[_purchasePrice] call life_fnc_numberText,[CASH] call life_fnc_numberText,[TTPBANK] call life_fnc_numberText];
	};
	publicVariableServer "advanced_log";
};

//######################## Datenbankupdate ######################
[0] call SOCK_fnc_updatePartial;
true;

//######################## Entfernt den Bauplan ######################
[false,"am1964",1] call life_fnc_handleInv; 