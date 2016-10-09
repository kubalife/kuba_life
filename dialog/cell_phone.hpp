class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_cellphone";

	class controlsBackground {
		class Life_RscPicture_1200: Life_RscPictureKeepAspect{
			idc = 1200;text = "icons\smsmenu.paa";
			x = -0.0625;
			y = -0.3;
			w = 1.1375;
			h = 1.5;colorBackground[] = {0, 0, 0, 0};
		};
/*
		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1025;
			y = 0.204;
			w = 0.6375;
			h = 0.32;
		};
*/
		class SendTo: Life_RscText {
			idc = -1;
			text = "Senden an:";
			x = 0.1;
			y = 0.36;
			w = 0.6;
			h = 0.04;
		};
	};

	class controls
	{
		class Title: Life_RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 3001;
			text = "";
			x = 0.1;
			y = 0.16;
			w = 0.6;
			h = 0.04;
		};

		class TextToSend: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3002;
			text = "$STR_CELL_TextToSend";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = 0.04;
		};

		class textEdit: Life_RscEdit {
			idc = 3003;
			text = "";
			sizeEx = 0.030;
			x = 0.1125;
			y = 0.26;
			w = 0.6125;
			h = 0.06;
		};

		class TextMsgButton: Life_RscButtonMenu {
			idc = 3015;
			text = "Sende Nachricht";
			onButtonClick = "[] call TON_fnc_cell_textmsg";
			x = 0.1;
			y = 0.52;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class PlayerList: Life_RscCombo {
			idc = 3004;
			x = 0.1125;
			y = 0.40;
			w = 0.6125;
			h = 0.04;
		};

		class TextCopButton: Life_RscButtonMenu {
			idc = 3016;
			text = "Policia";
			onButtonClick = "[] call TON_fnc_cell_textcop";
			x = 0.325;
			y = 0.52;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class TextAdminButton: Life_RscButtonMenu {
			idc = 3017;
			text = "$STR_CELL_TextAdmins";
			onButtonClick = "[] call TON_fnc_cell_textadmin";
			x = 0.325;
			y = 0.64;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class AdminMsgButton: Life_RscButtonMenu {
			idc = 3020;
			text = "$STR_CELL_AdminMsg";
			onButtonClick = "[] call TON_fnc_cell_adminmsg";
			x = 0.5375;
			y = 0.58;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class AdminMsgAllButton: Life_RscButtonMenu {
			idc = 3021;
			text = "$STR_CELL_AdminMSGAll";
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			x = 0.5375;
			y = 0.52;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class EMSRequest: Life_RscButtonMenu {
			idc = 3022;
			text = "EMS";
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
			x = 0.325;
			y = 0.58;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class PoliceMsgAllButton : life_RscButtonMenu
		{
			idc = 3023;
			text = "Rundfunk";
			onButtonClick = "[] call TON_fnc_cell_polizeimsgall";
			x = 0.325;
			y = 0.45;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		/*
		class AdacRequest : life_RscButtonMenu {
			idc = 3023;
			text = "$STR_CELL_AdacRequest";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_adacrequest";
			x = 0.32;
			y = 0.45;
			w = 0.2;
			h = (1 / 25);
		};
		*/

		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.5875;
			y = 0.64;
			w = 0.15;
			h = 0.04;
		};

		class MessagesButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Speicher";
			onButtonClick = "[] spawn life_fnc_messagesMenu";
			x = 0.1;
			y = 0.58;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};
	};
};
