#define ST_RIGHT 0x01

class osefStatusBarAdmin {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBarAdmin', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBarAdmin', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBarAdmin', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55554;
			x = safezoneX + safezoneW - 1.6;
			y = safezoneY + safezoneH - 0.05;
			w = 0.75;
			h = 0.04;
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0.5 };
			font = "Impact";
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="Lade Informationen vom Server...";
			class Attributes {
				align="center";
				color = "#ffffff";
				font = "OrbitronLight";
			};
		};
	};
};

class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55555;
			x = safezoneX + safezoneW - 1.50;
			y = safezoneY + safezoneH - 0.035;
			w = 1.3;
			h = 0.05;
			shadow = true;
			font = "OrbitronLight";
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="";
			class Attributes {
				align="left";
			};
		};
	};
};