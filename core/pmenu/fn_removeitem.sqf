#include "..\..\script_macros.hpp"
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;

if(EQUAL(_data,"")) exitWith {hint localize "STR_NOTF_didNotSelectToRemove";};
if(!([_value] call TON_fnc_isnumber)) exitWith {hint localize "STR_NOTF_notNumberFormat";};
if(parseNumber(_value) <= 0) exitWith {hint localize "STR_NOTF_enterAmountRemove";};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText[localize "STR_NOTF_illegalItemCannotDispose","PLAIN"]};
if(player != vehicle player) exitWith {titleText[localize "STR_NOTF_cannotRemoveInVeh","PLAIN"]};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_couldNotRemoveThatMuch";};
[_data,(parseNumber _value)] spawn life_fnc_dropItem;

hint format [localize "STR_NOTF_removedFromInventory",(parseNumber _value),(localize ITEM_NAME(_data))];

[] call life_fnc_p_updateMenu;
[] call life_fnc_inventory;
[] call life_fnc_hudUpdate;
