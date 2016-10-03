/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*	};
*
*/

class ProcessAction {

	class oil {

        	MaterialsReq[] = {{"oil_unprocessed",1}};
		MaterialsGive[] = {{"oil_processed",1}};
        	Text = "STR_Process_Oil";
        	//ScrollText = "Process Oil";
        	NoLicenseCost = 3750;
	};

	class diamond {

        	MaterialsReq[] = {{"diamond_uncut",1}};
					MaterialsGive[] = {{"diamond_cut",1}};
        	Text = "STR_Process_Diamond";
	 	//ScrollText = "Cut Diamonds";
        	NoLicenseCost = 9000;
	};

	class heroin {

        	MaterialsReq[] = {{"heroin_unprocessed",1}};
		MaterialsGive[] = {{"heroin_processed",1}};
        	Text = "STR_Process_Heroin";
        	//ScrollText = "Process Heroin";
        	NoLicenseCost = 2000;
	};

	class copper {

        	MaterialsReq[] = {{"copper_unrefined",1}};
		MaterialsGive[] = {{"copper_refined",1}};
        	Text = "STR_Process_Copper";
        	//ScrollText = "Refine Copper";
        	NoLicenseCost = 4250;
	};

	class iron {

        	MaterialsReq[] = {{"iron_unrefined",1}};
		MaterialsGive[] = {{"iron_refined",1}};
        	Text = "STR_Process_Iron";
        	//ScrollText = "Refine Iron";
        	NoLicenseCost = 4150;
	};

	class sand {

        	MaterialsReq[] = {{"sand",1}};
		MaterialsGive[] = {{"glass",1}};
        	Text = "STR_Process_Sand";
        	//ScrollText = "Melt Sand into Glass";
        	NoLicenseCost = 3650;
	};

	class salt {

        	MaterialsReq[] = {{"salt_unrefined",1}};
		MaterialsGive[] = {{"salt_refined",1}};
        	Text = "STR_Process_Salt";
        	//ScrollText = "Refine Salt";
        	NoLicenseCost = 3500;
	};

	class cocaine {

        	MaterialsReq[] = {{"cocaine_unprocessed",1}};
		MaterialsGive[] = {{"cocaine_processed",1}};
		Text = "STR_Process_Cocaine";
        	//ScrollText = "Process Cocaine";
        	NoLicenseCost = 9500;
	};

	class marijuana {

        	MaterialsReq[] = {{"cannabis",1}};
		MaterialsGive[] = {{"marijuana",1}};
        	Text = "STR_Process_Marijuana";
        	//ScrollText = "Harvest Marijuana";
        	NoLicenseCost = 5000;
	};

	class cement {

        	MaterialsReq[] = {{"rock",1}};
		MaterialsGive[] = {{"cement",1}};
        	Text = "STR_Process_Cement";
        	//ScrollText = "Mix Cement";
        	NoLicenseCost = 5000;
	};

	class holz {

        	MaterialsReq[] = {{"baumstamm",1}};
		MaterialsGive[] = {{"holz",1}};
        	Text = "STR_Process_plank";
        	//ScrollText = "Mix Cement";
        	NoLicenseCost = 5000;
	};

	//Custom

	class rubber {

					MaterialsReq[] = {{"rubberU",1}};
		MaterialsGive[] = {{"rubber",1}};
					Text = "STR_Process_rubber";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 5500;
	};

	class gunpowder {

					MaterialsReq[] = {{"sulfur",1}};
		MaterialsGive[] = {{"gunpowder",1}};
					Text = "STR_Process_gunpowder";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 6500;
	};

	class C4 {

					MaterialsReq[] = {{"nitroamine",1}};
		MaterialsGive[] = {{"C4",1}};
					Text = "STR_Process_C4";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};


	class steelplate {

					MaterialsReq[] = {{"steel",1}};
		MaterialsGive[] = {{"steelplate",1}};
					Text = "STR_Process_steelplate";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 7500;
	};

	class cloth {

					MaterialsReq[] = {{"wool",1}};
		MaterialsGive[] = {{"cloth",1}};
					Text = "STR_Process_cloth";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class tabak {

					MaterialsReq[] = {{"tabak",1}};
		MaterialsGive[] = {{"zigarre",1}};
					Text = "STR_Process_tabak";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class steel {

					MaterialsReq[] = {{"kohle",1},{"iron_refined",1}};
		MaterialsGive[] = {{"steel",2}};
					Text = "STR_Process_steel";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class rum {

					MaterialsReq[] = {{"zuckerrohr",1},{"waterBottle",1}};
		MaterialsGive[] = {{"rum",2}};
					Text = "STR_Process_rum";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class zucker {

					MaterialsReq[] = {{"zuckerrohr",1}};
		MaterialsGive[] = {{"zucker",1}};
					Text = "STR_Process_zucker";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};

	class orangensaft {

					MaterialsReq[] = {{"peach",1}};
		MaterialsGive[] = {{"orangensaft",1}};
					Text = "STR_Process_orangensaft";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class grapefruitsaft {

					MaterialsReq[] = {{"apple",1}};
		MaterialsGive[] = {{"grapefruitsaft",1}};
					Text = "STR_Process_grapefruitsaft";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};

	class aluminium {

					MaterialsReq[] = {{"nitroamine",1},{"kohle",1}};
		MaterialsGive[] = {{"aluminium",2}};
					Text = "STR_Process_aluminium";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
	
	class plastik {

					MaterialsReq[] = {{"oil_processed",1}};
		MaterialsGive[] = {{"plastik",1}};
					Text = "STR_Process_plastik";
					//ScrollText = "Mix Cement";
					NoLicenseCost = 11500;
	};
};
