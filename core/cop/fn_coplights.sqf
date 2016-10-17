/*
	File: fn_copLights.sqf
	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
	
	Description:
	Adds the light effect to cop vehicles, specifically the offroad.
*/
Private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed"];
_vehicle = _this select 0;
	
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "lights")) exitWith {};
_lightRed = [20, 0.1, 0.1];
_lightBlue = [0.1, 0.1, 20];

_lightleft = "#lightpoint" createVehicle getPos _vehicle;   
sleep 0.2;
_lightleft setLightColor _lightRed; 
_lightleft setLightBrightness 0.2;  
_lightleft setLightAmbient [0.1,0.1,1];

//DAR_ImpalaPolice

switch (typeOf _vehicle) do
{
	case "B_Heli_Light_01_F":
	{
		_lightleft lightAttachObject [_vehicle,[-0.37, 0.0, -0.80]];
	};
	case "B_Heli_Transport_01_F":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.5, 0.0, 0.81]];
 	};
	case "77FuryCop":
	{			
		_lightleft lightAttachObject [_vehicle, [0.0,0.0,0.0]];
 	};
	case "A3L_CVPIFPBLBPD":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.0]];
 	};
	case "GeK_Renault_Trafic_Police":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.85]];
 	};
	case "DAR_ImpalaPolice":
	{			
		_lightleft lightAttachObject [_vehicle, [0.35,-0.2,0.0]]; // Breite, Tiefe, Höhe des Lichtes
 	};
	case "cg_h2_sert":
	{			
		_lightleft lightAttachObject [_vehicle, [0.35,-0.2,0.85]];
 	};
	case "Navara_Policia":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "A3L_SuburbanUM":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "A3L_Suburban":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_slicktop":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_marked":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_unmarked":
	{			
		_lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
};

_lightleft setLightAttenuation [0.181, 0, 1000, 130]; 
_lightleft setLightIntensity 10;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;

_lightright = "#lightpoint" createVehicle getPos _vehicle;   
sleep 0.2;
_lightright setLightColor _lightBlue; 
_lightright setLightBrightness 0.2;  
_lightright setLightAmbient [0.1,0.1,1]; 

switch (typeOf _vehicle) do
{
	case "B_Heli_Light_01_F":
	{
		_lightright lightAttachObject [_vehicle,[0.37, 0.0, -0.80]];
	};
	case "B_Heli_Transport_01_F":
	{			
		_lightright lightAttachObject [_vehicle, [0.5, 0.0, 0.81]];
 	};
	case "77FuryCop":
	{
		_lightright lightAttachObject [_vehicle, [0.0,0.0,0.0]];
 	};
	case "A3L_CVPIFPBLBPD":
	{			
		_lightright lightAttachObject [_vehicle, [0.35,-0.2,0.0]]; 
 	};
	case "GeK_Renault_Trafic_Police":
	{			
		_lightright lightAttachObject [_vehicle, [0.35,-0.2,0.85]]; 
 	};
	case "DAR_ImpalaPolice":
	{			
		_lightright lightAttachObject [_vehicle, [0.35,-0.2,0.0]]; // Breite, Tiefe, Höhe des Lichtes
 	};
	case "cg_h2_sert":
	{
		_lightright lightAttachObject [_vehicle, [0.35,-0.2,0.85]];
 	};
	case "Navara_Policia":
	{
		_lightright lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "A3L_SuburbanUM":
	{			
		_lightright lightAttachObject [_vehicle, [-0.35,0.0,0.45]];
 	};
	case "A3L_Suburban":
	{
		_lightright lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_slicktop":
	{			
		_lightright lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_marked":
	{			
		_lightright lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
	case "ivory_wrx_unmarked":
	{			
		_lightright lightAttachObject [_vehicle, [-0.35,-0.2,0.45]];
 	};
};
  
_lightright setLightAttenuation [0.181, 0, 1000, 130]; 
_lightright setLightIntensity 10;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;

//ARE YOU ALL HAPPY?!?!?!?!?!?!?!?!?%#?@WGD?TGD?BN?ZDHBFD?GA
_lightleft setLightDayLight true;
_lightright setLightDayLight true;

_leftRed = true;  
while{ (alive _vehicle)} do  
{  
	if(!(_vehicle getVariable "lights")) exitWith {};
	if(_leftRed) then  
	{  
		_leftRed = false;  
		_lightright setLightBrightness 0.0;  
		sleep 0.05;
		_lightleft setLightBrightness 6;  
	}  
		else  
	{  
		_leftRed = true;  
		_lightleft setLightBrightness 0.0;  
		sleep 0.05;
		_lightright setLightBrightness 6;  
	};  
	sleep (_this select 1);  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;