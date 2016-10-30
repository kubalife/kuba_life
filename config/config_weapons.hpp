/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice, Level }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {                     /////           GUN             /////
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "uns_ppk", "", 4000, 500,"" },
            { "uns_p64", "", 4000, 750,"" },
            { "uns_makarov", "", 4000, 750,"" },
            { "uns_coltcmdr", "", 5000, 750,"" },
            { "uns_m1911", "", 5000, 750,"" },
            { "uns_APS", "", 6000, 750,"" },
            { "uns_Tt33", "", 6000, 750,"" },
			{ "arifle_sdar_F", "", 50000, 7500,"" }
        };
        mags[] = {
            { "uns_ppkmag", "", 100 },
            { "uns_6Rnd_czak", "", 100 },
            { "uns_makarovmag", "", 100 },
            { "uns_coltcmdrmag", "", 100 },
            { "uns_m1911mag", "", 100 },
            { "uns_20Rnd_APS", "", 100 },
            { "uns_tokarevmag", "", 100 },
			{ "20Rnd_556x45_UW_mag", "", 450 }
        };
        accs[] = {
            { "acc_flashlight", "", 100 }
        };
    };

    class donator1 {                     /////           Donator 1             /////
        name = "Nicht gewollt";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 1, "Gibt es nicht!" };
        items[] = {
            { "FirstAidKit", "", 250, 65,"" }
        };
        mags[] = {
        };
        accs[] = {
        };
    };

    class donator2 {                     /////           Donator 2              /////
        name = "Nicht gewollt";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 2, "Gibt es nicht!" };
        items[] = {
            { "FirstAidKit", "", 250, 65,"" }
        };
        mags[] = {
        };
        accs[] = {
        };
    };

    class donator3 {                     /////           Donator 3             /////
        name = "Nicht gewollt";
        side = "civ";
        license = "rebel";
        level[] = { "life_donorlevel", "SCALAR", 3, "Gibt es nicht!" };
        items[] = {
            { "FirstAidKit", "", 250, 65,"" }
        };
        mags[] = {
        };
        accs[] = {
        };
    };

    class rebel {                        /////           Rebel             /////
        name = "Almador's Waffenladen";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ACE_CableTie", "", 300, -1,"" },
            { "uns_ppk", "", 4000, -1,"" },
            { "uns_p64", "", 40000, -1,"" },
            { "uns_makarov", "", 4000, -1,"" },
            { "uns_coltcmdr", "", 5000, -1,"" },
            { "uns_m1911", "", 5000, -1,"" },
            { "uns_APS", "", 6000, -1,"" },
            { "uns_Tt33", "", 6000, -1,"" },
            { "uns_pm63", "", 20000, 500,"" },
            { "uns_mat49", "", 24000, -1,"" },
            { "uns_m45", "", 24000, -1,"" },
            { "uns_uzif", "", 24000, -1,"" },
            { "uns_thompson", "", 28000, -1,"" },
            { "uns_m3a1", "", 28000, -1,"" },
            { "uns_PPS52", "", 30000, -1,"" },
            { "uns_PPS43", "", 30000, -1,"" },
            { "uns_ppsh41", "", 30000, -1,"" },
            { "uns_sten", "", 30000, -1,"" },
            { "uns_Sterling", "", 30000, -1,"" }
        };
        mags[] = {
            { "uns_ppkmag", "", 100 },
            { "uns_6Rnd_czak", "", 100 },
            { "uns_makarovmag", "", 100 },
            { "uns_coltcmdrmag", "", 100 },
            { "uns_m1911mag", "", 100 },
            { "uns_20Rnd_APS", "", 100 },
            { "uns_tokarevmag", "", 100 },
            { "uns_25Rnd_pm", "", 250 },
            { "uns_mat49mag", "", 250 },
            { "uns_m45mag", "", 250 },
            { "uns_32Rnd_uzi", "", 250 },
            { "uns_thompsonmag_30", "", 250 },
            { "uns_m3a1mag", "", 250 },
            { "uns_k50mag", "", 250 },
            { "uns_k50mag", "", 250 },
            { "uns_ppshmag", "", 250 },
            { "uns_stenmag", "", 250 },
            { "uns_mk4mag", "", 250 },
            { "uns_30rnd_kurtz_stg", "", 500 }
        };
        accs[] = {
            { "acc_flashlight", "", 100 }
        };
    };

    class gang {                         /////           Gang             /////
        name = "Gangversteck Waffenladen";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ACE_CableTie", "", 300, -1,"" },
            { "uns_ppk", "", 4000, -1,"" },
            { "uns_p64", "", 40000, -1,"" },
            { "uns_makarov", "", 4000, -1,"" },
            { "uns_coltcmdr", "", 5000, -1,"" },
            { "uns_m1911", "", 5000, -1,"" },
            { "uns_APS", "", 6000, -1,"" },
            { "uns_Tt33", "", 6000, -1,"" },
            { "uns_pm63", "", 20000, 50,"" }
        };
        mags[] = {
            { "uns_ppkmag", "", 100 },
            { "uns_6Rnd_czak", "", 100 },
            { "uns_makarovmag", "", 100 },
            { "uns_coltcmdrmag", "", 100 },
            { "uns_m1911mag", "", 100 },
            { "uns_20Rnd_APS", "", 100 },
            { "uns_tokarevmag", "", 100 },
            { "uns_25Rnd_pm", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 100 }
        };
    };

    class bandit {                       /////           Bandit             /////
        name = "Banditen Waffenladen";
        side = "civ";
        license = "bandit";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ACE_CableTie", "", 300, -1,"" },
            { "uns_ppk", "", 4000, -1,"" },
            { "uns_p64", "", 4000, -1,"" },
            { "uns_makarov", "", 4000, -1,"" },
            { "uns_coltcmdr", "", 5000, -1,"" },
            { "uns_m1911", "", 5000, -1,"" },
            { "uns_APS", "", 6000, -1,"" },
            { "uns_Tt33", "", 6000, -1,"" },
            { "uns_pm63", "", 20000, 500,"" }
        };
        mags[] = {
            { "uns_ppkmag", "", 100 },
            { "uns_6Rnd_czak", "", 100 },
            { "uns_makarovmag", "", 100 },
            { "uns_coltcmdrmag", "", 100 },
            { "uns_m1911mag", "", 100 },
            { "uns_20Rnd_APS", "", 100 },
            { "uns_tokarevmag", "", 100 },
            { "uns_25Rnd_pm", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 100 }
        };
    };

    //Basic Shops
    class genstore {                         /////           General Store             /////
        name = "Kubanische Werkzeuge";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 50, 25,"" },
            { "ItemGPS", "", 100, 45,"" },
            { "ItemMap", "", 50, 35,"" },
            { "ItemCompass", "", 50, 25,"" },
            { "ItemWatch", "", 5, -1,"" },
            { "NVGoggles", "", 200, 98,"" },
			{ "TRYK_Shemagh_TAN_NV", "", 200, 98,"" },
			{ "TRYK_Shemagh_MESH_NV", "", 200, 98,"" },
			{ "TRYK_Shemagh_G_NV", "", 200, 98,"" },
			{ "TRYK_Shemagh_WH_NV", "", 200, 98,"" },
            { "ACE_EarPlugs", "", 10, 5,"" },
            { "tf_fadak", "", 150, 150,"" },
            //{ "FirstAidKit", "", 150, 65,"" },
            {""},
            { "ACE_fieldDressing", "", 10, 5,"" },
            { "ACE_elasticBandage", "", 10, 5,"" },
            { "ACE_packingBandage", "", 10, 5,"" },
            {""},
            { "Chemlight_red", "", 30, -1,"" },
            { "Chemlight_yellow", "", 30, 10,"" },
            { "Chemlight_green", "", 30, 10,"" },
            { "Chemlight_blue", "", 30, 10,"" },
            { "ACE_HandFlare_White", "", 50, 10,"" },
            { "ACE_HandFlare_Red", "", 50, 10,"" },
            { "ACE_HandFlare_Green", "", 50, 10,"" },
            { "ACE_HandFlare_Yellow", "", 50, 10,"" }
			};
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {                      /////           Tankstelle             /////
        name = "Kuba Fuel Shop";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 50, -1,"" },
            { "ItemGPS", "", 100, 45,"" },
            { "ItemMap", "", 50, 35,"" },
            { "ItemCompass", "", 50, 25,"" },
            { "ItemWatch", "", 5, -1,"" },
            { "NVGoggles", "", 200, 98,"" },
            { "ACE_EarPlugs", "", 10, 5,"" },
            { "tf_fadak", "", 150, 150,"" },
            //{ "FirstAidKit", "", 150, 65,"" },
            {""},
            { "ACE_fieldDressing", "", 10, 5,"" },
            { "ACE_elasticBandage", "", 10, 5,"" },
            { "ACE_packingBandage", "", 10, 5,"" },
            {""},
            { "Chemlight_red", "", 30, -1,"" },
            { "Chemlight_yellow", "", 30, 10,"" },
            { "Chemlight_green", "", 30, 10,"" },
            { "Chemlight_blue", "", 30, 10,"" },
            { "ACE_HandFlare_White", "", 50, 10,"" },
            { "ACE_HandFlare_Red", "", 50, 10,"" },
            { "ACE_HandFlare_Green", "", 50, 10,"" },
            { "ACE_HandFlare_Yellow", "", 50, 10,"" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Policia Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "DDOPP_X26", "Tazer Gelb", 0, 0"" },
            { "DDOPP_X26_b", "Tazer Schwarz", 0, 0,"" },
            { "uns_m1911", "", 0, 0,"" },
            { "SMG_05_F", "", 0, 0, { "life_coplevel", 1 } },           //Rekrut
            {""},
            { "uns_xm177e2_short", "", 0, 0, { "life_coplevel", 2 } },  //Officer
			{ "arifle_sdar_F", "", 0, 0, { "life_coplevel", 2 } },
            {""},
            { "uns_xm177e1_dm", "", 0, 0, { "life_coplevel", 3 } },         //Detective
            { "uns_xm177e2", "", 0, 0, { "life_coplevel", 3 } },            //Detective
            { "uns_xm177e2_grip", "", 0, 0, { "life_coplevel", 3 } },   //Detective
            {""},
            { "uns_m16", "", 0, 0, { "life_coplevel", 4 } },                //Seargent
            { "uns_m16_m203", "", 0, 0, { "life_coplevel", 4 } },       //Seargent
            { "uns_m870", "", 0, 0, { "life_coplevel", 4 } },           //Seargent
            {""},
            { "uns_M16A1", "", 0, 0, { "life_coplevel", 5 } },          //Lieutenant
            { "uns_M16A1_m203", "", 0, 0, { "life_coplevel", 5 } },     //Lieutenant
            {""},
            { "uns_M63a_AR", "", 0, 0, { "life_coplevel", 6 } },            //Captain
            { "uns_m14", "", 0, 0, { "life_coplevel", 6 } },                //Captain
            {""},
            { "uns_l1a1", "", 0, 0, { "life_coplevel", 7 } },           //Major
            { "uns_l1a1gl", "", 0, 0, { "life_coplevel", 7 } },         //Major
            {""},
            { "pmc_earpiece", "", 0, 0,"" },
            { "tf_anprc152", "", 0, 0,"" },
            { "tf_fadak_1", "", 0, 0,"" },
            { "ACE_CableTie", "", 0, 0,"" },
            { "ACE_EarPlugs", "", 0, 0,"" },
            { "ACE_TacticalLadder_Pack", "", 0, 0,"" },
            {""},
            { "Binocular", "", 0, -1,"" },
            { "Rangefinder", "", 0, -1,"" },
            { "ItemGPS", "", 0, 0,"" },
            { "ItemMap", "", 0, 0,"" },
            { "ItemCompass", "", 0, 0,"" },
            { "ItemWatch", "", 0, -1,"" },
            { "B_UavTerminal", "", 0, -1, { "life_coplevel", 4 } },
            {""},
            { "ACE_fieldDressing", "", 0, 0,"" },
            { "ACE_elasticBandage", "", 0, 0,"" },
            { "ACE_packingBandage", "", 0, 0,"" },
            {""},
            { "ACE_HandFlare_White", "", 0, 0,"" },
            { "ACE_HandFlare_Red", "", 0, 0,"" },
            { "ACE_HandFlare_Green", "", 0, 0,"" },
            { "ACE_HandFlare_Yellow", "", 0, 0,"" },
            { "Chemlight_red", "", 0, -1,"" },
            { "Chemlight_yellow", "", 0, 0,"" },
            { "Chemlight_green", "", 0, 0,"" },
            { "Chemlight_blue", "", 0, 0,"" }
        };
        mags[] = {
            { "uns_12gaugemag_6", "", 0 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 0 },
            { "DDOPP_6Rnd_X26", "X26 6 Schuss", 0 },
            { "DDOPP_1Rnd_X26", "x26 1 Schuss", 0 },
            { "uns_30Rnd_556x45_Stanag", "", 0 },
			{ "20Rnd_556x45_UW_mag", "", 450 },
            { "uns_m14mag", "", 0 },
            { "uns_l1a1mag", "", 0 },
            { "uns_m870mag", "", 0 },
            { "uns_m1911mag", "", 0 }
        };
        accs[] = {
            { "acc_flashlight", "", 0 }
        };
    };
