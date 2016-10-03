#include "..\..\script_macros.hpp"

/*
	File: fn_craftCfg.sqf
	Author: EdgeKiller

	Description:
	Master configuration file for the crafting menu.

*/
private["_craft","_return","_craftSites"];
/*if(!((player distance (getMarkerPos "CraftingArea1") < 50) OR  (player distance (getMarkerPos "CraftingArea2") < 50) OR  (player distance (getMarkerPos "CraftingArea3") < 50))) then  {
	closeDialog 0;
	_return = false;
	hint "Du bist nicht in der Nähe einer Crafting Area!!!";
	} else {
*/
_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft == "") exitWith {closeDialog 0}; //Bad shop type passed.

_craftSites = ["CraftingArea1","CraftingArea2","CraftingArea3"];

switch(_craft) do
{
	case "weapon":
	{
		_return = [
				//[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
				["uns_ppk", ["steel",2,"barrel",1,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_p64", ["steel",2,"barrel",1,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_makarov", ["steel",2,"barrel",1,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_coltcmdr", ["steel",3,"barrel",2,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_m1911", ["steel",3,"barrel",2,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_APS", ["steel",3,"barrel",2,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_Tt33", ["steel",4,"barrel",2,"trigger",1,"sight",1,"butt",1,"pistolenbauplan",1]],
				["uns_uzif", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_uzi", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_mac10", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_sten", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_sterling", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_m45", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_thompson", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_thompsonvc", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_m3a1", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_pm63f", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_pm63", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_mat49", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_mat49_f", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_PPS43", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_PPS52", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_k50m", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_ppsh41", ["steel",8,"barrel",4,"trigger",1,"sight",1,"butt",1,"mpbauplan",1]],
				["uns_STG_44", ["steel",12,"barrel",6,"trigger",1,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_m1garand", ["steel",15,"barrel",7,"trigger",1,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_mosin", ["steel",15,"barrel",7,"trigger",1,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_mas36", ["steel",15,"barrel",7,"trigger",1,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_mas36short", ["steel",15,"barrel",7,"trigger",1,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_ak47", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_ak47_49", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_ak47_52", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_ak47_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_aks47_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_type56", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_type56_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_sa58p", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_sa58v", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_sa58p_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_sa58v_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_akm", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_akm_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_akms", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_akms_bayo", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_akmsf", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]],
				["uns_m63a_AR", ["steel",20,"barrel",10,"trigger",2,"sight",1,"butt",1,"sturmgewehrbauplan",1]]
        ];
	};

    case "vehicle":
    {
		_return = [
		["tempestdevice",["reifen",6,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",20]] //Bauplan Tempest Gerät
			];
    };

	case "uniform":
	{
         _return = [
				["U_O_T_Officer_F",["cloth",120]],
				["U_O_T_Soldier_F",["cloth",120]],
				["U_I_C_Soldier_Para_2_F",["cloth",120]],
				["U_I_C_Soldier_Para_4_F",["cloth",120]],
				["U_I_C_Soldier_Para_3_F",["cloth",120]],
				["U_I_C_Soldier_Para_5_F",["cloth",120]],
				["U_I_C_Soldier_Para_1_F",["cloth",120]],
				["U_I_C_Soldier_Camo_F",["cloth",120]],
				["U_I_CombatUniform",["cloth",120]],
				["U_I_CombatUniform_shortsleeve",["cloth",120]],
				["U_I_OfficerUniform",["cloth",120]]
        ];
	};

	case "backpack":
	{
        _return = [
		["B_AssaultPack_cbr",["cloth",50]],
		["B_AssaultPack_cbr",["cloth",50]],
		["B_FieldPack_ghex_F",["cloth",50]],
		["B_AssaultPack_tna_F",["cloth",50]],
		["B_Carryall_ghex_F",["cloth",50]],
		["B_ViperHarness_oli_F",["cloth",60,"rubber",5]],
		["B_ViperHarness_khk_F",["cloth",60,"rubber",5]],
		["B_ViperHarness_ghex_F",["cloth",60,"rubber",5]],
		["B_ViperHarness_blk_F",["cloth",60,"rubber",5]],
		["B_ViperHarness_hex_F",["cloth",60,"rubber",5]],
		["B_ViperLightHarness_khk_F",["cloth",90,"rubber",5]],
		["B_ViperLightHarness_blk_F",["cloth",90,"rubber",5]],
		["B_ViperLightHarness_hex_F",["cloth",90,"rubber",5]],
		["B_ViperLightHarness_oli_F",["cloth",90,"rubber",5]],
		["B_ViperLightHarness_ghex_F",["cloth",90,"rubber",5]],
		["B_Bergen_tna_F",["cloth",130,"rubber",10]],
		["B_Bergen_hex_F",["cloth",130,"rubber",10]],
		["B_Bergen_dgtl_F",["cloth",130,"rubber",10]],
		["B_Bergen_mcamo_F",["cloth",130,"rubber",10]]
		];
	};

	case "item":
	{
        _return = [
		["boltcutter",["steel",20,"rubber",5]],
		["lockpick",["iron_refined",2]],
		["blastingcharge",["cloth",4,"C4",5,"trigger",1]],
		["goldbar",["goldcoin",60,"waterBottle",12,"pliers",1,"salt_refined",10]],
		["storagesmall",["steel",10,"holz",8,"cloth",5]],
		["storagebig",["steel",25,"holz",10,"cloth",10]],
		["butt",["steel",5,"holz",10]],
		["sight",["steel",2]],
		["barrel",["steelplate",5]],
		["trigger",["steel",2]],
		["sturmgewehrbauplan",["papier",20,"geodreieck",2]],
		["NULL",[""]],
		["reifen",["steel",5,"rubber",20]],
		["karosserie",["steel",20,"plastik",10,"elektroteile",10,"cloth",20,"aluminium",5]],
		["engine",["steel",30,"oil_processed",15,"rubber",10]],
		["autoglas",["glass",5]],
		["elektroteile",["copper_refined",10,"silizium",15]],
		["NULL",[""]],
		["shounkafordgt",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],		//Autos
		["suprasecret",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],
		["cadieldorado",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],
		["corvettec1",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],
		["am1964",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],
		["belair",["reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15]],
		["NULL",[""]],
		["mtvr_4X4",["reifen",4,"engine",2,"karosserie",6,"autoglas",5,"elektroteile",20]],				//LKW's
		["mtvr_MK23",["reifen",6,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",25]],
		["mtvr_MK27",["reifen",8,"engine",3,"karosserie",15,"autoglas",5,"elektroteile",30]],
		["mtvr_MK27T",["reifen",8,"engine",3,"karosserie",15,"autoglas",5,"elektroteile",30]],
		["hemtttransport",["reifen",8,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",20]], 
		["tempestdevice",["reifen",6,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",20]], 	
		["NULL",[""]],
		["uh1c",["reifen",6,"engine",4,"karosserie",20,"autoglas",10,"elektroteile",40]], 				//Helikopter
		["orcaschwarz",["reifen",6,"engine",4,"karosserie",20,"autoglas",10,"elektroteile",40]],
		["aw159",["reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",45]],
		["sa330",["reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",50]],
		["as532red",["reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",60]], 		
		["as532blue",["reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",60]],
		["mi17camo",["reifen",8,"engine",10,"karosserie",40,"autoglas",18,"elektroteile",70]],
		["chinook",["reifen",8,"engine",12,"karosserie",60,"autoglas",20,"elektroteile",90]],
		["mi6camo",["reifen",8,"engine",15,"karosserie",70,"autoglas",30,"elektroteile",110]],
		["NULL",[""]],
		["c47skytrain",["reifen",8,"engine",15,"karosserie",80,"autoglas",40,"elektroteile",120]],		//Flugzeuge
		["mv22",["reifen",8,"engine",6,"karosserie",80,"autoglas",50,"elektroteile",140]],
		["mv22cargo",["reifen",8,"engine",6,"karosserie",80,"autoglas",50,"elektroteile",140]],
		["c130green",["reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150]],
		["c130greencargo",["reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150]],
		["c130black",["reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150]]
      ];
	};

    case "vest":
    {
        _return = [															//Edit by Lanthan hoffe dat tut ... xD
		["V_I_G_resistanceLeader_F",["cloth",150,"steelplate",20]],			//So LalaPanzerung
		["V_TacVest_camo",["cloth",150,"steelplate",20]],
		["CUP_V_O_SLA_Flak_Vest03",["cloth",150,"steelplate",20]],
		["CUP_V_O_SLA_Flak_Vest02",["cloth",150,"steelplate",20]],
		["CUP_V_O_SLA_Flak_Vest01",["cloth",150,"steelplate",20]],
		
		
		["V_PlateCarrierIA1_dgtl",["cloth",90,"steelplate",60]],			//Fettes ding of Doom
		["CUP_V_RUS_6B3_2",["cloth",90,"steelplate",60]],
		["CUP_V_RUS_6B3_3",["cloth",90,"steelplate",60]],
		["CUP_V_B_Interceptor_Rifleman",["cloth",90,"steelplate",60]],
		["CUP_V_B_GER_Vest_1",["cloth",90,"steelplate",60]],
		["CUP_V_B_GER_Vest_2",["cloth",90,"steelplate",60]],
	
		
		["UNS_M1956_A10",["cloth",50]],
		["UNS_M1956_A11",["cloth",50]],
		["UNS_M1956_A12",["cloth",50]],
		["UNS_M1956_A2",["cloth",50]],
		["UNS_NVA_A2",["cloth",50]],
		["UNS_NVA_A3",["cloth",50]],
		["UNS_NVA_S2",["cloth",50]],
		["UNS_NVA_MG",["cloth",50]],
		["UNS_VC_A2",["cloth",50]],
		["UNS_M1956_M9",["cloth",50]],
		["UNS_M1956_M8",["cloth",50]],
		["UNS_M1956_M15",["cloth",50]],
		["UNS_M1956_S2",["cloth",50]]
        ];
    };
    case "ammo":
    {
        _return = [
        ["uns_ppkmag",["steel",1,"gunpowder",1]],
		["uns_6Rnd_czak",["steel",1,"gunpowder",1]],
		["uns_makarovmag",["steel",1,"gunpowder",1]],
		["uns_coltcmdrmag",["steel",1,"gunpowder",1]],
		["uns_m1911mag",["steel",1,"gunpowder",1]],
		["uns_20Rnd_APS",["steel",1,"gunpowder",1]],
		["uns_tokarevmag",["steel",1,"gunpowder",1]],
		["uns_25rnd_pm",["steel",2,"gunpowder",1]],
		["uns_32rnd_uzi",["steel",3,"gunpowder",2]],
		["uns_stenmag_T",["steel",3,"gunpowder",2]],
		["uns_mk4mag_T",["steel",3,"gunpowder",2]],
		["uns_thomsonmag_30_T",["steel",3,"gunpowder",2]],
		["uns_m3a1mag_T",["steel",3,"gunpowder",2]],
		["uns_m45mag_T",["steel",3,"gunpowder",2]],
		["uns_mat49mag_T",["steel",3,"gunpowder",2]],
		["uns_k50mag_T",["steel",3,"gunpowder",2]],
		["uns_30rnd_kurtz_stg",["steel",3,"gunpowder",2]],
		["uns_m1garandmag_T",["steel",3,"gunpowder",2]],
		["und_mosinmag_T",["steel",3,"gunpowder",2]],
		["uns_mas36mag_T",["steel",3,"gunpowder",2]],
		["uns_ak47mag_T",["steel",3,"gunpowder",2]],
		["uns_sa58mag_T",["steel",3,"gunpowder",2]],
		["uns_20rnd_556x45_Stanag_T",["steel",3,"gunpowder",2]]
      	];
    };

    case "attach":
    {
        _return = [
        
			];
		};
	};
	_return;

