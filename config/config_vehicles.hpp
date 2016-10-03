class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "O_G_Quadbike_01_F", { "", "", -1 } },
			{ "CUP_B_M1030", { "", "", -1 } },
			{ "RDS_Lada_Civ_03", { "", "", -1 } },
			{ "RDS_Lada_Civ_04", { "", "", -1 } },
			{ "RDS_Lada_Civ_02", { "", "", -1 } },
			{ "RDS_Lada_Civ_01", { "", "", -1 } },
			{ "RDS_Gaz24_Civ_02", { "", "", -1 } },
			{ "RDS_Gaz24_Civ_01", { "", "", -1 } },
			{ "RDS_Gaz24_Civ_03", { "", "", -1 } },
			{ "CUP_C_Skoda_White_CIV", { "", "", -1 } },
			{ "CUP_C_Skoda_Blue_CIV", { "", "", -1 } },
			{ "CUP_C_Skoda_Green_CIV", { "", "", -1 } },
			{ "CUP_C_Skoda_Red_CIV", { "", "", -1 } },
			{ "CUP_C_Datsun", { "", "", -1 } },
			{ "CUP_C_Datsun_4seat", { "", "", -1 } },
			{ "CUP_C_Datsun_Covered", { "", "", -1 } },
			{ "CUP_C_Datsun_Plain", { "", "", -1 } },
			{ "CUP_C_Datsun_Tubeframe", { "", "", -1 } },
			{ "Jonzie_Datsun_510", { "", "", -1 } },
			{ "Jonzie_Datsun_Z432", { "", "", -1 } },
			//{ "RDS_Octavia_Civ_01", { "", "", -1 } },
			//{ "RDS_Golf4_Civ_01", { "", "", -1 } },
			{ "Jonzie_Mini_Cooper", { "", "", -1 } },
			{ "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },
			{ "VVV_Abarth_695", { "", "", -1 } },
			{ "cl3_golf_mk2_aqua", { "", "", -1 } },
			{ "cl3_golf_mk2_burgundy", { "", "", -1 } },
			{ "cl3_golf_mk2_blue", { "", "", -1 } },
			{ "cl3_golf_mk2_black", { "", "", -1 } },
			{ "cl3_golf_learner_white", { "", "", -1 } },
			{ "cl3_golf_mk2_camo", { "", "", -1 } },
			{ "cl3_golf_mk2_camo_urban", { "", "", -1 } },
			{ "CUP_C_Golf4_black_Civ", { "", "", -1 } },
			{ "CUP_C_Golf4_blue_Civ", { "", "", -1 } },
			{ "CUP_C_Golf4_green_Civ", { "", "", -1 } },
			{ "CUP_C_Golf4_red_Civ", { "", "", -1 } },
			{ "CUP_C_Golf4_white_Civ", { "", "", -1 } },
			{ "CUP_C_Golf4_yellow_Civ", { "", "", -1 } },
			{ "cl3_civic_vti_yellow", { "", "", -1 } },
			{ "cl3_civic_vti_black", { "", "", -1 } },
			{ "cl3_civic_vti_blue", { "", "", -1 } },
			{ "cl3_civic_vti_aqua", { "", "", -1 } },
			{ "cl3_civic_vti_babyblue", { "", "", -1 } },
			{ "cl3_civic_vti_babypink", { "", "", -1 } },
			{ "cl3_civic_vti_red", { "", "", -1 } },
			{ "cl3_civic_vti_burgundy", { "", "", -1 } },
			{ "cl3_civic_vti_cardinal", { "", "", -1 } },
			{ "cl3_civic_vti_dark_green", { "", "", -1 } },
			{ "cl3_civic_vti_gold", { "", "", -1 } },
			{ "cl3_civic_vti_green", { "", "", -1 } },
			{ "cl3_civic_vti_grey", { "", "", -1 } },
			{ "cl3_civic_vti_lavender", { "", "", -1 } },
			{ "cl3_civic_vti_light_blue", { "", "", -1 } },
			{ "cl3_civic_vti_light_yellow", { "", "", -1 } },
			{ "cl3_civic_vti_lime", { "", "", -1 } },
			{ "cl3_civic_vti_marina_blue", { "", "", -1 } },
			{ "cl3_civic_vti_navy_blue", { "", "", -1 } },
			{ "cl3_civic_vti_orange", { "", "", -1 } },
			{ "cl3_civic_vti_purple", { "", "", -1 } },
			{ "cl3_civic_vti_sand", { "", "", -1 } },
			{ "cl3_civic_vti_silver", { "", "", -1 } },
			{ "cl3_civic_vti_camo", { "", "", -1 } },
			{ "cl3_civic_vti_camo_urban", { "", "", -1 } },
			{ "cl3_civic_vti_white", { "", "", -1 } },
			{ "cl3_civic_vti_violet", { "", "", -1 } },
			{ "VVV_Chevrolet_C10", { "", "", -1 } },
			{ "ivory_tractor2", { "", "", -1 } },
			{ "ivory_tractor", { "", "", -1 } }
        };
    };

    class civ_bike {
        side = "civ";
        vehicles[] = {
            { "O_G_Quadbike_01_F", { "", "", -1 } },
			{ "CUP_B_M1030", { "", "", -1 } },
			{ "shounka_harley_a3", { "", "", -1 } },
			{ "shounka_harley_a3_noir", { "", "", -1 } },
			{ "shounka_harley_a3_bleu", { "", "", -1 } },
			{ "shounka_harley_a3_rouge", { "", "", -1 } },
			{ "shounka_harley_a3_lolz", { "", "", -1 } },
			{ "cl3_chopper_gold", { "", "", -1 } },
			{ "cl3_enduro_yellow", { "", "", -1 } },
			{ "cl3_enduro_black", { "", "", -1 } },
			{ "cl3_enduro_blue", { "", "", -1 } },
			{ "cl3_enduro_aqua", { "", "", -1 } },
			{ "cl3_enduro_babyblue", { "", "", -1 } },
			{ "cl3_enduro_babypink", { "", "", -1 } },
			{ "cl3_enduro_red", { "", "", -1 } },
			{ "cl3_enduro_burgundy", { "", "", -1 } },
			{ "cl3_enduro_cardinal", { "", "", -1 } },
			{ "cl3_enduro_dark_green", { "", "", -1 } },
			{ "cl3_enduro_gold", { "", "", -1 } },
			{ "cl3_enduro_green", { "", "", -1 } },
			{ "cl3_enduro_grey", { "", "", -1 } },
			{ "cl3_enduro_lavender", { "", "", -1 } },
			{ "cl3_enduro_light_blue", { "", "", -1 } },
			{ "cl3_enduro_light_yellow", { "", "", -1 } },
			{ "cl3_enduro_lime", { "", "", -1 } },
			{ "cl3_enduro_marina_blue", { "", "", -1 } },
			{ "cl3_enduro_navy_blue", { "", "", -1 } },
			{ "cl3_enduro_orange", { "", "", -1 } },
			{ "cl3_enduro_purple", { "", "", -1 } },
			{ "cl3_enduro_sand", { "", "", -1 } },
			{ "cl3_enduro_silver", { "", "", -1 } },
			{ "cl3_enduro_camo", { "", "", -1 } },
			{ "cl3_enduro_camo_urban", { "", "", -1 } },
			{ "cl3_enduro_white", { "", "", -1 } },
			{ "cl3_enduro_violet", { "", "", -1 } },
			{ "cl3_enduro_flame", { "", "", -1 } },
			{ "cl3_enduro_flame1", { "", "", -1 } },
			{ "cl3_enduro_flame2", { "", "", -1 } },
			{ "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_sport {
        side = "civ";
        vehicles[] = {
            { "ADM_1964_Impala", { "", "", -1 } },
			{ "ADM_1969_Camaro", { "", "", -1 } },
			{ "ADM_1969_Charger", { "", "", -1 } },
			{ "SIG_SuperBeeB", { "", "", -1 } },
			{ "SIG_SuperBeeG", { "", "", -1 } },
			{ "SIG_SuperBeeL", { "", "", -1 } },
			{ "SIG_SuperBeeM", { "", "", -1 } },
			{ "SIG_SuperBee", { "", "", -1 } },
			{ "SIG_SuperBeeY", { "", "", -1 } },
			{ "SIG_Magnums", { "", "", -1 } },
			{ "SIG_Hubcaps", { "", "", -1 } },
			{ "SIG_Hcode", { "", "", -1 } },
			{ "SIG_Roadrunner", { "", "", -1 } },
			//{ "GeK_Cadillac_Fleetwood_Brougham_85", { "", "", -1 } },
			//{ "GeK_ElCamino", { "", "", -1 } },
			{ "Jonzie_Datsun_Z432", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_noir", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_bleufonce", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_rouge", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_jaune", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_rose", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_violet", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_orange", { "", "", -1 } },
			{ "Jonzie_30CSL", { "", "", -1 } },
			{ "Jonzie_Galant", { "", "", -1 } },
			{ "shelbycobra_car_azul", { "", "", -1 } },
			{ "shelbycobra_car_blanco", { "", "", -1 } },
			{ "ivory_190e", { "", "", -1 } },
			{ "ivory_gt500", { "", "", -1 } },
			{ "VVV_Alfa_Romeo_Spider_Duetto_160", { "", "", -1 } },
			{ "VVV_Chevrolet_Camaro_RS", { "", "", -1 } },
			{ "ivory_supra", { "", "", -1 } },
			{ "VVV_Chevrolet_Impala", { "", "", -1 } },
			{ "VVV_Cadillac_DTS", { "", "", -1 } },
			{ "ivory_e36", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
			{ "CUP_C_UAZ_Open_TK_CIV", { "", "", -1 } },
			{ "CUP_C_UAZ_Unarmed_TK_CIV", { "", "", -1 } },
			{ "CUP_C_SUV_CIV", { "", "", -1 } },
			{ "CUP_C_LR_Transport_CTK", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F_black", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F_green", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F_orange", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F_blue", { "", "", -1 } },
			//{ "A3L_JeepGrayTan", { "", "", -1 } },
            //{ "A3L_JeepTanTan", { "", "", -1 } },
            //{ "A3L_JeepRedBlack", { "", "", -1 } },
            //{ "A3L_JeepRedTan", { "", "", -1 } },
			//{ "A3L_JeepGrayBlack", { "", "", -1 } },
			//{ "A3L_JeepGreenBlack", { "", "", -1 } },
			//{ "A3L_JeepTanBlack", { "", "", -1 } },
			//{ "A3L_JeepGreenTan", { "", "", -1 } },
			//{ "A3L_Jeep", { "", "", -1 } },
			//{ "A3L_JeepWhiteBlack", { "", "", -1 } },
			//{ "I_mas_cars_UAZ_Unarmed", { "", "", -1 } },
			//{ "O_mas_cars_UAZ_Unarmed", { "", "", -1 } },
			{ "cl3_range_rover_black", { "", "", -1 } },
			{ "cl3_range_rover_blue", { "", "", -1 } },
			{ "cl3_range_rover_violet", { "", "", -1 } },
			{ "cl3_range_rover_dark_green", { "", "", -1 } },
			{ "cl3_range_rover_camo", { "", "", -1 } },
			{ "cl3_range_rover_camo_urban", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_grise", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_bleufonce", { "", "", -1 } },
			{ "Mrshounka_hummer_civ", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_noir", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_jaune", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_violet", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_rose", { "", "", -1 } },
			{ "shounka_h2_grise", { "", "", -1 } },
			{ "shounka_h2_bleufonce", { "", "", -1 } },
			{ "shounka_h2", { "", "", -1 } },
			{ "shounka_h2_jaune", { "", "", -1 } },
			{ "shounka_h2_noir", { "", "", -1 } },
			{ "shounka_h2_jaune", { "", "", -1 } },
			{ "shounka_h2_violet", { "", "", -1 } },
			{ "shounka_h2_rose", { "", "", -1 } },
			{ "VVV_Cadillac_Escalade", { "", "", -1 } },
			{ "ivory_suburban", { "", "", -1 } },
			{ "VVV_Chevrolet_Blazer", { "", "", -1 } }
        };
    };

    class civ_faehre {
        side = "civ";
        vehicles[] = {
			{ "ffaa_ar_lcm", { "", "", -1 } }
        };
    };

    class civ_skate {
        side = "civ";
        vehicles[] = {
			{ "cl_skatea", { "", "", -1 } },
			{ "cl_skateb", { "", "", -1 } },
			{ "cl_skatec", { "", "", -1 } },
			{ "cl_skated", { "", "", -1 } },
			{ "cl_skatee", { "", "", -1 } },
			{ "cl_skatef", { "", "", -1 } },
			{ "cl_skateg", { "", "", -1 } },
			{ "cl_skateh", { "", "", -1 } },
			{ "cl_skatei", { "", "", -1 } },
			{ "cl_skatej", { "", "", -1 } },
			{ "cl_skatek", { "", "", -1 } },
			{ "cl_skatel", { "", "", -1 } },
			{ "cl_skatem", { "", "", -1 } },
			{ "cl_skaten", { "", "", -1 } },
			{ "cl_skateo", { "", "", -1 } },
			{ "cl_skatep", { "", "", -1 } },
			{ "cl_skateq", { "", "", -1 } },
			{ "cl_skater", { "", "", -1 } },
			{ "cl_skates", { "", "", -1 } },
			{ "cl_skatet", { "", "", -1 } },
			{ "cl_skateu", { "", "", -1 } },
			{ "cl_skatev", { "", "", -1 } },
			{ "cl_skatex", { "", "", -1 } },
			{ "cl_skatey", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            //{ "pop_camionbasura", { "", "", -1 } },
            { "O_G_Van_01_transport_F", { "", "", -1 } },
            { "O_G_Van_01_fuel_F", { "", "", -1 } },
			{ "ADM_GMC_Vandura", { "", "", -1 } },
            //{ "uns_nvatruck_open", { "", "", -1 } },
            //{ "uns_nvatruck", { "", "", -1 } },
            { "C_Truck_02_transport_F", { "", "", -1 } },
            { "C_Truck_02_covered_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "I_Truck_02_ammo_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
			{ "CUP_O_V3S_Open_TKA", { "", "", -1 } },
			{ "CUP_O_V3S_Covered_TKA", { "", "", -1 } },
			{ "CUP_O_V3S_Repair_TKA", { "", "", -1 } },
			{ "CUP_O_V3S_Refuel_TKA", { "", "", -1 } },
			{ "CUP_C_Ural_Open_Civ_01", { "", "", -1 } },
			{ "CUP_C_Ural_Civ_01", { "", "", -1 } },
			{ "CUP_C_Ural_Civ_03", { "", "", -1 } },
			{ "CUP_C_Ural_Open_Civ_03", { "", "", -1 } },
			{ "CUP_C_Ural_Open_Civ_02", { "", "", -1 } },
			{ "CUP_C_Ural_Civ_02", { "", "", -1 } },
			{ "CUP_B_Ural_Empty_CDF", { "", "", -1 } },
			{ "CUP_B_Ural_Open_CDF", { "", "", -1 } },
			{ "CUP_B_Ural_CDF", { "", "", -1 } },
			{ "CUP_B_Ural_Refuel_CDF", { "", "", -1 } },
			{ "CUP_B_Ural_Repair_CDF", { "", "", -1 } },
			{ "CUP_B_MTVR_USMC", { "", "", -1 } },
			{ "CUP_B_MTVR_Ammo_USMC", { "", "", -1 } },
			{ "CUP_B_MTVR_Refuel_USMC", { "", "", -1 } },
			{ "CUP_B_MTVR_Repair_USMC", { "", "", -1 } },
            //{ "O_T_Truck_03_transport_ghex_F", { "", "", -1 } },
            //{ "O_T_Truck_03_covered_ghex_F", { "", "", -1 } },
            //{ "O_T_Truck_03_ammo_ghex_F", { "", "", -1 } },
            //{ "O_T_Truck_03_fuel_ghex_F", { "", "", -1 } },
            //{ "O_T_Truck_03_device_ghex_F", { "", "", -1 } },
            //{ "B_Truck_01_transport_F", { "", "", -1 } },
            //{ "B_Truck_01_ammo_F", { "", "", -1 } },
            //{ "B_Truck_01_covered_F", { "", "", -1 } },
            //{ "B_Truck_01_box_F", { "", "", -1 } },
            //{ "B_Truck_01_fuel_F", { "", "", -1 } },
            //{ "A3L_Dumptruck", { "", "", -1 } },
            //{ "shounka_a3_mantgs_2_2_in", { "", "", -1 } },
            //{ "Jonzie_Box_Truck", { "", "", -1 } },
            //{ "Jonzie_Tanker_Truck", { "", "", -1 } },
            //{ "Jonzie_Log_Truck", { "", "", -1 } },
            //{ "cl3_mackr_del_american", { "", "", -1 } },
            //{ "cl3_mackr_del_green_white", { "", "", -1 } },
            //{ "cl3_mackr_del_forest_camo", { "", "", -1 } },
            //{ "cl3_mackr_del_black_gold", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "uns_H13_medevac_CAV", { "", "", -1 } },
            { "uns_H13_amphib_CAV", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "civ_black_mh9", { "", "", -1 } },
            { "civ_blue_mh9", { "", "", -1 } },
            { "civ_blueline_mh9", { "", "", -1 } },
            { "civ_elliptical_mh9", { "", "", -1 } },
            { "civ_jeans_mh9", { "", "", -1 } },
            { "civ_green_mh9", { "", "", -1 } },
            { "civ_sunset_mh9", { "", "", -1 } },
            { "civ_wave_mh9", { "", "", -1 } },
            { "ivory_b206", { "", "", -1 } },
            { "ivory_b206_news", { "", "", -1 } },
            { "civ_blue_po30", { "", "", -1 } },
            //{ "civ_black_po30", { "", "", -1 } },
            { "uns_ch34_sog", { "", "", -1 } },
            //{ "uns_ch34_army", { "", "", -1 } },
            //{ "UH1C", { "", "", -1 } },
            //{ "UH1Y_FFV", { "", "", -1 } },
            { "I_mas_MI8", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "SCmod_cougar_civ", { "", "", -1 } },
			{ "CUP_C_Mi17_Civilian_RU", { "", "", -1 } },
			{ "CUP_C_MI6T_RU", { "", "", -1 } },
            { "sab_camel_pro", { "", "", -1 } },
            { "sab_FAAllegro_4", { "", "", -1 } },
            { "sab_FAAllegro", { "", "", -1 } },
            { "sab_FAAllegro_3", { "", "", -1 } },
            { "sab_FAAllegro_5", { "", "", -1 } },
            { "sab_RobinDR400", { "", "", -1 } },
            { "sab_RobinDR400_4", { "", "", -1 } },
            { "sab_RobinDR400_2", { "", "", -1 } },
            { "sab_RobinDR400_3", { "", "", -1 } },
            { "sab_RobinDR400_5", { "", "", -1 } },
            { "sab_piper5", { "", "", -1 } },
            { "sab_piper4", { "", "", -1 } },
            { "sab_piper2", { "", "", -1 } },
            { "sab_piper", { "", "", -1 } },
            { "sab_piper3", { "", "", -1 } },
            { "uns_skymaster_civ_yellow", { "", "", -1 } },
            { "uns_skymaster_civ_red", { "", "", -1 } },
            { "uns_skymaster_civ_gold", { "", "", -1 } },
            { "uns_skymaster_civ", { "", "", -1 } },
            { "uns_skymaster_civ_blue", { "", "", -1 } },
            { "IVORY_T6A_1", { "", "", -1 } },
            { "GNT_C185", { "", "", -1 } },
            { "GNT_C185F", { "", "", -1 } },
            { "sab_curtissjn4_9", { "", "", -1 } },
            { "sab_do228_3", { "", "", -1 } },
            { "sab_do228_3_1", { "", "", -1 } },
            { "sab_do228_3_2", { "", "", -1 } },
            { "Sab_Sikorsky38_3", { "", "", -1 } },
            { "Sab_Sikorsky38_2", { "", "", -1 } },
            { "uns_c1a2cargo", { "", "", -1 } },
			{ "CUP_C_C47_CIV", { "", "", -1 } },
            { "IVORY_ERJ135_1", { "", "", -1 } },
            { "ivory_yak42d_1", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "UNS_sampan_fish2", { "", "", -1 } },
			{ "UNS_Sampan_Transport", { "", "", -1 } },
			{ "UNS_sampan_village", { "", "", -1 } },
            { "UNS_sampan_supply", { "", "", -1 } },
            { "UNS_sampan_cargo", { "", "", -1 } },
			{ "UNS_sampan_fish1", { "", "", -1 } },
			{ "UNS_sampan_large", { "", "", -1 } },
			{ "C_Scooter_Transport_01_F", { "", "", -1 } },
			{ "A3L_JetSki_Yellow", { "", "", -1 } },
			{ "C_Rubberboat", { "", "", -1 } },
			{ "C_Boat_Civil_01_F", { "", "", -1 } },
			{ "CL3_Basic_Fishing_green", { "", "", -1 } },
			{ "CL3_Basic_Fishing_grey", { "", "", -1 } },
			{ "CL3_Basic_Fishing_blue", { "", "", -1 } },
			{ "CUP_C_Fishing_Boat_Chernarus", { "", "", -1 } },
			{ "A3L_Tug", { "", "", -1 } },
			//{ "D41_Trawler", { "", "", -1 } },
			{ "A3L_Ship", { "", "", -1 } },
			{ "A3L_SpeedYacht", { "", "", -1 } },
			{ "cl3_phoenixyacht", { "", "", -1 } },
			{ "POP_Speed_yatch", { "", "", -1 } },
			{ "A3L_CarCarrier", { "", "", -1 } },
			//{ "A3PL_Yacht", { "", "", -1 } },
			//{ "A3PL_Yacht_Pirate", { "", "", -1 } }
        };
    };

     class civ_trawler {
        side = "civ";
        vehicles[] = {
			{ "D41_Trawler", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "shounka_buggy_rouge", { "", "", -1 } },
			{ "shounka_buggy_bleufonce", { "", "", -1 } },
			{ "shounka_buggy_rose", { "", "", -1 } },
			{ "shounka_buggy_violet", { "", "", -1 } },
			{ "shounka_buggy_grise", { "", "", -1 } },
			{ "shounka_buggy_noir", { "", "", -1 } },
			{ "shounka_buggy_orange", { "", "", -1 } },
			{ "cg_jeep_blinde_rouge", { "", "", -1 } },
			{ "cg_jeep_blinde_rose", { "", "", -1 } },
			{ "cg_jeep_blinde_orange", { "", "", -1 } },
			{ "cg_jeep_blinde_noir", { "", "", -1 } },
			{ "cg_jeep_blinde_bleu", { "", "", -1 } },
			{ "cg_jeep_blinde_bleufonce", { "", "", -1 } },
			{ "cg_jeep_blinde_violet", { "", "", -1 } },
			{ "cg_jeep_blinde_white", { "", "", -1 } },
			{ "cg_jeep_blinde_vert", { "", "", -1 } },
			{ "cg_jeep_blinde_grise", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "A3L_CVPILBFD", { "", "", -1 } },
            { "Jonzie_Ambulance", { "", "", -1 } },
            { "mrshounka_vsav_smur", { "", "", -1 } },
            { "cnp_Defender", { "", "", -1 } },
            { "gek_s60_medic", { "", "", -1 } },
            { "GeK_TLC100_Medic", { "", "", -1 } },
            { "DAR_ExplorerMedic", { "", "", -1 } },
            { "mercedes_sprinter_ambulancia_F", { "", "", -1 } },
            { "DAR_TahoeEMS", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "Mrshounka_corbillard_c", { "", "", -1 } },
            { "A3L_Stretcher_F", { "", "", -1 } },
            { "sfp_wheelchair", { "", "", -1 } },
            { "A3L_LadderTruck", { "", "", -1 } },
            { "A3PL_Engine", { "", "", -1 } },
            { "RR_Firetruck", { "", "", -1 } },
            { "cg_merc_atego_firetruck_reg", { "", "", -1 } },
            { "daf_firetruck", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_medicLevel", "SCALAR", 2 } },
			{ "SC_412", { "life_medicLevel", "SCALAR", 3 } },
			{ "SC_412_civ", { "life_medicLevel", "SCALAR", 3 } },
			{ "SCmod_cougar", { "life_medicLevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F", { "life_medicLevel", "SCALAR", 5 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
 			{ "DAR_ImpalaPolice", { "life_coplevel", "SCALAR", 1 } },
            { "GeK_Renault_Trafic_Police", { "life_coplevel", "SCALAR", 1 } },
			{ "A3L_SuburbanUM", { "life_coplevel", "SCALAR", 2 } },
			{ "A3L_Suburban", { "life_coplevel", "SCALAR", 2 } },
			{ "ivory_wrx_slicktop", { "life_coplevel", "SCALAR", 2 } },
			{ "ivory_wrx_marked", { "life_coplevel", "SCALAR", 2 } },
            { "ivory_wrx_unmarked", { "life_coplevel", "SCALAR", 2 } },
			{ "77FuryCop", { "life_coplevel", "SCALAR", 2 } },
			{ "A3L_CVPIUCBlack", { "life_coplevel", "SCALAR", 2 } },
			{ "A3L_CVPIUC", { "life_coplevel", "SCALAR", 2 } },
			{ "A3L_TahoeUC", { "life_coplevel", "SCALAR", 2 } },
			{ "DAR_TahoePoliceDet", { "life_coplevel", "SCALAR", 2 } },
			{ "cg_h2_sert", { "life_coplevel", "SCALAR", 2 } },
            { "Navara_Policia", { "life_coplevel", "SCALAR", 2 } },
            { "GeK_Yukon_Police", { "life_coplevel", "SCALAR", 2 } },
			//{ "GeK_TLC100_Police", { "life_coplevel", "SCALAR", 2 } },
			{ "cnp_Iveco_GOIT", { "life_coplevel", "SCALAR", 2 } },
			{ "shounka_a3_suburbangign", { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 6 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 7 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
			{ "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 2 } },
			{ "I_C_Boat_Transport_02_F", { "life_coplevel", "SCALAR", 2 } },
			{ "CUP_B_Zodiac_USMC", { "life_coplevel", "SCALAR", 2 } }
        };

    };

    class adac {
        side = "med";
        vehicles[] = {
			{ "A3L_Towtruck", { "", "", -1 } },
			{ "Jonzie_Tow_Truck", { "", "", -1 } },
			{ "shouka_a3_spr_civ_orange", { "", "", -1 } },
			{ "B_Truck_01_mover_F", { "", "", -1 } },
			{ "B_Truck_01_ammo_F", { "", "", -1 } },
			{ "O_Truck_03_repair_F", { "", "", -1 } },
			{ "O_Truck_03_fuel_F", { "", "", -1 } },
			{ "A3L_GMC_Van_Yellow", { "", "", -1 } },
			{ "Shounka_a3_spr_civ_jaune", { "", "", -1 } },
			{ "A3L_EvoX", { "", "", -1 } },
			{ "GeK_TLC100", { "", "", -1 } }
        };
    };

    class adacAir {
        side = "med";
        vehicles[] = {
			{ "ASL_AS350_1", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

	////DLC

    /*
    ################################## Gebrauchtwagenhändler ####################################
    */
    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class O_G_Quadbike_01_F {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 500;
        textures[] = {};
    };

    class RDS_Lada_Civ_03 {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

    class RDS_Lada_Civ_04 {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

    class RDS_Lada_Civ_02 {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

    class RDS_Lada_Civ_01 {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

    class RDS_Gaz24_Civ_02 {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };

    class RDS_Gaz24_Civ_01 {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };

    class RDS_Gaz24_Civ_03 {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };

    class RDS_Octavia_Civ_01 {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3000;
        textures[] = {};
    };

    class RDS_Golf4_Civ_01 {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3000;
        textures[] = {};
    };

    class Jonzie_Mini_Cooper {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3500;
        textures[] = {};
    };

    class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4500;
        textures[] = {};
    };

    class cl3_golf_mk2_aqua {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_mk2_burgundy {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_mk2_blue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_mk2_black {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_learner_white {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_mk2_camo {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_golf_mk2_camo_urban {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_yellow {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_black {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_blue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_aqua {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_babyblue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_babypink {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_red {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_burgundy {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_cardinal {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_dark_green {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_gold {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_green {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_grey {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_lavender {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_light_blue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_light_yellow {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_lime {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_marina_blue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_navy_blue {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_orange {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_purple {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_sand {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_silver {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_camo {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_camo_urban {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class cl3_civic_vti_white {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

	class cl3_civic_vti_violet {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class ivory_tractor {
        vItemSpace = 350;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

    class ivory_tractor2 {
        vItemSpace = 260;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = {};
    };
	class CUP_B_M1030 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400;
        textures[] = {};
    };
	class CUP_C_Skoda_White_CIV {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
	class CUP_C_Skoda_Blue_CIV {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
	class CUP_C_Skoda_Green_CIV {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
	class CUP_C_Skoda_Red_CIV {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
	class CUP_C_Datsun {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };
	class CUP_C_Datsun_4seat {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };
	class CUP_C_Datsun_Covered {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };
	class CUP_C_Datsun_Plain {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };
	class CUP_C_Datsun_Tubeframe {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };
	class CUP_C_Golf4_black_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class CUP_C_Golf4_blue_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class CUP_C_Golf4_green_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class CUP_C_Golf4_red_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class CUP_C_Golf4_white_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class CUP_C_Golf4_yellow_Civ {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {};
    };
	class VVV_Abarth_695 {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4000;
        textures[] = {};
    };
	class VVV_Chevrolet_C10 {
        vItemSpace = 140;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {};
    };

	   /*
    ################################## Bikes ####################################
    */
    class shounka_harley_a3 {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class shounka_harley_a3_noir {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class shounka_harley_a3_bleu {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class shounka_harley_a3_rouge {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class shounka_harley_a3_lolz {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_chopper_gold {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_yellow {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_black {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_blue {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_aqua {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_babyblue {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_babypink {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_red {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_burgundy {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_cardinal {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_dark_green {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_gold {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_green {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_grey {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_lavender {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_light_blue {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_light_yellow {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_lime {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_marina_blue {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_navy_blue {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_orange {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_purple {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_sand {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_silver {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_camo {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_camo_urban {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_white {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_violet {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_flame {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_flame1 {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };

	class cl3_enduro_flame2 {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = {};
    };
    /*
    ################################## Sportwagen ####################################
    */
	class ADM_1964_Impala {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

	class ADM_1969_Camaro {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

	class ADM_1969_Charger {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

	class SIG_SuperBeeB {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_SuperBeeG {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_SuperBeeL {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_SuperBeeM {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_SuperBee {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_SuperBeeY {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_Magnums {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_Hubcaps {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_Hcode {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class SIG_Roadrunner {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class GeK_Cadillac_Fleetwood_Brougham_85 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class GeK_ElCamino {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

	class Jonzie_Datsun_Z432 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class ivory_supra_tuned {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class shounka_gt {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_noir {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_bleufonce {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_rouge {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_jaune {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_rose {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_grise {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_violet {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Mrshounka_mercedes_190_p_orange {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Jonzie_Galant {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class Jonzie_30CSL {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class shelbycobra_car_azul {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class shelbycobra_car_blanco {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class ivory_190e {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class ivory_gt500 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class VVV_Alfa_Romeo_Spider_Duetto_160 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class VVV_Chevrolet_Camaro_RS {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class ivory_supra {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class VVV_Chevrolet_Impala {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class VVV_Cadillac_DTS {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };
	class ivory_e36 {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

    /*
    ################################## Fähre ####################################
    */

	class ffaa_ar_lcm {
        vItemSpace = 100;
        licenses[] = { {"boat","faehre"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

	   /*
    ################################## skateladen ####################################
    */

	class cl_skatea {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateb {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatec {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skated {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatee {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatef {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateg {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateh {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatei {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatej {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatek {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatel {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatem {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skaten {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateo {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatep {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateq {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skater {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skates {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatet {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skateu {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatev {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatex {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };
	class cl_skatey {
        vItemSpace = 5;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250;
        textures[] = {};
    };

    /*
    ################################## Trucks/Busses ####################################
    */
    class O_G_Van_01_transport_F {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class O_G_Van_01_fuel_F {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class ADM_GMC_Vandura {
        vItemSpace = 360;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

    class uns_nvatruck_open {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };

    class uns_nvatruck {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };

    class C_Truck_02_transport_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class C_Truck_02_covered_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class I_Truck_02_ammo_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 600;
        vFuelSpace = 9999099;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class O_T_Truck_03_transport_ghex_F {
        vItemSpace = 800;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
    class O_Truck_03_transport_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };

    class O_T_Truck_03_ammo_ghex_F {
        vItemSpace = 800;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	class O_Truck_03_ammo_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };

    class O_T_Truck_03_covered_ghex_F {
        vItemSpace = 800;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	class O_Truck_03_covered_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };

    class O_T_Truck_03_fuel_ghex_F {
        vItemSpace = 800;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	class O_Truck_03_fuel_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };

    class O_T_Truck_03_device_ghex_F {
        vItemSpace = 500;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 240000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 900;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 900;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class B_Truck_01_covered_F {
        vItemSpace = 900;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 900;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 900;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class A3L_Dumptruck {
        vItemSpace = 1050;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 140000;
        textures[] = { };
    };

    class shounka_a3_mantgs_2_2_in {
        vItemSpace = 1200;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 85000;
        textures[] = { };
    };

    class Jonzie_Box_Truck {
        vItemSpace = 1350;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 95000;
        textures[] = { };
    };

    class Jonzie_Tanker_Truck {
        vItemSpace = 1350;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 95000;
        textures[] = { };
    };

    class Jonzie_Log_Truck {
        vItemSpace = 1350;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 95000;
        textures[] = { };
    };

    class cl3_mackr_del_american {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class cl3_mackr_del_green_white {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class cl3_mackr_del_forest_camo {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class cl3_mackr_del_black_gold {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class max_bus2 {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class max_bus {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class max_bus3 {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class A3L_SchoolBus {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class A3L_Bus {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

	class pop_camionbasura {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };
	class DAR_4X4 {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	class DAR_MK23 {
        vItemSpace = 725;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };
	class DAR_MK27 {
        vItemSpace = 1100;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	class DAR_MK27T {
        vItemSpace = 1100;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	class CUP_O_V3S_Open_TKA {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 36000;
        textures[] = { };
    };
	class CUP_O_V3S_Covered_TKA {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 36000;
        textures[] = { };
    };
	class CUP_O_V3S_Repair_TKA {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 36000;
        textures[] = { };
    };
	class CUP_O_V3S_Refuel_TKA {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 36000;
        textures[] = { };
    };
	class CUP_C_Ural_Open_Civ_01 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_C_Ural_Civ_01 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_C_Ural_Civ_03 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_C_Ural_Open_Civ_03 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_C_Ural_Open_Civ_02 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_C_Ural_Civ_02 {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_Ural_Empty_CDF {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_Ural_Open_CDF {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_Ural_CDF {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_Ural_Refuel_CDF {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_Ural_Repair_CDF {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 44000;
        textures[] = { };
    };
	class CUP_B_MTVR_USMC {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	class CUP_B_MTVR_Ammo_USMC {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	class CUP_B_MTVR_Refuel_USMC {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	class CUP_B_MTVR_Repair_USMC {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {"driver"}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
    /*
    ################################## Offroader ####################################
    */
	class C_Offroad_02_unarmed_F {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class C_Offroad_02_unarmed_F_black {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class C_Offroad_02_unarmed_F_green {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class C_Offroad_02_unarmed_F_orange {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class C_Offroad_02_unarmed_F_blue {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class A3L_JeepGrayTan {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class A3L_JeepTanTan {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepRedBlack {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepRedTan {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepGrayBlack {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepGreenBlack {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepTanBlack {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepGreenTan {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_Jeep {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class A3L_JeepWhiteBlack {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

	class I_mas_cars_UAZ_Unarmed {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class O_mas_cars_UAZ_Unarmed {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class cl3_range_rover_black {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class cl3_range_rover_blue {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class cl3_range_rover_violet {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class cl3_range_rover_dark_green {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class cl3_range_rover_camo {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class cl3_range_rover_camo_urban {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 26000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_grise {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_bleufonce {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_noir {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_jaune {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_violet {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class Mrshounka_hummer_civ_rose {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 28000;
        textures[] = { };
    };

	class shounka_h2_grise {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2_bleufonce {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2 {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2_noir {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2_jaune {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2_violet {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class shounka_h2_rose {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class max_H3_black {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 32000;
        textures[] = { };
    };

	class max_H3_urbancamo {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

	class max_H3_vegeta {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

	class B_mas_cars_LR_Unarmed {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

	class I_mas_cars_LR_soft_Unarmed {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class CUP_C_UAZ_Open_TK_CIV {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class CUP_C_UAZ_Unarmed_TK_CIV {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class CUP_C_SUV_CIV {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class CUP_C_LR_Transport_CTK {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class VVV_Cadillac_Escalade {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class ivory_suburban {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	class VVV_Chevrolet_Blazer {
        vItemSpace = 300;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
    /*
    ################################## Vans/Pickups ####################################
    */
	class ADM_Ford_F100 {
        vItemSpace = 360;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 13000;
        textures[] = { };
    };

	class ADM_GMC_Vandura {
        vItemSpace = 450;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

	class A3L_F350Black {
        vItemSpace = 480;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

	class A3L_F350Blue {
        vItemSpace = 480;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

	class A3L_F350Red {
        vItemSpace = 480;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

	class A3L_F350White {
        vItemSpace = 480;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

	class Jonzie_Raptor {
        vItemSpace = 480;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 29000;
        textures[] = { };
    };
    /*
    ################################## Rebellenfahrzeuge ####################################
    */
	class shounka_buggy_rouge {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_bleufonce {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_rose {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_violet {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_grise {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_noir {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class shounka_buggy_orange {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };

	class cg_jeep_blinde_rouge {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_rose {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_orange {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_noir {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_bleu {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_bleufonce {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_violet {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_white {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_vert {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class cg_jeep_blinde_grise {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };

	class max_AJ {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class max_suv_armored {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
    /*
    ################################## Boote ####################################
    */
	class UNS_sampan_fish2 {
        vItemSpace = 40;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 800;
        textures[] = { };
    };

	class UNS_Sampan_Transport {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1200;
        textures[] = { };
    };

	class UNS_sampan_village {
        vItemSpace = 120;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1200;
        textures[] = { };
    };

	class UNS_sampan_supply {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1200;
        textures[] = { };
    };

	class UNS_sampan_cargo {
        vItemSpace = 170;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1600;
        textures[] = { };
    };

	class UNS_sampan_fish1 {
        vItemSpace = 170;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = { };
    };

	class UNS_sampan_large {
        vItemSpace = 200;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1400;
        textures[] = { };
    };

	class C_Scooter_Transport_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 13000;
        textures[] = { };
    };

	class A3L_JetSki_Yellow {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 13000;
        textures[] = { };
    };

	class C_Rubberboat {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 200;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 24000;
        textures[] = { };
    };

	class CL3_Basic_Fishing_green {
        vItemSpace = 350;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

	class CL3_Basic_Fishing_grey {
        vItemSpace = 350;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

	class CL3_Basic_Fishing_blue {
        vItemSpace = 350;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

	class CUP_C_Fishing_Boat_Chernarus {
        vItemSpace = 450;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 38000;
        textures[] = { };
    };

	class A3L_Tug {
        vItemSpace = 300;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };

	class D41_Trawler {
        vItemSpace = 700;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 85000;
        textures[] = { };
    };

	class A3L_Ship {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 205000;
        textures[] = { };
    };

	class A3L_SpeedYacht {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 305000;
        textures[] = { };
    };

	class cl3_phoenixyacht {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 305000;
        textures[] = { };
    };

	class POP_Speed_yatch {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };

	class A3L_CarCarrier {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

	class A3PL_Yacht {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };

	class A3PL_Yacht_pirate {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };

    /*
    ################################## Luftfahrzeuge Helis ####################################
    */

	class uns_H13_medevac_CAV {
        vItemSpace = 30;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

	class uns_H13_amphib_CAV {
        vItemSpace = 30;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

	class C_Heli_Light_01_civil_F {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_black_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_blue_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_blueline_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_elliptical_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_jeans_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_green_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_sunset_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class civ_wave_mh9 {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class ivory_b206 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class ivory_b206_news {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class civ_blue_po30 {
        vItemSpace = 120;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

	class civ_black_po30 {
        vItemSpace = 120;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

	class uns_ch34_sog {
        vItemSpace = 160;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 160000;
        textures[] = { };
    };

	class uns_ch34_army {
        vItemSpace = 160;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 160000;
        textures[] = { };
    };

	class UH1C {
        vItemSpace = 200;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 210000;
        textures[] = { };
    };

	class UH1Y_FFV {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 260000;
        textures[] = { };
    };

	class I_mas_MI8 {
        vItemSpace = 300;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = { };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 350;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 420000;
        textures[] = { };
    };

	class SCmod_cougar_civ {
        vItemSpace = 400;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

	class SCmod_cougar_civ1 {
        vItemSpace = 400;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

	class SCmod_cougar_civ2 {
        vItemSpace = 400;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };
    /*
    ################################## Luftfahrzeuge Flug ####################################
    */
	class sab_camel_pro {
        vItemSpace = 40;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };

	class sab_FAAllegro_4 {
        vItemSpace = 60;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

	class sab_FAAllegro {
        vItemSpace = 60;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

	class sab_FAAllegro_3 {
        vItemSpace = 60;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

	class sab_FAAllegro_5 {
        vItemSpace = 60;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

	class sab_RobinDR400 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class sab_RobinDR400_4 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class sab_RobinDR400_2 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class sab_RobinDR400_3 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class sab_RobinDR400_5 {
        vItemSpace = 80;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };

	class sab_piper5 {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

	class sab_piper4 {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

	class sab_piper2 {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

	class sab_piper {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

	class sab_piper3 {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

	class uns_skymaster_civ_yellow {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class uns_skymaster_civ_red {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class uns_skymaster_civ_gold {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class uns_skymaster_civ {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class uns_skymaster_civ_blue {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class IVORY_T6A_1 {
        vItemSpace = 130;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };

	class GNT_C185 {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = { };
    };

	class GNT_C185F {
        vItemSpace = 150;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 155000;
        textures[] = { };
    };

	class sab_curtissjn4_9 {
        vItemSpace = 180;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 180000;
        textures[] = { };
    };

	class sab_do228_3 {
        vItemSpace = 220;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 220000;
        textures[] = { };
    };

	class sab_do228_3_1 {
        vItemSpace = 220;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 220000;
        textures[] = { };
    };

	class sab_do228_3_2 {
        vItemSpace = 220;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 220000;
        textures[] = { };
    };

	class Sab_Sikorsky38_3 {
        vItemSpace = 350;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

	class Sab_Sikorsky38_2 {
        vItemSpace = 350;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

	class uns_c1a2cargo {
        vItemSpace = 500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

	class CUP_C_C47_CIV {
        vItemSpace = 600;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = { };
    };

	class IVORY_ERJ135_1 {
        vItemSpace = 1000;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };

	class ivory_yak42d_1 {
        vItemSpace = 1500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };
	class CUP_C_Mi17_Civilian_RU {
        vItemSpace = 475;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = { };
    };
	class CUP_C_MI6T_RU {
        vItemSpace = 800;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1300000;
        textures[] = { };
    };



    /*
    ################################## Copcars ####################################
    */
	class A3L_CVPIFPBPD {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIFPBLBPD {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIFPBCSO {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIFPBLBCSO {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIFPBFG {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIFPBLBFG {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class cg_cvpitrooper {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_TahoeLBPB {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_TahoeCSOLBPB {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_SuburbanUM {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_SuburbanCSO {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_Suburban {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class ivory_wrx_slicktop {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class ivory_wrx_marked {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_jailBus {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_GMC_Van_Swat {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class 77FuryCop {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUCBlack {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUCWhite {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUCPink {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUCBlue {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUCRed {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_CVPIUC {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_GrandCaravanUC {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_GrandCaravanUCBlack {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_TahoeUC {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class DAR_TahoePoliceDet {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class ivory_wrx_unmarked {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class cg_h2_sert {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class GeK_TLC100_Police {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class cnp_Iveco_GOIT {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class GeK_Renault_Trafic_Police {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class CNP_mercedes_sprinter_UIP_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class shounka_a3_suburbangign {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };


//##############################################

	class A3L_Towtruck {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

	class max_towtruck {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

	class Jonzie_Tow_Truck {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

	class shouka_a3_spr_civ_orange {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

	class GeK_TLC100 {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

	class B_Truck_01_mover_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };
	class B_Truck_01_ammo_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };
	class O_Truck_03_repair_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };
	class O_Truck_03_fuel_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_GMC_Van_Yellow {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };
	class A3L_EvoX {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"adac"}, {""} };
        price = 5000;
        textures[] = { };
    };

//################## Craftbare #######################

	class VVV_Aston_Martin_1964_DB5 {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class VVV_Chevrolet_Bel_Air {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class VVV_Chevrolet_Corvette_C1 {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class VVV_Cadillac_Eldorado {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class ivory_supra_topsecret {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class CUP_B_MV22_USMC {
        vItemSpace = 550;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class CUP_B_MV22_VIV_USMC {
        vItemSpace = 550;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class DEGA_BAF_CH47F_Unarmed {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	class CUP_B_C130J_Cargo_GB {
        vItemSpace = 2000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	class CUP_I_C130J_AAF {
        vItemSpace = 2000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	class CUP_I_C130J_Cargo_AAF {
        vItemSpace = 2000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	class CUP_B_AW159_Unarmed_GB {
        vItemSpace = 170;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	class CUP_B_SA330_Puma_HC1_BAF {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	class CUP_B_HMMWV_Unarmed_USMC {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	class CUP_B_Merlin_HC3_GB {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	class CUP_B_C47_USA {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

//####################################################

	class SC_412 {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {"mAir"}, {""} };
        price = 5000;
        textures[] = {};
    };

	class SCmod_cougar {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {"mAir"}, {""} };
        price = 5000;
        textures[] = {};
    };

//####################################################
	class O_T_VTOL_02_infantry_F {
        vItemSpace = 950;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
        textures[] = {};
    };

	class B_T_VTOL_01_infantry_F {
        vItemSpace = 1850;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 335000;
        textures[] = {};
    };

    class B_T_VTOL_01_vehicle_F {
          vItemSpace = 350;
          licenses[] = { {""}, {"aviation"}, {""}, {""} };
          price = 335000;
          textures[] = {};
      };
    class O_T_LSV_02_armed_F {
          vItemSpace = 150;
          licenses[] = { {""}, {""}, {""}, {""} };
          price = 203500;
          textures[] = {};
    };

	class B_T_UAV_03_F {
        vItemSpace = 50;
        licenses[] = { {""}, {"aviation"}, {""}, {""} };
        price = 9500;
        textures[] = {};
    };

	class B_G_Boat_Transport_02_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

	class O_G_Boat_Transport_02_F {
        vItemSpace = 250;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };

  class C_Offroad_02_unarmed_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_F {
          vItemSpace = 150;
          licenses[] = { {""}, {""}, {""}, {""} };
          price = 7500;
          textures[] = {};
    };

	class B_T_LSV_01_unarmed_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {};
    };

	class B_T_LSV_01_armed_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 22500;
        textures[] = {};
    };

	class Q_T_LSV_02_unarmed_arid_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = {};
    };

	class C_Plane_Civil_01_F {
        vItemSpace = 550;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 22500;
        textures[] = {};
    };

	class C_Plane_Civil_01_racing_F {
        vItemSpace = 450;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

	class C_Scooter_Transport_02_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 500;
        textures[] = {};
    };

	/////DLC

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 500;
        textures[] = { };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 14000;
        textures[] = {
            { "Police", "cop", {
              "textures\Cop\Vehicles\copHellcat.paa"
            } }
        };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 300;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 35000;
        textures[] = {
            { "Police", "cop", {
              "textures\Cop\Vehicles\CopGhostBody.jpg",
              "textures\Cop\Vehicles\CopGhostTail.jpg"
            } }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"swat"}, {""}, {""} };
        price = 55000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"swat"}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 275;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 7500;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 1000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 485;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 550;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 1500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 2500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 165;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 105;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_MRAP_02_hmg_F {
        vItemSpace = 115;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 2000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 110;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 165;
        assurPrice[] = { 1000, 1000, 1000, 1000 };
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Trump", "civ", {
                "textures\Civ\Vehicles\OffTRUMP.jpg"
            } },
            { "Shrek", "civ", {
                "textures\Civ\Vehicles\OffSHREK.jpg"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\CopOFF.paa"
            } },
            { "Medical", "med", {
                "textures\Med\Vehicles\offroadMED.paa"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Sanic", "civ", {
                "textures\Civ\Vehicles\HatchSANIC.jpg"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\copHATCH.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 450;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\CopQUAD.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1350;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4500;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Asiimov", "civ", {
                "textures\Civ\Vehicles\suvASIIMOV.paa"
            } },
            { "Hyperbeast", "civ", {
                "textures\Civ\Vehicles\suvHYPER.paa"
            } },
            { "Nyan", "civ", {
                "textures\Civ\Vehicles\suvNYAN.jpg"
            } },
            { "Sticker", "civ", {
                "textures\Civ\Vehicles\suvSTICKER.paa"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\CopSUV.paa"
            } },
            { "Medical", "med", {
                "textures\Med\Vehicles\suvMED.paa"
            } },
            { "Police2", "cop", {
                "textures\Cop\Vehicles\CopSuv2.paa"
            } },
            { "White", "civ", {
                "textures\Civ\Vehicles\suv_white.jpg"
            } },
            { "Poly", "civ", {
                "textures\Civ\Vehicles\suv_poly.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {
            { "Police", "cop", {
                "textures\Cop\Vehicles\CopHUNTERFront.paa",
                "textures\Cop\Vehicles\CopHUNTERback.paa"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 27500;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class I_Heli_Transport_02_F {
       vItemSpace = 930;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 157500;
       textures[] = {};
   };

   class O_Heli_Transport_04_Box_F {
      vItemSpace = 780;
      licenses[] = { {""}, {""}, {""}, {""} };
      price = 120500;
      textures[] = {};
  };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {""}, {"cAir"}, {"mAir"}, {""} };
        price = 25000;
        textures[] = {
            { "Police", "cop", {
                "textures\Cop\Vehicles\CopHeli.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS", "med", {
                "textures\Med\Vehicles\hummingMED.jpg"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 25000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 310;
        licenses[] = { {"" }, {"cAir"}, {"mAir"}, {""} };
        price = 75000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 110;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 17500;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };
};
//ommsen