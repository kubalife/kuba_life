#include "..\..\script_macros.hpp"
/*
	File: fn_removeLicenses.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
	//Death while being wanted
	case 0: {
		SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		/*SVAR_MNS [LICENSE_VARNAME("heroin","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("marijuana","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("cocaine","civ"),false];*/
	};

	//Jail licenses
	case 1: {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		//SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		//SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
	};

	//Remove motor vehicle licenses
	case 2: {
		if(GVAR_MNS LICENSE_VARNAME("driver","civ") OR GVAR_MNS LICENSE_VARNAME("pilot","civ") OR GVAR_MNS LICENSE_VARNAME("trucking","civ") OR GVAR_MNS LICENSE_VARNAME("boat","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
			hint localize "STR_Civ_LicenseRemove_1";
		};
	};

	//Killing someone while owning a gun license
	case 3: {
		if(GVAR_MNS LICENSE_VARNAME("gun","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
			hint localize "STR_Civ_LicenseRemove_2";
		};
	};

	// Jail über 30 Minuten
	case 4: {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		//SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
	};

	// Revoking Licenses

	 // Führerschein Lizenz
	 case 10:
	 {
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Driver";
	 };
	 // LKW Führerschein Lizenz
	 case 11:
	 {
		SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Truck";
	 };
	 // Pilotenschein Lizenz
	 case 12:
	 {
		SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Pilot";
	 };
	 // Bootsschein Lizenz
	 case 13:
	 {
		SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Boating";
	 };
	 // Taucherschein Lizenz
	 case 14:
	 {
		SVAR_MNS [LICENSE_VARNAME("dive","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Diving";
	 };
	 // Waffenschein Lizenz
	 case 15:
	 {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		hint localize "STR_Civ_RevokeLicense_Taxi";
	 };
	 // Alle Scheine
	 case 16:
	 {
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("dive","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		hint localize "STR_Civ_RevokeLicense_AllMotor";
	 };
};
