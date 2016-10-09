if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message","_headgear","_goggles"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};
if(!(_ziel isKindOf "Man")) then {_ziel = player;};
if(!(alive _ziel)) then {_ziel = player;};

// Mit welchem Item bin ich "anonym"?
_headgear = ["A3L_gangster_hat","H_Shemag_olive","H_ShemagOpen_tan","TRYK_Kio_Balaclava"];
_goggles = ["UNS_Scarf_ARVN","UNS_Scarf_Blue","UNS_Scarf_Red","UNS_Scarf_OD","UNS_Towel","Masque_Solitaire","G_Balaclava_oli","G_Balaclava_lowprofile","G_Balaclava_combat","G_Balaclava_blk"];

switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Policia"; };
   case 2: { _rang = "Policia"; };
   case 3: { _rang = "Policia"; };
   case 4: { _rang = "Policia"; };
   case 5: { _rang = "Policia"; };
   case 6: { _rang = "Policia"; };
   case 7: { _rang = "Policia"; };
   case 8: { _rang = "Policia"; };
   case 9: { _rang = "Policia"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Policia de Cuba";
 };
 case east:{
  switch (call life_adaclevel) do{
   case 1: { _rang = "ADC Praktikant"; };
   case 2: { _rang = "ADC Azubi"; };
   case 3: { _rang = "ADC Geselle"; };
   case 4: { _rang = "ADC Techniker"; };
   case 5: { _rang = "ADC Meister"; };
   case 6: { _rang = "ADC Co.Chef"; };
   case 7: { _rang = "ADC Chef"; };
   case 8: { _rang = "ADC Leitung"; };
  };
  _marke = "marke_ziv";
  _org = "Autoclub de Cuba";
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
   _org = "Republica de Cuba";
  }else{
   _rang = "Zivilist";
   _marke = "marke_abi";
   _org = "Republica de Cuba";
  };
 };
};
// Hab ich ein Item was mich anonym macht?
/*if(_headgear in (headgear _x) || _goggles in (goggles _x))then{
	_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>Anonym</t><br/><t size='1.8'>%2</t><br/><t size='1'>%3</t>",_marke, _rang, _org];
	[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
}else{*/
	_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
	[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
//};