/*	
	class cop_jungle {
        name = "Dschungelpolizei";
        side = "cop";
        license = "dschungellizens";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Dschungelwaffe", "", 0, 0, { "life_coplevel", 4 } },           //Private First Class     
        };
        mags[] = {
            { "dschungelmagazin", "", 0 },
        };
        accs[] = {
            { "dschungellampe", "", 0 }
        };
    };
*/
/*
    class cop_patrol {
        name = "Kuba Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Du musst Officer sein um diesen Shop nutzen zu können!" };
        items[] = {
            { "uns_m1897", "", 20000, 12500 },
            { "uns_xm177e2", "", 17500, 9000 },
            { "DDOPP_X26", "Tazer Gelb", 2000, 1000 },
            { "DDOPP_X26_b", "Tazer Schwarz", 2000, 1000 },
            { "uns_m1911", "", 7500, 150 },
            { "ACE_CableTie", "", 150, -1 },
            { "ACE_fieldDressing", "", 100, 50 },
            { "ACE_elasticBandage", "", 100, 50 },
            { "ACE_packingBandage", "", 100, 50 },
            { "ACE_HandFlare_White", "", 500, 50 },
            { "ACE_HandFlare_Red", "", 500, 50 },
            { "ACE_HandFlare_Green", "", 500, 50 },
            { "ACE_HandFlare_Yellow", "", 500, 50 },
            { "ACE_EarPlugs", "", 300, 50 },
            { "Binocular", "", 150, -1 },
            { "NVGoggles", "", 2000, 980 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
            { "uns_12gaugemag_6", "", 800 },
            { "DDOPP_6Rnd_X26", "X26 6 Schuss", 500 },
            { "DDOPP_1Rnd_X26", "x26 1 Schuss", 100 },
            { "uns_30Rnd_556x45_Stanag", "", 500 },
            { "uns_m1911mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 }
        };
    };

    class cop_sergeant {
        name = "Kuba Detective Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "uns_m1897", "", 20000, 12500 },
            { "uns_M16A1", "", 17500, 9000 },
            { "DDOPP_X26", "Tazer Gelb", 2000, 1000 },
            { "DDOPP_X26_b", "Tazer Schwarz", 2000, 1000 },
            { "uns_m1911", "", 7500, 150 },
            { "ACE_CableTie", "", 150, -1 },
            { "ACE_fieldDressing", "", 100, 50 },
            { "ACE_elasticBandage", "", 100, 50 },
            { "ACE_packingBandage", "", 100, 50 },
            { "ACE_HandFlare_White", "", 500, 50 },
            { "ACE_HandFlare_Red", "", 500, 50 },
            { "ACE_HandFlare_Green", "", 500, 50 },
            { "ACE_HandFlare_Yellow", "", 500, 50 },
            { "ACE_EarPlugs", "", 300, 50 },
            { "Binocular", "", 150, -1 },
            { "NVGoggles", "", 2000, 980 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
            { "uns_12gaugemag_6", "", 800 },
            { "DDOPP_6Rnd_X26", "X26 6 Schuss", 500 },
            { "DDOPP_1Rnd_X26", "x26 1 Schuss", 100 },
            { "uns_30Rnd_556x45_Stanag", "", 500 },
            { "uns_m1911mag", "", 250 }
        };
        accs[] = {
        };
    };

    class cop_SWAT {
        name = "Kuba SWAT Shop";
        side = "cop";
        license = "swat";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be atleast Sergeant rank and SWAT!" };
        items[] = {
            { "CUP_arifle_Mk17_STD_SFG", "", 0, 0, { "life_coplevel", 1 } },               // MK17           
            { "arifle_SPAR_03_blk_F", "", 0, 0, { "life_coplevel", 2 } },                  // HK417  
            { "srifle_DMR_06_camo_F", "", 0, 0, { "life_coplevel", 3 } },                  // M14              
            { "HandGrenade_Stone", "Flashbang", 170, -1 },
            { "1Rnd_SmokeGreen_Grenade_shell", "Tear Gas", 150 }
        };
        mags[] = {
            { "CUP_20Rnd_762x51_B_SCAR", "", 0 },       // MK 17 Muni
			{ "20Rnd_762x51_Mag", "", 0 },              // HK 417
            { "20Rnd_762x51_Mag", "", 0 },              // M14
        };
        accs[] = {

        };
    };

    class cop_lieutenant {
        name = "Kuba Seargent Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Lieutenant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 1750, -1 },
        };
        mags[] = {

        };
        accs[] = {

        };
    };

    class cop_captain {
        name = "Kuba Captain Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Captain Rank!" };
        items[] = {

        };
        mags[] = {

        };
        accs[] = {

        };
    };
*/
    //Medic Shops
    class med_basic {                        /////           Medic             /////
        name = "Medical Rescue Service";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          //{ "Binocular", "", 150, -1, { "life_medlevel", 4 } },  BEISPIEL FÜR LEVELABFRAGE WENN NÖTIG
            { "Binocular", "", 0, -1,"" },
            { "Rangefinder", "", 0, -1,"" },
            { "NVGoggles", "", 0, 0,"" },
            { "ItemGPS", "", 0, 0,"" },
            { "ItemMap", "", 0, 0,"" },
            { "ItemCompass", "", 0, 0,"" },
            { "ItemWatch", "", 0, 0,"" },
            {""},
            { "pmc_earpiece", "", 0, 0,"" },
            { "tf_anprc152", "", 0, 0,"" },
            { "tf_fadak", "", 0, 0,"" },
            { "ACE_EarPlugs", "", 0, 0,"" },
            {""},
            { "ACE_fieldDressing", "", 0, 0,"" },
            { "ACE_elasticBandage", "", 0, 0,"" },
            { "ACE_packingBandage", "", 0, 0,"" },
            { "ACE_quikclot", "", 0, 0,"" },
            { "ACE_adenosine", "", 0, 0,"" },
            { "ACE_atropine", "", 0, 0,"" },
            { "ACE_epinephrine", "", 0, 0,"" },
            { "ACE_morphine", "", 0, 0,"" },
            { "ACE_tourniquet", "", 0, 0,"" },
            { "ACE_bloodIV_250", "", 0, 0,"" },
            { "ACE_bloodIV_500", "", 0, 0,"" },
            { "ACE_bloodIV", "", 0, 0,"" },
            { "ACE_plasmaIV_250", "", 0, 0,"" },
            { "ACE_plasmaIV_500", "", 0, 0,"" },
            { "ACE_plasmaIV", "", 0, 0,"" },
            { "ACE_salineIV_250", "", 0, 0,"" },
            { "ACE_salineIV_500", "", 0, 0,"" },
            { "ACE_salineIV", "", 0, 0,"" },
            { "ACE_surgicalKit", "", 0, 0,"" },
            { "ACE_personalAidKit", "Notfallkit!", 0, 0,"" },
            { "ACE_bodyBag", "", 0, 0,"" },
            { "ACE_Wheel", "", 0, 0,"" },
            { "ACE_TacticalLadder_Pack", "", 0, 0,"" },
            { "ACE_key_lockpick", "", 0, 0,"" },
            { "Chemlight_red", "", 0, -1,"" },
            { "Chemlight_yellow", "", 0, 0,"" },
            { "Chemlight_green", "", 0, 0,"" },
            { "Chemlight_blue", "", 0, 0,"" },
            { "ACE_HandFlare_White", "", 0, 0,"" },
            { "ACE_HandFlare_Red", "", 0, 0,"" },
            { "ACE_HandFlare_Green", "", 0, 0,"" },
            { "ACE_HandFlare_Yellow", "", 0, 0,"" }
        };
        mags[] = {
        };
        accs[] = {
        };
    };

