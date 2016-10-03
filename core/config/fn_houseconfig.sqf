/*
	File: fn_houseConfig.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if(_house == "") exitWith {[]};

/*
	Return Format:
	[price,# of containers allowed]
*/
switch (true) do {
	case (_house in ["Land_Slum_01_F"]): {[150000,2]};
	case (_house in ["Land_Shed_04_F"]): {[75000,1]};
	case (_house in ["Land_Shed_02_F"]): {[150000,2]};
	case (_house in ["Land_Shed_05_F"]): {[75000,1]};
	case (_house in ["Land_House_Small_06_F"]): {[150000,2]};
	case (_house in ["Land_House_Small_05_F"]): {[150000,2]};
	case (_house in ["Land_House_Small_02_F"]): {[150000,2]};
	case (_house in ["Land_House_Small_03_F"]): {[350000,3]};
	case (_house in ["Land_House_Small_04_F"]): {[150000,2]};
	case (_house in ["Land_House_Big_01_F"]): {[350000,3]};
	case (_house in ["Land_House_Big_02_F"]): {[350000,3]};
	case (_house in ["Land_Slum_03_F"]): {[350000,3]};
	case (_house in ["Land_House_Big_03_F"]): {[350000,3]};
	case (_house in ["Land_House_Big_04_F"]): {[350000,3]};
	case (_house in ["Land_Hotel_02_F"]): {[550000,4]};
	case (_house in ["Land_i_Shed_Ind_F"]): {[750000,5]};
	default {[]};
};
