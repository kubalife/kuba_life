/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE isEqualTo VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Georgetown {
            displayName = "Georgetown";
            spawnMarker = "selods_spawn1";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class KatKoula {
            displayName = "KatKoula";
            spawnMarker = "selods_spawn2";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Oumere {
            displayName = "Oumere";
            spawnMarker = "selods_spawnom";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Lijnhaven {
            displayName = "Lijnhaven";
            spawnMarker = "selods_spawnlijn";
            icon = "icons\civspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class RebelS {
            displayName = "Southwest Rebel Base";
            spawnMarker = "Rebelop";
            icon = "icons\civspawn.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelN {
            displayName = "Northwest Rebel Base";
            spawnMarker = "Rebelop_1";
            icon = "icons\civspawn.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
		
        class admin {
            displayName = "Admin Base Test";
            spawnMarker = "admin_1";
            icon = "icons\civspawn.paa";
            licenses[] = { { "admin", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Georgetown {
            displayName = "Georgetown HQ";
            spawnMarker = "cop_spawn_1";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class LaRochelle {
            displayName = "La Rochelle HQ";
            spawnMarker = "cop_spawn_3";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Bridge {
            displayName = "Bridge HQ";
            spawnMarker = "cop_spawn_2";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Air {
            displayName = "Air HQ";
            spawnMarker = "cop_spawn_4";
            icon = "icons\policespawn.paa";
            licenses[] = { { "cAir", true } };
            level[] = { "", "", -1 };
        };

        class HW {
            displayName = "HW Patrol";
            spawnMarker = "cop_spawn_9";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };

        class Air2 {
            displayName = "Air HQ 2";
            spawnMarker = "cop_spawn_6";
            icon = "icons\policespawn.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "Georgetown Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira Regional";
            spawnMarker = "medic_spawn_2";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos Hospital";
            spawnMarker = "medic_spawn_3";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
        class adac {
            displayName = "Autoclub Headquarter";
            spawnMarker = "medic_spawn_4";
            icon = "icons\medspawn.paa";
            licenses[] = { { "adac", true } };
            level[] = { "", "", -1 };
        };
    };
	class adac {
        class Kavala {
            displayName = "ADC Headquarter";
            spawnMarker = "adac_spawn_1";
            icon = "icons\medspawn.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