/*    class adac_basic {                       /////           ADC              /////
        name = "ADAC Fundgrube";*/
    //Adac Shops
    class adac_basic {
        name = "ADC Generalstore";
        side = "adac";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          //{ "Binocular", "", 150, -1, { "life_medlevel", 4 } },  BEISPIEL FÜR LEVELABFRAGE WENN NÖTIG
            { "Binocular", "", 0, -1,"" },
            { "Rangefinder", "", 0, -1,"" },
            { "NVGoggles", "", 0, 0,"" },
            { "ItemGPS", "", 0, 0,"" },
            { "ItemMap", "", 0, 0,"" },
            { "ItemCompass", "", 0, 0,"" },
            { "ItemWatch", "", 0, 0,"" },
            {""},
            { "pmc_earpiece", "", 0, 0,"" },
            { "tf_anprc152", "", 0, 0,"" },
            { "tf_fadak", "", 0, 0,"" },
            { "ACE_EarPlugs", "", 0, 0,"" },
            {""},
            { "ACE_fieldDressing", "", 0, 0,"" },
            { "ACE_elasticBandage", "", 0, 0,"" },
            { "ACE_packingBandage", "", 0, 0,"" },
            { "ACE_Wheel", "", 0, 0,"" },
			{""},
            { "Chemlight_red", "", 0, -1,"" },
            { "Chemlight_yellow", "", 0, 0,"" },
            { "Chemlight_green", "", 0, 0,"" },
            { "Chemlight_blue", "", 0, 0,"" },
            { "ACE_HandFlare_White", "", 0, 0,"" },
            { "ACE_HandFlare_Red", "", 0, 0,"" },
            { "ACE_HandFlare_Green", "", 0, 0,"" },
            { "ACE_HandFlare_Yellow", "", 0, 0,"" }
        };
        mags[] = {};
    };

};
