#include "..\..\script_macros.hpp"
private["_obj","_unit","_item","_value"];
_unit = player;
_item = SEL(_this,0);
_value = SEL(_this,1);
_itemName = ITEM_VARNAME(_item);

switch(_item) do {
	case "waterBottle": {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
			//_obj SVAR ["water",_value,true];
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
			//SVAR_MNS [_itemName,0];
		};
	};

	case "tbacon": {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_TacticalBacon_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
			//SVAR_MNS [_itemName,0];
		};
	};

	case "redgull": {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_Can_V3_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
			//SVAR_MNS [_itemName,0];
		};
	};

	case "fuelEmpty": {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_CanisterFuel_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
			//SVAR_MNS [_itemName,0];
		};
	};

	case "fuelFull": {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_CanisterFuel_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
		//	SVAR_MNS [_itemName,0];
		};
	};

	case "coffee": {
		if (_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_Can_V3_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
		//	SVAR_MNS [_itemName,0];
		};
	};

	case "TTP_cash": {
		if(CASH > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_Money_F" createVehicle _pos;
			_obj SVAR ["item",["money",GVAR_MNS [_item,0]],true];
			_obj setPos _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
		//	SVAR_MNS ["TTP_cash",0];
		};
	};

	default {
		if(_value > 0) then {
			_pos = _unit modelToWorld[0,1,0];
			_pos = [SEL(_pos,0), SEL(_pos,1), 0];
			_obj = "Land_Suitcase_F" createVehicle _pos;
			[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
			_obj setPos _pos;
			_obj SVAR ["item",[_item,_value],true];
		//	SVAR_MNS [_itemName,0];
		};
	};
};
