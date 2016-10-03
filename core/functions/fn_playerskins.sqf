#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\Civ\Clothing\gay.jpg"];
			};
		};
		if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_donorlevel) >= 1)) then {
			player setObjectTextureGlobal [0, "textures\Civ\Supporter\vipOrange.jpg"];
		};
		if (uniform player == "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_donorlevel) >= 1)) then {
			player setObjectTextureGlobal [0, "textures\Civ\Supporter\VIParctic.jpg"];
		};
		if (uniform player == "U_I_CombatUniform" && (FETCH_CONST(life_donorlevel) >= 2)) then {
			player setObjectTextureGlobal [0, "textures\Civ\Supporter\bh.jpg"];
		};
		if (backpack player == "B_Bergen_mcamo" && (FETCH_CONST(life_donorlevel) >= 2)) then {
			backpackContainer player setObjectTextureGlobal [0, "textures\Civ\Supporter\VIPgayruck.jpg"];
		};
		/*
		if(uniform player == "U_B_CombatUniform_mcam") then {
			player setObjectTextureGlobal [0, "textures\Supporter\vipOrange.jpg"];
		};
		if(uniform player == "U_B_CombatUniform_mcam_vest") then {
			player setObjectTextureGlobal [0, "textures\Civ\Supporter\VIParctic.jpg"];
		};
		if(uniform player == "U_I_CombatUniform") then {
			player setObjectTextureGlobal [0, "textures\Civ\Supporter\bh.jpg"];
		};
		if ((backpack player) == "B_Bergen_mcamo") then {
			backpackContainer player setObjectTextureGlobal [0, "textures\Civ\Supporter\VIPgayruck.jpg"];
		};
		*/
		if(playerSide == civilian) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
	};

	case west: {
	if(uniform player == "U_Rangemaster") then {
		player setObjectTextureGlobal [0, "textures\Cop\Clothing\cop_uniform.jpg"];
	};
	if(uniform player == "U_B_SpecopsUniform_sgg") then {
		player setObjectTextureGlobal [0, "textures\Cop\Clothing\policeBasic.paa"];
	};
	if ((uniform player) == "U_B_CombatUniform_mcam_worn") then {
	player setObjectTextureGlobal [0, "textures\Cop\Clothing\SRT.paa"];
	};
	if(playerSide == west) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
};

	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\Med\Clothing\medic_uniform.jpg"];
		};
		if ((uniform player) == "U_C_Scientist") then {
		player setObjectTextureGlobal [0, "textures\Med\Clothing\medic3_uniform.paa"];
		};
		if(playerSide == independent) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
	};

};
