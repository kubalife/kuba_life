#include "..\..\script_macros.hpp"
/*
	File: fn_copInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401

private["_display","_curTarget","_seizeRank","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_seizeRank = LIFE_SETTINGS(getNumber,"seize_minimum_rank");

if(player GVAR ["Escorting", false]) then {
	if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
	if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {closeDialog 0;}; //Bad side check?
	if(player distance _curTarget > 7 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

if(_curTarget isKindOf "House_F") exitWith {
	if((nearestObject [[5553.5,7736.9,0],"Land_Dome_Small_F"]) == _curTarget OR (nearestObject [[5547.5,7735.9,0],"Land_Cargo_House_V1_F"]) == _curTarget) then {
		_display = findDisplay 37400;
		_Btn1 = _display displayCtrl Btn1;
		_Btn2 = _display displayCtrl Btn2;
		_Btn3 = _display displayCtrl Btn3;
		_Btn4 = _display displayCtrl Btn4;
		_Btn5 = _display displayCtrl Btn5;
		_Btn6 = _display displayCtrl Btn6;
		_Btn7 = _display displayCtrl Btn7;
		_Btn8 = _display displayCtrl Btn8;
		_Btn9 = _display displayCtrl Btn9;
		_Btn10 = _dispaly displayCtrl Btn10;
		life_pInact_curTarget = _curTarget;
		
		_Btn1 ctrlSetText localize "STR_pInAct_Repair";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_repairDoor;";
		
		_Btn2 ctrlSetText localize "STR_pInAct_CloseOpen";
		_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_doorAnimate;";
		_Btn3 ctrlShow false;
		_Btn4 ctrlShow false;
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	} else {
		closeDialog 0;
	};
};



_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _dispaly displayCtrl Btn10;
life_pInact_curTarget = _curTarget;

if((player getVariable["isEscorting",false])) then {
	{ _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8,_Btn9,_Btn10];
};

//Set Unrestrain Button
_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

//Set Check Licenses Button
_Btn2 ctrlSetText localize "STR_pInAct_checkLicenses";
_Btn2 buttonSetAction "[player] remoteExecCall [""life_fnc_licenseCheck"",life_pInact_curTarget]; closeDialog 0;";

//Set Search Button
_Btn3 ctrlSetText localize "STR_pInAct_SearchPlayer";
_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

//Set Escort Button
if((player getVariable["isEscorting",false])) then {
	_Btn4 ctrlSetText localize "STR_pInAct_StopEscort";
	_Btn4 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
	_Btn4 ctrlSetText localize "STR_pInAct_Escort";
	_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

//Set Ticket Button
_Btn5 ctrlSetText localize "STR_pInAct_TicketBtn";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

// Arrest
_Btn6 ctrlSetText localize "STR_pInAct_Arrest";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_arrestAction; closeDialog 0;";

//Put in car
_Btn7 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

//SeizeWeapons Button
_Btn8 ctrlSetText localize "STR_pInAct_Seize";
_Btn8 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_seizePlayerAction; closeDialog 0;";

//Revoke Licenses
_Btn9 ctrlSetText localize "STR_pInAct_RevokeLicense";
_Btn9 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_revokeLicense;";

// Kontostand überprüfen
_Btn10 ctrlSetText "Kontostand checken";
_Btn10 buttonSetAction "[life_pInact_curTarget] call life_fnc_kontoCheck; closeDialog 0;";


if(FETCH_CONST(life_coplevel) < _seizeRank) then {_Btn8 ctrlEnable false;};

//Check that you are near a place to jail them.
if(!((player distance (getMarkerPos "police_jail_1") < 50) OR  (player distance (getMarkerPos "police_hq_1") < 30) OR (player distance (getMarkerPos "police_hq_2") < 30) OR (player distance (getMarkerPos "police_hq_4") < 30) OR (player distance (getMarkerPos "cop_spawn_1") < 30) OR (player distance (getMarkerPos "cop_spawn_4") < 30) OR (player distance (getMarkerPos "cop_spawn_3") < 30))) then  {
	_Btn6 ctrlEnable false;
};
