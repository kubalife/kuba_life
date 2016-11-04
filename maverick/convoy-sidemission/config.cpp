/*
	Author: Maverick Applications
	Convoy sidemission for Altis Life servers
*/

class Maverick_ConvoySidemission
{
	class Config
	{
		ConfigPool[] 							= {"GoldBarTransport"};
		ForceConfigAtIndex 						= -1;
		SleepTime								= (3600 + (random 3600));
		MakePlayersHostileFor					= 180;
		SidesNotAttackable[]					= {"west"};
		AIDifficulty[] = {
												{"aimingAccuracy", 1},
												{"aimingShake", 1},
												{"aimingSpeed", 1},
												{"endurance", 1},
												{"spotDistance", 1},
												{"spotTime", 1},
												{"courage", 1},
												{"reloadSpeed", 1},
												{"commanding", 1},
												{"general", 1}
		};
	};
	class ConvoyConfigurationsPool
	{
		/*********************** EXAMPLE TRANSPORT FOR VIRTUAL ITEMS ***********************/
		class GoldBarTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Gold Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"CUP_U_B_BAF_DPM_S2_UnRolled", // Uniform
												"V_TacVest_gen_F", // Vest
												"", // Backpack
												{"Skyline_M4A1_02_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Gold Transport";
				startAnnouncementDescription	= "Ein Goldtransport ist auf dem Weg zum Golddepot de Cuba.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Gold Transporter gestoppt!";
				stoppedAnnouncementDescription	= "Der Goldtransport wurde gestoppt!";

				// Mission completed announcement
				endAnnouncementHeader			= "Gold Transport beendet";
				endAnnouncementDescription  	= "Die Goldtransport Mission wurde beendet";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"CUP_O_UAZ_Open_TKA","CUP_O_Ural_Reammo_TKA","CUP_O_UAZ_Open_TKA"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_spawn1","mav_convoy_spawn2","mav_convoy_spawn3"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 80;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 8;
			};

			class Route {
			    // Route configuration
			    markers[] = {
			        "mav_gold_waypoint_1",
			        "mav_gold_waypoint_2",
			        "mav_gold_waypoint_3",
			        "mav_gold_waypoint_4",
			        "mav_gold_waypoint_5",
			        "mav_gold_waypoint_6",
			        "mav_gold_waypoint_7",
			        "mav_gold_waypoint_8",
			        "mav_gold_waypoint_10"
			    };
			};

			class Loot
			{
				type 							= "virtual";
				container						= "";
				data[] = {
												{"goldbar", 15}
				};
			};
		};


		/*********************** EXAMPLE TRANSPORT FOR REAL ITEMS ***********************/
		class WeaponTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Weapon Transport";
			};

			class AIUnits
			{
				gear[] = {
												"UNS_M1_1V1N", // Headgear
												"", // Glasses
												"UNS_ARMY_BDU", // Uniform
												"UNS_M1956_M15", // Vest
												"", // Backpack
												{"und_ak47_52_bayo", "uns_ak47mag", 5}, // Primary weapon, ammo and how many magazines
												{"uns_m1911", "uns_m1911mag", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Weapon Transport";
				startAnnouncementDescription	= "The local army is currently transporting larger amounts of weapons through Tanoa with ground vehicles.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Weapon Transporter disabled";
				stoppedAnnouncementDescription	= "The Weapon transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Weapon Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_LSV_02_unarmed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_spawn1","mav_convoy_spawn2","mav_convoy_spawn3","mav_convoy_spawn4"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 2;
				maxSpeed						= 50;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_convoy_waypoint1","mav_convoy_waypoint2","mav_convoy_waypoint3","mav_convoy_waypoint4","mav_convoy_waypoint5","mav_convoy_waypoint6","mav_convoy_waypoint7","mav_convoy_waypoint8","mav_convoy_waypoint10","mav_convoy_waypoint11","mav_convoy_waypoint12","mav_convoy_waypoint13"};
			};

			class Loot
			{
				type 							= "real";
				container						= "B_CargoNet_01_ammo_F";
				data[] = {
												{"srifle_DMR_01_F", 1, "WEAPON"},
												{"optic_SOS", 1, "ITEM"},
												{"10Rnd_762x54_Mag", 1, "MAGAZINE"},
												{"B_Kitbag_mcamo", 1, "BACKPACK"}
				};
			};
		};
	};
};