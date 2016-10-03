if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};    
if(!(_ziel isKindOf "Man")) then {_ziel = player;};  
if(!(alive _ziel)) then {_ziel = player;};     
switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Policia Cadet"; };
   case 2: { _rang = "Policia Officer"; };
   case 3: { _rang = "Policia Detective"; };
   case 4: { _rang = "Policia Seargent"; };
   case 5: { _rang = "Policia Lieutenant"; };
   case 6: { _rang = "Policia Captain"; };
   case 7: { _rang = "Policia Major"; };
   case 8: { _rang = "Policia Assistant Chief"; };
   case 9: { _rang = "Policia Chief"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Policia de Cuba";
 };
 case east:{
  switch (call life_adaclevel) do{
   case 1: { _rang = "ADAC Praktikant"; };
   case 2: { _rang = "ADAC Azubi"; };
   case 3: { _rang = "ADAC Geselle"; };
   case 4: { _rang = "ADAC Techniker"; };
   case 5: { _rang = "ADAC Meister"; };
   case 6: { _rang = "ADAC Co.Chef"; };
   case 7: { _rang = "ADAC Chef"; };
   case 8: { _rang = "Leitung"; };
  };
  _marke = "marke_ziv";
  _org = "ADAC Altis";
 };
 case independent:{
  switch (call life_mediclevel) do{
	case 1: { _rang = "Emergency Trainee"; };
	case 2: { _rang = "Emergency Medical Technician"; };
	case 3: { _rang = "Emergency Care Assistant"; };
	case 4: { _rang = "Paramedic"; };
	case 5: { _rang = "Advanced Paramedic"; };   
	case 6: { _rang = "Medical Instructor"; };  
	case 7: { _rang = "Medical Instructor Director"; };  
	case 8: { _rang = "Medical Co. Director"; }; 
	case 9: { _rang = "Medical Director"; };    
   default { _rank =  "Error";};
  };
  _marke = "marke_ziv";
  _org = "MRS Cuba";
 };
 case civilian:{
  if(playerSide == civilian)then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Kuba";
  }else{
   _rang = "Zivilist";
   _marke = "marke_abi";
   _org = "Republik Kuba";
  };  
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];