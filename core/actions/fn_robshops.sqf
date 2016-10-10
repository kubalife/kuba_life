#include "..\..\script_macros.hpp"
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_Pos","_rndmrk","_mrkstring","_alrdyrobbed","_robstamp","_nomoney","_timedif"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_action = [_this,2] call BIS_fnc_param;//Action name
_cops = (west countSide playableUnits);
_alrdyrobbed=_shop getVariable "_alreadyrobbed"; //true wenn grad ausgeraubt wird
_robstamp=_shop getVariable "_robtimestamp"; //Zeitstempel wann der shop das letzte mal ausgeraubt wurde
_nomoney=false;
_timedif=0;

//if(_cops < 3) exitWith {hint "Es müssen mindestens 3 Polizisten im Dienst sein zum Überfallen";}; //nur für test auskommentieren
if(side _robber == west) exitWith { hint "Meinst du nicht das du das Gegenteil tun solltest?";};
if(side _robber == independent) exitWith { hint "Geh Leute wiederbeleben und lass mich in Ruhe!";};
if(_robber distance _shop > 20) exitWith { hint "Du musst innerhalb von 5 Meter bleiben!";};
if (vehicle player != _robber) exitWith { hint "Raus aus deinem Fahrzeug!";};

if (currentWeapon _robber == "" || currentWeapon _robber in["Binocular","Rangefinder"]) exitWith { hint "Womit willst du mich erpressen? Mit 'nem Schokoriegel?";};

if !(alive _robber) exitWith {};

if (isNil "_alrdyrobbed") then  //ist die variable vorhanden?
{
	_shop setVariable ["_alreadyrobbed", false]; //wenn nicht vorhanden initialisiere
	_alrdyrobbed=false; //wird nicht ausgeraubt da die variable nicht vorhanden war
};


if!(isNil "_robstamp") then {
	_timdif=servertime-_robstamp;
	if(timedif<1200) then {_nomoney=true;}; 
}else {
	_shop setVariable ["_robtimestamp", servertime];
	_nomoney=false;
}
if(_alrdyrobbed && timedif<1200) exitWith {hint "Ich werde gerade ausgeraubt!";};
if(_nomoney) exitWith {hint "Die Kasse ist noch leer vom letzten Raub";};

_shop setVariable ["alreadyrobbed", true];
_kassa = 3000 + round(random 7000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 85) then {[1,format["ALARM! - %1 Robbery in progress", _shop]] remoteExec ["life_fnc_broadcast",west]; };
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Überfall läuft, bleib in der Nähe (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

   _rndmrk = random(1000);
   _mrkstring = format ["wrgMarker_%1", _rndmrk];
   _Pos = position player;
   _marker = createMarker [_mrkstring, _Pos];
   _marker setMarkerColor "ColorRed";
   _marker setMarkerText "ACHTUNG! Es Läuft ein Überfall !!!";
   _marker setMarkerType "mil_warning";
[1,"Eine Tankstelle wird ausgeraubt!!"] remoteExec ["life_fnc_broadcast",0]; // General broadcast alert to everyone, uncomment for testing, or if you want it anyway.

while{true} do
{
	uiSleep 2.00;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["Überfall läuft, bleib in der Nähe (%1%2)...",round(_cP * 100),"%"];

	if(_cP >= 1 OR !alive _robber) exitWith {_shop setVariable ["_alreadyrobbed", false];_shop setVariable ["_robtimestamp", nil];};
	if(_robber distance _shop > 5.1) exitWith {_shop setVariable ["_alreadyrobbed", false];_shop setVariable ["_robtimestamp", nil]; };
	if((_robber getVariable["restrained",false])) exitWith {_shop setVariable ["_alreadyrobbed", false];_shop setVariable ["_robtimestamp", nil];};
	if(life_istazed) exitWith {_shop setVariable ["_alreadyrobbed", false];_shop setVariable ["_robtimestamp", nil];} ;
//	if(life_interrupted) exitWith {};
};

	
	if!(alive _robber) exitWith { life_rip = false;call life_fnc_hudUpdate; };
	if(_robber distance _shop > 5.1) exitWith { deleteMarker _marker; hint "Du hast dich zu weit entfernt, überfall fehlgeschlagen!"; 5 cutText ["","PLAIN"]; life_rip = false; call life_fnc_hudUpdate;};
	if(_robber getVariable "restrained") exitWith { life_rip = false; hint "Du wurdest festgenommen!"; 5 cutText ["","PLAIN"]; call life_fnc_hudUpdate;};
	if(life_istazed) exitWith { deleteMarker _marker; life_rip = false; hint "Du wurdest außer Gefecht gesetzt!"; 5 cutText ["","PLAIN"]; call life_fnc_hudUpdate;};

   5 cutText ["","PLAIN"];
   titleText[format["Du hast $%1 erbeutet, nun flieh!!!",[_kassa] call life_fnc_numberText],"PLAIN"];
   deleteMarker _marker;
   ADD(CASH,_kassa);
   [] call life_fnc_hudSetup;

   _rip = false;
	sleep (30 + random(180)); //Clerk in the store takes between 30-210 seconds before he manage to warn the police about the robbery.
	life_use_atm = true; // Robber can not use the ATM at this point.
	playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", player];
	if!(alive _robber) exitWith {};
[0,format["Policia News: Ein Räuber erbeutet $%3 nach Tankstellenüberfall!",name _robber, _shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",west];
[0,format["Policia News: Eine Tankstelle wurde überfallen: Beute: $%3!, zeugen bei der Policia melden!",name _robber, _shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",civilian];
//[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
//[getPlayerUID _robber,name _robber,"211",_val] remoteExecCall ["life_fnc_wantedAdd",RSERV];
[getPlayerUID _robber,_robber GVAR ["realname",name _robber],"211"] remoteExecCall ["life_fnc_wantedAdd",-2];



uiSleep 1200;
_shop setVariable ["_alreadyrobbed", false];			//ich werde nicht mehr ausgeraubt
_action = _shop addAction["Rob Shop",life_fnc_robShops];
_shop switchMove "";
