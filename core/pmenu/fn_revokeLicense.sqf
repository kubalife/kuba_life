/*
 File: fn_revokeLicense.sqf
 Author: Michael Francis
 
 Description:
 Allows cops to revoke individual licenses, or all licenses. Vehicle related only.
*/
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

createDialog "revokeLicense_Menu";
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {hint "Probiers mal mit einer Person..."; closeDialog 0;}; //Bad target
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {hint "Das kann ich nicht tun!"; closeDialog 0;}; //Bad side check?

_display = findDisplay 41000;
_Btn1 = _display displayCtrl 41002;
_Btn2 = _display displayCtrl 41003;
_Btn3 = _display displayCtrl 41004;
_Btn4 = _display displayCtrl 41005;
_Btn5 = _display DisplayCtrl 41006;
_Btn6 = _display DisplayCtrl 41007;
_Btn7 = _display DisplayCtrl 41008;

life_pInact_curTarget = _curTarget;


//Führerschein Lizenz
_Btn1 buttonSetAction "[10] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//LKW Führerschein Lizenz
_Btn2 buttonSetAction "[11] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//Pilotenschein Lizenz
_Btn3 buttonSetAction "[12] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//Bootsschein Lizenz
_Btn4 buttonSetAction "[13] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//Diving License
_Btn5 buttonSetAction "[14] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//Taxi Lizenz
_Btn6 buttonSetAction "[15] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";

//Alle Scheine
_Btn7 buttonSetAction "[16] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";


// Individuell erweiterbar auf andere Lizenzen