class Life_cell_old_msgs {
	idd = 98111;
	name= "life_cell_old_messages";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "";

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			text = "Messages";
			x = 0.125;
			y = 0.13;
			w = 0.7625;
			h = 0.04;
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.125;
			y = 0.18;
			w = 0.7625;
			h = 0.56;
		};
		
		class FromBar: Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			text = "From";
			x = 0.1375;
			y = 0.2;
			w = 0.2375;
			h = 0.04;
		};
		
		class MessageBar: Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			text = "Message";
			x = 0.4125;
			y = 0.2;
			w = 0.45;
			h = 0.04;
		};
	};

	class controls {
		
		class TextBox: Life_RscStructuredText {
			idc = 98113;
			text = "";
			x = 0.4125;
			y = 0.26;
			w = 0.45;
			h = 0.46;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class PlayerList: Life_RscListBox {
			idc = 98112;
			text = "";
			sizeEx = 0.035;
			onLBSelChanged = "[] call life_fnc_lbChanged";
			x = 0.1375;
			y = 0.26;
			w = 0.2375;
			h = 0.46;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.725;
			y = 0.76;
			w = 0.15625;
			h = 0.04;
		};
		
		class DeleteButton: Life_RscButtonMenu {
			idc = 98114;
			text = "Delete";
			colorBackground[] = {0.7, 0, 0, 0.7};
			onButtonClick = "[] spawn life_fnc_deleteMessage";
			x = 0.300;
			y = 0.76;
			w = 0.15625;
			h = 0.04;
		};
		
		class ReplyButton: Life_RscButtonMenu {
			idc = 98115;
			text = "Reply";
			colorBackground[] = {0.9,0.5,0.1,1};
			onButtonClick = "[] spawn life_fnc_replyMessage";
			x = 0.125;
			y = 0.76;
			w = 0.15625;
			h = 0.04;
		};
	};
};