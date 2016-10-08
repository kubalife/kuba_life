/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "UNS_CIV_B", "", 50, { "", "", -1 } },
			{ "UNS_CIV_U", "", 50, { "", "", -1 } },
			{ "A3L_Dude_Outfit", "", 50, { "", "", -1 } },
			{ "A3L_Farmer_Outfit", "", 50, { "", "", -1 } },
			{ "A3L_Bikini_Girl", "", 50, { "", "", -1 } },
			{ "A3L_Farmer_Outfit", "", 50, { "", "", -1 } },
			{ "A3L_FuckCaidenPants", "", 50, { "", "", -1 } },
			{ "A3L_Poop2day", "", 50, { "", "", -1 } },
			{ "A3L_A3LogoPants", "", 50, { "", "", -1 } },
			{ "pervt_uni", "", 50, { "", "", -1 } },
			{ "BluePlaid_uni", "", 50, { "", "", -1 } },
			{ "GreenPlaid_uni", "", 50, { "", "", -1 } },
			{ "OrangePlaid_uni", "", 50, { "", "", -1 } },
			{ "PinkPlaid_uni", "", 50, { "", "", -1 } },
			{ "RedPlaid_uni", "", 50, { "", "", -1 } },
			{ "YellowPlaid_uni", "", 50, { "", "", -1 } },
			{ "BlGnGy_uni", "", 50, { "", "", -1 } },
			{ "BlGyBr_uni", "", 50, { "", "", -1 } },
			{ "checkered_uni", "", 50, { "", "", -1 } },
			{ "GbGyBr_uni", "", 50, { "", "", -1 } },
			{ "GnBlBr_uni", "", 50, { "", "", -1 } },
			{ "GnGyBr_uni", "", 50, { "", "", -1 } },
			{ "poloranger_uni", "", 50, { "", "", -1 } },
			{ "GyBlBr_uni", "", 50, { "", "", -1 } },
			{ "kingfish_uni", "", 50, { "", "", -1 } },
			{ "MotherTrucker_uni", "", 50, { "", "", -1 } },
			{ "OrBlBr_uni", "", 50, { "", "", -1 } },
			{ "OrGnGy_uni", "", 50, { "", "", -1 } },
			{ "OrGyBr_uni", "", 50, { "", "", -1 } },
			{ "PkGnGy_uni", "", 50, { "", "", -1 } },
			{ "PkGyBr_uni", "", 50, { "", "", -1 } },
			{ "RdBlBr_uni", "", 50, { "", "", -1 } },
			{ "RdGnGy_uni", "", 50, { "", "", -1 } },
			{ "RdGyBr_uni", "", 50, { "", "", -1 } },
			{ "sohoku_uni", "", 50, { "", "", -1 } },
			{ "WhBlBr_uni", "", 50, { "", "", -1 } },
			{ "WhGyBr_uni", "", 50, { "", "", -1 } },
			{ "YlBlBr_uni", "", 50, { "", "", -1 } },
			{ "A3L_Priest_Uniform", "", 50, { "", "", -1 } },
			{ "A3L_Suit_Uniform", "", 50, { "", "", -1 } },
			{ "taxi_uni", "", 50, { "", "", -1 } },
			{ "A3L_Worker_Outfit", "", 50, { "", "", -1 } },
			{ "rds_uniform_Functionary1", "", 50, { "", "", -1 } },
			{ "rds_uniform_Functionary2", "", 50, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "", 50, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 50, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 50, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 50, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_2_F", "", 50, { "", "", -1 } },
			{ "rds_uniform_citizen1", "", 50, { "", "", -1 } },
			{ "rds_uniform_citizen2", "", 50, { "", "", -1 } },
			{ "rds_uniform_citizen3", "", 50, { "", "", -1 } },
			{ "rds_uniform_citizen4", "", 50, { "", "", -1 } },
			{ "U_C_Poor_1", "", 50, { "", "", -1 } },
			{ "U_OrestesBody", "", 50, { "", "", -1 } },
			{ "U_C_Man_casual_2_F", "", 50, { "", "", -1 } },
			{ "U_C_Man_casual_3_F", "", 50, { "", "", -1 } },
			{ "U_C_Man_casual_1_F", "", 50, { "", "", -1 } },
			{ "rds_uniform_priest", "", 50, { "", "", -1 } },
			{ "rds_uniform_Profiteer1", "", 50, { "", "", -1 } },
			{ "rds_uniform_Profiteer2", "", 50, { "", "", -1 } },
			{ "rds_uniform_Profiteer3", "", 50, { "", "", -1 } },
			{ "rds_uniform_Profiteer4", "", 50, { "", "", -1 } },
			{ "U_C_Man_casual_5_F", "", 125, { "", "", -1 } },
			{ "U_C_Man_casual_4_F", "", 125, { "", "", -1 } },
			{ "U_C_Man_casual_6_F", "", 125, { "", "", -1 } },
			{ "U_C_man_sport_3_F", "", 125, { "", "", -1 } },
			{ "U_C_man_sport_2_F", "", 125, { "", "", -1 } },
			{ "U_C_man_sport_1_F", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BL", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BK", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BWH", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_od", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_R", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_RED2", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WH", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WHB", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_ylb", "", 125, { "", "", -1 } },
			{ "TRYK_U_denim_hood_blk", "", 125, { "", "", -1 } },
			{ "TRYK_U_denim_hood_nc", "", 125, { "", "", -1 } },
			{ "TRYK_U_denim_jersey_blk", "", 125, { "", "", -1 } },
			{ "TRYK_U_denim_jersey_blu", "", 125, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BK", "", 125, { "", "", -1 } },
			{ "TRYK_U_B_RED_T_BR", "", 125, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_WH", "", 125, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BK", "", 125, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "", 125, { "", "", -1 } },
			{ "rds_uniform_Worker1", "", 125, { "", "", -1 } },
			{ "rds_uniform_Worker2", "", 125, { "", "", -1 } },
			{ "rds_uniform_Worker3", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_01", "", 125, { "", "", -1 } },					//18.09.2016
			{ "cg_pepsi1", "", 125, { "", "", -1 } },
			{ "cg_shark", "", 125, { "", "", -1 } },
			{ "RR_Clothing_Creepy_obj", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Labcoat_02", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Labcoat_03", "", 125, { "", "", -1 } },
			{ "RR_Clothing_leftsharkbest_obj", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Pilot_01", "", 125, { "", "", -1 } },
			{ "eaglkes_wwi_ind_pilot_cloth", "", 125, { "", "", -1 } },
			{ "eaglkes_wwi_ger_pilot_cloth", "", 125, { "", "", -1 } },
			{ "RFShirt", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Rocker_04", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Rocker_02", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Rocker_03", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Rocker_01", "", 125, { "", "", -1 } },
			{ "rds_uniform_schoolteacher", "", 125, { "", "", -1 } },
			{ "A3L_SkidRow", "", 125, { "", "", -1 } },
			{ "A3L_SkullBlack", "", 125, { "", "", -1 } },
			{ "skullshirt_uni", "", 125, { "", "", -1 } },
			{ "TMBass_uni", "", 125, { "", "", -1 } },
			{ "Brigada_Esp_delincuente_shirt", "", 125, { "", "", -1 } },
			{ "TRYK_OVERALL_flesh", "", 125, { "", "", -1 } },
			{ "TRYK_OVERALL_SAGE_BLKboots", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_RED2", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_RED2", "", 125, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_YEL", "", 125, { "", "", -1 } },
			{ "TRYK_U_pad_j_blk", "", 125, { "", "", -1 } },
			{ "TRYK_T_camo_tan", "", 125, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "", 125, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "", 125, { "", "", -1 } },
			{ "RR_Clothing_twitch_obj", "", 125, { "", "", -1 } },
			{ "vacationshirt_uni", "", 125, { "", "", -1 } },
			{ "U_C_Scientist", "", 125, { "", "", -1 } },
			{ "Zannaza69", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Worker_01", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Worker_02", "", 125, { "", "", -1 } },
			{ "rds_uniform_Woodlander2", "", 125, { "", "", -1 } },
			{ "rds_uniform_Woodlander1", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_04", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_02", "", 125, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_01", "", 125, { "", "", -1 } },
			{ "cg_mayan1", "", 125, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "UNS_Boonie_VC", "", 120, { "", "", -1 } },
			{ "UNS_Conehat_VC", "", 120, { "", "", -1 } },
			{ "Kio_Afro_Hat", "", 120, { "", "", -1 } },
			{ "H_Bandanna_blu", "", 120, { "", "", -1 } },
			{ "H_Bandanna_sand", "", 120, { "", "", -1 } },
			{ "H_Bandanna_gry", "", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer_grn", "", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer_blk", "", 120, { "", "", -1 } },
			{ "POP_Cowboy_hat", "", 120, { "", "", -1 } },
			{ "H_Hat_brown", "", 120, { "", "", -1 } },
			{ "H_Hat_blue", "", 120, { "", "", -1 } },
			{ "H_Hat_grey", "", 120, { "", "", -1 } },
			{ "H_Hat_tan", "", 120, { "", "", -1 } },
			{ "H_Hat_checker", "", 120, { "", "", -1 } },
			{ "sab_curtissjn4_cap", "", 120, { "", "", -1 } },
			{ "A3L_longhairblack", "", 120, { "", "", -1 } },
			{ "A3L_longhairbrown", "", 120, { "", "", -1 } },
			{ "A3L_longhairblond", "", 120, { "", "", -1 } },
			{ "H_Cap_blu", "", 120, { "", "", -1 } },
			{ "H_Cap_grn", "", 120, { "", "", -1 } },
			{ "H_Cap_tan", "", 120, { "", "", -1 } },
			{ "H_Cap_oli", "", 120, { "", "", -1 } },
			{ "H_Cap_blk", "", 120, { "", "", -1 } },
			{ "H_Cap_red", "", 120, { "", "", -1 } },
			{ "H_Cap_surfer", "", 120, { "", "", -1 } },
			{ "H_Cap_khaki_specops_UK", "", 120, { "", "", -1 } },
			{ "H_Cap_tan_specops_US", "", 120, { "", "", -1 } },
			{ "H_Cap_usblack", "", 120, { "", "", -1 } },
			{ "A3L_mexicanhat", "", 120, { "", "", -1 } },
			{ "Kio_Pirate_Hat", "", 120, { "", "", -1 } },
			{ "rds_Profiteer_cap2", "", 120, { "", "", -1 } },
			{ "rds_Profiteer_cap4", "", 120, { "", "", -1 } },
			{ "rds_Profiteer_cap3", "", 120, { "", "", -1 } },
			{ "rds_Profiteer_cap1", "", 120, { "", "", -1 } },
			{ "Kio_Santa_Hat", "", 120, { "", "", -1 } },
			{ "H_Helmet_Skate", "", 120, { "", "", -1 } },
			{ "H_StrawHat", "", 120, { "", "", -1 } },
			{ "H_StrawHat_dark", "", 120, { "", "", -1 } },
			{ "TRYK_H_pakol2", "", 120, { "", "", -1 } },
			{ "rds_Woodlander_cap3", "", 120, { "", "", -1 } },
			{ "rds_Woodlander_cap4", "", 120, { "", "", -1 } },
			{ "rds_Woodlander_cap2", "", 120, { "", "", -1 } },
			{ "rds_Woodlander_cap1", "", 120, { "", "", -1 } },
			{ "rds_Villager_cap2", "", 120, { "", "", -1 } },
			{ "rds_Villager_cap3", "", 120, { "", "", -1 } },
			{ "rds_Villager_cap4", "", 120, { "", "", -1 } },
			{ "rds_Villager_cap1", "", 120, { "", "", -1 } },
			{ "rds_worker_cap1", "", 120, { "", "", -1 } },
			{ "rds_worker_cap2", "", 120, { "", "", -1 } },
			{ "rds_worker_cap3", "", 120, { "", "", -1 } },
			{ "rds_worker_cap4", "", 120, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "A3L_SpiderVest", "", 500, { "", "", -1 } },
			{ "A3L_SpookyVest", "", 500, { "", "", -1 } },
			{ "pistolera_marron", "", 500, { "", "", -1 } },
			{ "pistolera_negra", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 200, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 350, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 350, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 350, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 650, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 650, { "", "", -1 } },
            { "B_Bergen_rgr", "", 650, { "", "", -1 } },
            { "B_Bergen_blk", "", 650, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 750, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 750, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_WH", "", 750, { "", "", -1 } },
			{ "TRYK_B_Kitbag_blk", "", 750, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "Sheriff_rang1", "Cadet", 0, { "life_coplevel", "SCALAR", 1 } }, //Cadet
			{ "Sheriff_rang2", "Officer", 0, { "life_coplevel", "SCALAR", 2 } }, //Officer
			{ "Sheriff_rang3", "Detective", 0, { "life_coplevel", "SCALAR", 3 } }, //Detective
			{ "Sheriff_rang4", "Seargent", 0, { "life_coplevel", "SCALAR", 4 } }, //Seargent
			{ "Sheriff_rang5", "Lieutenant", 0, { "life_coplevel", "SCALAR", 5 } }, //Lieutenent
			{ "Sheriff_rang6", "Captain", 0, { "life_coplevel", "SCALAR", 6 } }, //Captain
			{ "Sheriff_rang7", "Major", 0, { "life_coplevel", "SCALAR", 7 } }, //Major
			{ "Sheriff_rang9", "Ass. Chief", 0, { "life_coplevel", "SCALAR", 8 } }, //Ass. Chief
			{ "Sheriff_rang10", "Chief", 0, { "life_coplevel", "SCALAR", 9 } }, //Chief
			{ "policia_geo_man_uniform", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_Wetsuit", "Taucheranzug", 0, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_gen_F", "", 0, { "", "", -1 } },
            { "casco_cnp_protec", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Shades_Green", "", 0, { "", "", -1 } },
            { "G_Shades_Red", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 0, { "", "", -1 } },
            { "G_Sport_Red", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } },
            { "UNS_Band_H", "", 0, { "", "", -1 } },
            { "UNS_Band_L", "", 0, { "", "", -1 } },
            { "UNS_Peace", "", 0, { "", "", -1 } },
            { "EWK_Cig4", "", 0, { "", "", -1 } },
            { "EWK_Cig1", "", 0, { "", "", -1 } },
            { "EWK_Shemag_NB", "", 0, { "", "", -1 } },
            { "G_B_Diving", "", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } },
            { "G_Spectacles", "", 0, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 0, { "", "", -1 } },
			{ "Mask_M40", "", 0, { "life_coplevel", "SCALAR", -1 } },
            { "G_Balaclava_TI_G_tna_F", "", 0, { "life_coplevel", "SCALAR", -1 } },
            { "G_Balaclava_TI_blk_F", "", 0, { "life_coplevel", "SCALAR", -1 } },
            { "TRYK_US_ESS_Glasses_BLK", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "policia_vest", "", 0, { "", "", -1 } },
			{ "policia_sniper_vest", "", 0, { "", "", -1 } },
			{ "cnp_vest_reflec", "", 0, { "", "", -1 } },
			{ "uip_vest_pol", "", 0, { "", "", -1 } },
			{ "policia_geo_vest", "", 0, { "", "", -1 } },
			{ "policia_vest", "", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } },
		    { "B_CNP_Drone_bolsa_F", "Drone", 1000, { "life_coplevel", "SCALAR", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 50, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 490, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "rds_uniform_Woodlander3", "", 200, { "", "", -1 } },
			{ "rds_uniform_Woodlander4", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_OD_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "A3L_gangster_hat", "", 20, { "", "", -1 } },
			{ "UNS_Headband_BK", "", 20, { "", "", -1 } },
			{ "UNS_Headband_ED", "", 20, { "", "", -1 } },
			{ "UNS_Headband_OD", "", 20, { "", "", -1 } },
			{ "UNS_Headband_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Headband_VC", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_ERDL", "", 20, { "", "", -1 } },
			{ "UNS_Bandana_OD", "", 20, { "", "", -1 } },
			{ "UNS_Bandana_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_OD", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_ODF", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_VC", "", 20, { "", "", -1 } },
			{ "H_Watchcap_cbr", "", 20, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 20, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 20, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 20, { "", "", -1 } },
			{ "H_Booniehat_khk_hs", "", 20, { "", "", -1 } },
			{ "H_Booniehat_khk", "", 20, { "", "", -1 } },
			{ "H_Booniehat_oli", "", 20, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 20, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 20, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "", 20, { "", "", -1 } },
			{ "H_Hat_brown", "", 20, { "", "", -1 } },
			{ "H_Hat_tan", "", 20, { "", "", -1 } },
			{ "H_Hat_grey", "", 20, { "", "", -1 } },
			{ "H_Hat_camo", "", 20, { "", "", -1 } },
			{ "H_MilCap_gry", "", 20, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR2", "", 20, { "", "", -1 } },
			{ "TRYK_H_DELTAHELM_NV", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_br", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_cu", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_CW", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_tan", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_WH", "", 20, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "", 20, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_ARVN", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Blue", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Red", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_OD", "", 150, { "", "", -1 } },
			{ "UNS_Bandana_A", "", 150, { "", "", -1 } },
			{ "UNS_Peace", "", 150, { "", "", -1 } },
			{ "UNS_Towel", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "UNS_M1956_A1", "", 190, { "", "", -1 } },
			{ "UNS_M1956_P1", "", 190, { "", "", -1 } },
			{ "UNS_M1956_T1", "", 190, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 190, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 190, { "", "", -1 } },
			{ "V_BandollierB_rgr", "", 190, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 190, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 190, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 190, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "", 750, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "", 750, { "", "", -1 } },
			{ "B_ViperHarness_blk_F", "", 750, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 750, { "", "", -1 } },
			{ "B_Carryall_khk", "", 750, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 750, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 750, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 750, { "", "", -1 } },
			{ "TRYK_B_Carryall_wh", "", 750, { "", "", -1 } },
			{ "B_Bergen_dgtl_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_mcamo_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 750, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "CUP_U_C_Rescuer_01", "Medic Uniform", 0, { "", "", -1 } },
            { "CUP_U_C_Fireman_01", "Fire Uniform", 0, { "", "", -1 } },
            { "U_C_Scientist", "EMS Uniform", 0, { "", "", -1 } },
            //{ "RR_EMS_Uniforms_3", "EMS ", 0, { "", "", -1 } },
            //{ "RR_EMS_Uniforms_4", "EMS ", 0, { "", "", -1 } },
            //{ "RR_EMS_Uniforms_5", "EMS ", 0, { "", "", -1 } },
            //{ "CG_EMS1", "", 0, { "", "", -1 } },
            //{ "CG_EMS2", "", 0, { "", "", -1 } },
            //{ "CG_EMS3", "", 0, { "", "", -1 } },
            //{ "CG_EMS4", "", 0, { "", "", -1 } },
            //{ "CG_EMS5", "", 0, { "", "", -1 } },
            //{ "CG_EMS6", "", 0, { "", "", -1 } },
            //{ "CG_EMS7", "", 0, { "", "", -1 } },
            //{ "CG_EMS8", "", 0, { "", "", -1 } },
            //{ "CG_EMS9", "", 0, { "", "", -1 } },
            //{ "CG_EMS10", "", 0, { "", "", -1 } },
            //{ "A3L_EMT2", "", 0, { "", "", -1 } },
            { "rds_uniform_doctor", "Doktor Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "NONE", "", 0, { "", "", -1 } },
            { "firehat", "", 0, { "", "", -1 } },
            { "a3l_medic_helmet", "", 0, { "", "", -1 } },
            { "H_Beret_Gen_F", "", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "", "", -1 } },
            { "Kio_Afro_Hat", "", 0, { "", "", -1 } },
            { "H_Bandanna_blu", "", 0, { "", "", -1 } },
            { "H_Bandanna_gry", "", 0, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 0, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 0, { "", "", -1 } },
            { "policia_geo_boina_roja", "", 0, { "", "", -1 } },
            { "policia_pilot_helmet", "", 0, { "", "", -1 } },
            { "H_Hat_grey", "", 0, { "", "", -1 } },
            { "H_Hat_brown", "", 0, { "", "", -1 } },
            { "H_Hat_checker", "", 0, { "", "", -1 } },
            { "H_Hat_tan", "", 0, { "", "", -1 } },
            { "H_Cap_red", "", 0, { "", "", -1 } },
            { "H_Cap_blk", "", 0, { "", "", -1 } },
            { "H_Cap_marshal", "", 0, { "", "", -1 } },
            { "H_MilCap_blue", "", 0, { "", "", -1 } },
            { "H_MilCap_gry", "", 0, { "", "", -1 } },
            { "H_StrawHat", "", 0, { "", "", -1 } },
            { "H_StrawHat_dark", "", 0, { "", "", -1 } },
            { "TRYK_H_TACEARMUFF_H", "", 0, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 0, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Shades_Green", "", 0, { "", "", -1 } },
            { "G_Shades_Red", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 0, { "", "", -1 } },
            { "G_Sport_Red", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } },
            { "UNS_Band_H", "", 0, { "", "", -1 } },
            { "UNS_Band_L", "", 0, { "", "", -1 } },
            { "UNS_Peace", "", 0, { "", "", -1 } },
            { "EWK_Cig4", "", 0, { "", "", -1 } },
            { "EWK_Cig1", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "life_medicLevel", "SCALAR", 4 } },
            { "Masque_Chirurgical", "", 0, { "", "", -1 } },
            { "EWK_Shemag_NB", "", 0, { "", "", -1 } },
            { "EWK_Shemag_LULZ", "", 0, { "life_medicLevel", "SCALAR", 7 } },
            { "G_B_Diving", "", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } },
            { "G_Spectacles", "", 0, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "CUP_V_B_LHOVest_Red", "", 0, { "", "", -1 } },
			{ "CUP_V_B_LHOVest_Yellow", "", 0, { "", "", -1 } },
            //{ "on_vests_config_i", "", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_RideAlong", "Trainee Weste", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_Probie", "Care Assistant Weste", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_EMT", "Adv. Paramedic Weste", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_Paramedic", "Paramedic Weste", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_SearchRescue", "Standart Weste", 0, { "", "", -1 } },
            //{ "RR_EMS_Vests_Command", "Direktionsweste", 0, { "", "", -1 } }
			{ "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "AM_PoliceBelt", "", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "EMS Unsichtbar", 0, { "", "", -1 } },
            { "B_Bolsa_camp_cruz", "Behandlungszelt", 100, { "", "", -1 } }
        };
    };

    class supporter {
        title = "STR_Shops_C_Supporter";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },

            //Donator
            { "U_I_Protagonist_VR", "Donator VR 1", 4500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_B_Protagonist_VR", "Donator VR 2", 4500, { "life_donorlevel", "SCALAR", 2 } },
            { "U_O_Protagonist_VR", "Donator VR 3", 4500, { "life_donorlevel", "SCALAR", 3 } },
            { "U_I_Soldier_VR", "Donator Entity 1", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_B_soldier_VR", "Donator Entity 2", 11500, { "life_donorlevel", "SCALAR", 2 } },
            { "U_O_Soldier_VR", "Donator Entity 3", 13500, { "life_donorlevel", "SCALAR", 3 } },
            { "U_C_Soldier_VR", "Odd Entity", 16500, { "life_donorlevel", "SCALAR", 3 } },
            { "U_B_CombatUniform_mcam", "Donator Orange", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_vest", "Donator Arctic", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_I_CombatUniform", "Donator Suit", 9500, { "life_donorlevel", "SCALAR", 2 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_camo", "", 4500, { "life_donorlevel", "SCALAR", 1 } },
      			{ "H_HelmetIA_net", "", 3500, { "life_donorlevel", "SCALAR", 1 } },
      			{ "H_PilotHelmetFighter_B", "", 650, { "life_donorlevel", "SCALAR", 2 } },
      			{ "H_CrewHelmetHeli_I", "", 1600, { "life_donorlevel", "SCALAR", 2 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrierL_CTRG", "Donator 1 Vest", 12500, { "life_donorlevel", "SCALAR", 1 } },
            { "V_PlateCarrierSpec_rgr", "Donator 3 Vest", 23500, { "life_donorlevel", "SCALAR", 3 } },
            { "V_PlateCarrierGL_mtp", "Donator 3 Vest", 29500, { "life_donorlevel", "SCALAR", 3 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 1 } },

            { "B_Bergen_mcamo", "Donator Backpack", 7500, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class bandit {
        title = "STR_Shops_C_Bandit";
        license = "bandit";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "rds_uniform_Woodlander3", "", 200, { "", "", -1 } },
			{ "rds_uniform_Woodlander4", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_OD_R", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK", "", 200, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry", "", 200, { "", "", -1 } },
			{ "CUP_H_C_Ushanka_02", "", 200, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "A3L_gangster_hat", "", 20, { "", "", -1 } },
			{ "UNS_Headband_BK", "", 20, { "", "", -1 } },
			{ "UNS_Headband_ED", "", 20, { "", "", -1 } },
			{ "UNS_Headband_OD", "", 20, { "", "", -1 } },
			{ "UNS_Headband_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Headband_VC", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_ERDL", "", 20, { "", "", -1 } },
			{ "UNS_Bandana_OD", "", 20, { "", "", -1 } },
			{ "UNS_Bandana_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_OD", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_OD2", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_ODF", "", 20, { "", "", -1 } },
			{ "UNS_Boonie_VC", "", 20, { "", "", -1 } },
			{ "H_Watchcap_cbr", "", 20, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 20, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 20, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 20, { "", "", -1 } },
			{ "H_Booniehat_khk_hs", "", 20, { "", "", -1 } },
			{ "H_Booniehat_khk", "", 20, { "", "", -1 } },
			{ "H_Booniehat_oli", "", 20, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 20, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 20, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "", 20, { "", "", -1 } },
			{ "H_Hat_brown", "", 20, { "", "", -1 } },
			{ "H_Hat_tan", "", 20, { "", "", -1 } },
			{ "H_Hat_grey", "", 20, { "", "", -1 } },
			{ "H_Hat_camo", "", 20, { "", "", -1 } },
			{ "H_MilCap_gry", "", 20, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR2", "", 20, { "", "", -1 } },
			{ "TRYK_H_DELTAHELM_NV", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_br", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_cu", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_CW", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_tan", "", 20, { "", "", -1 } },
			{ "TRYK_H_woolhat_WH", "", 20, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "", 20, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_ARVN", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Blue", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Red", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_OD", "", 150, { "", "", -1 } },
			{ "UNS_Bandana_A", "", 150, { "", "", -1 } },
			{ "UNS_Peace", "", 150, { "", "", -1 } },
			{ "UNS_Towel", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "UNS_M1956_A1", "", 190, { "", "", -1 } },
			{ "UNS_M1956_P1", "", 190, { "", "", -1 } },
			{ "UNS_M1956_T1", "", 190, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 190, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 190, { "", "", -1 } },
			{ "V_BandollierB_rgr", "", 190, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 190, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 190, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 190, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "", 750, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "", 750, { "", "", -1 } },
			{ "B_ViperHarness_blk_F", "", 750, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 750, { "", "", -1 } },
			{ "B_Carryall_khk", "", 750, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 750, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 750, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 750, { "", "", -1 } },
			{ "TRYK_B_Carryall_wh", "", 750, { "", "", -1 } },
			{ "B_Bergen_dgtl_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_mcamo_F", "", 750, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 750, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "UNS_DCCR_BTS", "", 1000, { "", "", -1 } },
            { "UNS_DCCR_B", "", 1000, { "", "", -1 } },
			{ "UNS_DCCR_G", "", 1000, { "", "", -1 } },
            { "UNS_DCCR_GTS", "", 1000, { "", "", -1 } },
			{ "UNS_DUCK_BDU", "", 1000, { "", "", -1 } },
            { "UNS_NVA_CC", "", 1000, { "", "", -1 } },
			{ "UNS_USMC_LERDL", "", 1000, { "", "", -1 } },
            { "UNS_NVA_G", "", 1000, { "", "", -1 } },
			{ "UNS_TIGER3_BDU", "", 1000, { "", "", -1 } },
            { "UNS_TIGER2_BDU", "", 1000, { "", "", -1 } },
			{ "UNS_USMC_BDU", "", 1000, { "", "", -1 } },
            { "UNS_USMC_BDU_65", "", 1000, { "", "", -1 } },
			{ "UNS_USMC_BDU_S", "", 1000, { "", "", -1 } },
            { "UNS_USMC_Flak_E", "", 1000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "UNS_M1_2A", "", 150, { "", "", -1 } },
            { "UNS_M1_3A", "", 150, { "", "", -1 } },
			{ "UNS_M1_4A", "", 150, { "", "", -1 } },
            { "UNS_M1_5A", "", 150, { "", "", -1 } },
			{ "UNS_M1_7A", "", 150, { "", "", -1 } },
            { "UNS_M1_6A", "", 150, { "", "", -1 } },
			{ "UNS_M1_8A", "", 150, { "", "", -1 } },
            { "UNS_M1_9A", "", 150, { "", "", -1 } },
			{ "UNS_M1_1V8", "", 150, { "", "", -1 } },
            { "UNS_NVA_HG", "", 150, { "", "", -1 } },
			{ "UNS_NVA_HGG", "", 150, { "", "", -1 } },
            { "UNS_Boonie_OD", "", 150, { "", "", -1 } },
			{ "UNS_PAVN_HN", "", 150, { "", "", -1 } },
            { "UNS_PAVN_HC", "", 150, { "", "", -1 } },
			{ "UNS_Boonie_TIG", "", 150, { "", "", -1 } },
            { "UNS_Boonie_TIGF2", "", 150, { "", "", -1 } },
			{ "UNS_Boonie_TIGF", "", 150, { "", "", -1 } },
            { "UNS_Boonie_TIG1", "", 150, { "", "", -1 } },
			{ "UNS_Boonie_TIG2", "", 150, { "", "", -1 } },
            { "UNS_NVA_HK", "", 150, { "", "", -1 } },
			{ "UNS_NVA_HKG", "", 150, { "", "", -1 } },
            { "A3L_gangster_hat", "", 150, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 150, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 150, { "", "", -1 } },
			{ "H_MilCap_ghex_F", "", 150, { "", "", -1 } },
            { "H_MilCap_dgtl", "", 150, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 150, { "", "", -1 } },
            { "H_Shemag_olive", "", 150, { "", "", -1 } },
			{ "TRYK_Kio_Balaclava", "", 150, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "UNS_Bullets", "", 150, { "", "", -1 } },
			{ "UNS_Ear", "", 150, { "", "", -1 } },
			{ "UNS_Finger", "", 150, { "", "", -1 } },
			{ "UNS_Peace", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_OD", "", 150, { "", "", -1 } },
			{ "UNS_Towel", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Blue", "", 150, { "", "", -1 } },
			{ "UNS_Scarf_Red", "", 150, { "", "", -1 } },
			{ "A3L_FatHead", "", 150, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 150, { "", "", -1 } },
			{ "G_Bandanna_beas", "", 150, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 150, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 150, { "", "", -1 } },
			{ "T_HoodBDU", "", 150, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 150, { "", "", -1 } },
			{ "T_HoodOD", "", 150, { "", "", -1 } },
			{ "Masque_Solitaire", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 450, { "", "", -1 } },
            { "V_HarnessO_brn", "", 750, { "", "", -1 } },
            { "V_TacVest_khk", "", 1250, { "", "", -1 } },
            { "UNS_M1956_A3", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A5", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A6", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A7", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A8", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A9", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A10", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A11", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_A12", "", 2000, { "", "", -1 } },
			{ "UNS_FLAK", "", 2000, { "", "", -1 } },
			{ "UNS_JP_Vest", "", 2000, { "", "", -1 } },
			{ "UNS_M1956_M19", "", 2000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 500, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 2000, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 2000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 200, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 350, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 350, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 350, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 650, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 650, { "", "", -1 } },
            { "B_Bergen_rgr", "", 650, { "", "", -1 } },
            { "B_Bergen_blk", "", 650, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } },
			{ "UNS_Alice_5", "", 750, { "", "", -1 } },
			{ "UNS_Alice_6", "", 750, { "", "", -1 } },
			{ "UNS_Alice_F4", "", 750, { "", "", -1 } },
			{ "UNS_Alice_F8", "", 750, { "", "", -1 } },
			{ "UNS_ARMY_MED", "", 750, { "", "", -1 } },
			{ "UNS_NVA_RTO", "", 750, { "", "", -1 } },
			{ "UNS_NVA_R1", "", 750, { "", "", -1 } },
			{ "UNS_NVA_RC", "", 750, { "", "", -1 } },
			{ "UNS_TROP_R1", "", 750, { "", "", -1 } },
			{ "UNS_TROP_R3", "", 750, { "", "", -1 } },
			{ "UNS_USMC_R1", "", 750, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 150, { "", "", -1 } },
            { "U_C_Driver_2", "", 350, { "", "", -1 } },
            { "U_C_Driver_1", "", 360, { "", "", -1 } },
            { "U_C_Driver_3", "", 370, { "", "", -1 } },
            { "U_C_Driver_4", "", 370, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 250, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class adac {
        title = "STR_MAR_adac_clothing";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Scientist", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_blu", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Shades_Green", "", 0, { "", "", -1 } },
            { "G_Shades_Red", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 0, { "", "", -1 } },
            { "G_Sport_Red", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "ADC Unsichtbar", 0, { "", "", -1 } }
        };
    };
};
//ommsen