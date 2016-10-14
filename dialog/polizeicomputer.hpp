/*
	Author = ohhnice
	Dialog für einen Polizeicomputer


*/

class life_polizei1computer
{
	idd = 6000;
	movingEnabled = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_dropdown;";
	
	class controlBackground
	{
		
	};

	class controls
	{
		class laptop1hintergrund: life_RscPicture
		{
			idc = -1;
			text = "textures\cop\computer\laptop1.paa";
			x = 0.113375 * safezoneW + safezoneX;
			y = -0.215236 * safezoneH + safezoneY;
			w = 0.773251 * safezoneW;
			h = 1.41947 * safezoneH;
		};
		class Laptop1nametxt: Life_RscStructuredText
		{
			idc = 6001;
			text = "";
			x = 0.310296 * safezoneW + safezoneX;
			y = 0.191898 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0220073 * safezoneH;
			colorActive[] = {0,0,0,1};
		};
		class laptop1fuehrerscheintxt: Life_RscStructuredText
		{
			idc = 6002;
			text = "";
			x = 0.310296 * safezoneW + safezoneX;
			y = 0.225308 * safezoneH + safezoneY;  //y = 0.224908 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0220073 * safezoneH;
		};
		class laptop1gefaengnistxt: Life_RscStructuredText
		{
			idc = 6003;
			text = "";
			x = 0.310296 * safezoneW + safezoneX;
			y = 0.26092 * safezoneH + safezoneY;  //y = 0.25792 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0220073 * safezoneH;
		};
		class laptop1fahndungsstatustxt: Life_RscStructuredText
		{
			idc = 6004;
			text = "";
			x = 0.310296 * safezoneW + safezoneX;
			y = 0.293132 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0198066 * safezoneH;
		};
		class laptop1uhrzeitdatumtxt: Life_RscStructuredText //ingame uhr
		{
			idc = 6005;
			text = "";
			size = "0.014 / (getResolution select 5)";
			x = 0.740316 * safezoneW + safezoneX; // x = 0.743316 * safezoneW + safezoneX;
			y = 0.591133 * safezoneH + safezoneY; // y = 0.590233 * safezoneH + safezoneY;
			w = 0.037023 * safezoneW;  //w = 0.03093 * safezoneW;
			h = 0.0308102 * safezoneH; //h = 0.0286097 * safezoneH;
		};
		class laptop1strafberichttxt: Life_RscStructuredText
		{
			idc = 6006;
			x = 0.478349 * safezoneW + safezoneX;
			y = 0.180895 * safezoneH + safezoneY;
			w = 0.283525 * safezoneW;
			h = 0.237679 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};	
		
		class laptop1berichtedit: life_RscButtonMenu
		{
			idc = 6014;
			x = 0.570608 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682225 * safezoneH;
			onButtonClick = "[] call life_fnc_berichtedit;";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			tooltip = "Editiert den Zustand des Berichtes"; //--- ToDo: Localize;
		};
		
		class laptop1wantedadd: life_RscButtonMenu
		{
			idc = 6007;
			x = 0.621658 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682225 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "_info = call compile format[""%1"", life_computergesucht];[] remoteExecCall [""life_fnc_wirdgesucht"",_info]; closedialog 0;";
			tooltip = "Fuegt die Person zur Gesuchtenliste hinzu"; //--- ToDo: Localize;
		};
		class laptop1home: life_RscButtonMenu
		{
			idc = 6008;
			x = 0.253591 * safezoneW + safezoneX;
			y = 0.110472 * safezoneH + safezoneY;
			w = 0.024744 * safezoneW;
			h = 0.0198066 * safezoneH;
			onButtonClick = "closedialog 0;closedialog 0; createdialog ""life_polizei2computer"";";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
		};
		class laptop1bericht: life_RscButtonMenu
		{
			idc = 6009;
			x = 0.673208 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682223 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "createdialog ""life_polizei3computer"";";
			tooltip = "Hier koennen sie einen Bericht ueber das Ziel schreiben"; //--- ToDo: Localize;
		};
		class laptop1berichtloeschen: life_RscButtonMenu
		{
			idc = 6010;
			x = 0.725789 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY; // y = 0.451583 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682223 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "[] spawn life_fnc_deletebericht";
			tooltip = "Hiermit loeschen Sie den ausgewaehlten Bericht"; //--- ToDo: Localize;
		};
		class laptop1beenden: life_RscButtonMenu
		{
			idc = 6011;
			x = 0.754657 * safezoneW + safezoneX;
			y = 0.084063 * safezoneH + safezoneY;
			w = 0.022682 * safezoneW;
			h = 0.0176062 * safezoneH;
			onButtonClick = "closedialog 0;";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
		};

		class laptop1boxstraftaten: life_RscListbox
		{
			idc = 6012;
			sizeEx = 0.035;
			colorBackground[] = {-1,-1,-1,0};
			x = 0.24225 * safezoneW + safezoneX;
			y = 0.370157 * safezoneH + safezoneY;
			w = 0.203107 * safezoneW;
			h = 0.160652 * safezoneH;
			//colorBackground[] = {-1,-1,-1,0};colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onLBSelChanged = "[(lbCurSel 6012)] call life_fnc_straftaten;";
		};
		class laptop1straftataendern: life_RscCombo
		{
			idc = 6013;
			text = "";
			//onLBSelChanged  = "_this call life_fnc_clothingFilter";
			x = 0.475256 * safezoneW + safezoneX;
			y = 0.427377 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0220073 * safezoneH;
		};	
	};
};

class life_polizei2computer
{
	idd = 6025;
	movingEnable = false;
	enalbeSimulation = true;
	onLoad = "[] spawn life_fnc_pcinit;";
	
	class controlBackground
	{
		
	};
	
	class controls
	{
		class laptop2hintergrund: life_RscPicture
		{
			idc = -1;
			text = "textures\cop\computer\laptop2.paa";
			x = 0.113375 * safezoneW + safezoneX;
			y = -0.215236 * safezoneH + safezoneY;
			w = 0.773251 * safezoneW;
			h = 1.41947 * safezoneH;
		};
		class laptop2Buergertxt: Life_RscStructuredText
		{
			idc = 6028;
			x = 0.563922 * safezoneW + safezoneX;
			y = 0.277726 * safezoneH + safezoneY;
			w = 0.130937 * safezoneW;
			h = 0.0352115 * safezoneH;
			//colorBackground[] = {-1,-1,-1,0};
		};
		class laptop2uhrzeitdatumtxt: Life_RscStructuredText //ingame uhr
		{
			idc = 6026;
			text = "";
			size = "0.014 / (getResolution select 5)";
			x = 0.740316 * safezoneW + safezoneX; // x = 0.743316 * safezoneW + safezoneX;
			y = 0.591133 * safezoneH + safezoneY; // y = 0.590233 * safezoneH + safezoneY;
			w = 0.037023 * safezoneW;  //w = 0.03093 * safezoneW;
			h = 0.0308102 * safezoneH; //h = 0.0286097 * safezoneH;
		};
		class laptop2bericht: Life_RscButtonMenu
		{
			idc = 6029;
			x = 0.636092 * safezoneW + safezoneX;
			y = 0.422975 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682223 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "createdialog ""life_polizei3computer"";";
			tooltip = "Hier koennen sie einen Bericht ueber das Ziel schreiben"; //--- ToDo: Localize;
		};
		class laptop2spielerinfo: Life_RscButtonMenu
		{
			idc = 6030;
			x = 0.584542 * safezoneW + safezoneX;
			y = 0.422975 * safezoneH + safezoneY;
			w = 0.038147 * safezoneW;
			h = 0.0682223 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick  = "[1] call life_fnc_playerQuery;";
			tooltip = "Hier koennen sie informationen ueber den spieler abrufen"; //--- ToDo: Localize;
		};
		class laptop2listederspieler: Life_RscListbox
		{
			idc = 6031;
			sizeEx = 0.035;
			x = 0.24225 * safezoneW + safezoneX;
			y = 0.165489 * safezoneH + safezoneY;
			w = 0.230944 * safezoneW;
			h = 0.385128 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
			onLBSelChanged  = "[0] call life_fnc_playerQuery;"; //(lbCurSel 6031)
		};
		class laptop2beenden: Life_RscButtonMenu
		{
			idc = 6032;
			x = 0.754657 * safezoneW + safezoneX;
			y = 0.084063 * safezoneH + safezoneY;
			w = 0.022682 * safezoneW;
			h = 0.0176062 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "closedialog 0;";
		};
	};
};

class life_polizei3computer
{
	idd = 6050;
	movingEnable = false;
	enalbeSimulation = true;
	onLoad = "[] spawn life_fnc_dropdown;";
	
	class controlBackground
	{
		
	};
	
	class controls
	{		
		class laptop3hintergrund: life_RscPicture
		{
			idc = -1;
			text = "textures\cop\computer\laptop3.paa";
			x = 0.113375 * safezoneW + safezoneX;
			y = -0.215236 * safezoneH + safezoneY;
			w = 0.773251 * safezoneW;
			h = 1.41947 * safezoneH;
		};
		class laptop3datumstrafzeittxt: Life_RscStructuredText
		{
			idc = 6051;
			size = "0.025 / (getResolution select 5)";	
			x = 0.369063 * safezoneW + safezoneX;
			y = 0.251118 * safezoneH + safezoneY;
			w = 0.111348 * safezoneW;
			h = 0.0286095 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class laptop3uhrzeitstraftattxt: Life_RscStructuredText  
		{
			idc = 6052;
			size = "0.025 / (getResolution select 5)";	
			x = 0.517527 * safezoneW + safezoneX;
			y = 0.251118 * safezoneH + safezoneY;  //y = 0.249118 * safezoneH + safezoneY;
			w = 0.110317 * safezoneW;
			h = 0.0286095 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class laptop3uhrzeitdatumtxt: Life_RscStructuredText //ingame uhr
		{
			idc = 6053;
			size = "0.014 / (getResolution select 5)";			
			text = "";
			x = 0.740316 * safezoneW + safezoneX; // x = 0.743316 * safezoneW + safezoneX;
			y = 0.591133 * safezoneH + safezoneY; // y = 0.590233 * safezoneH + safezoneY;
			w = 0.037023 * safezoneW;  //w = 0.03093 * safezoneW;
			h = 0.0308102 * safezoneH; //h = 0.0286097 * safezoneH;
		};
		class laptop3hometxt: Life_RscStructuredText
		{
			idc = 6054;
			x = 0.253591 * safezoneW + safezoneX;
			y = 0.110472 * safezoneH + safezoneY;
			w = 0.024744 * safezoneW;
			h = 0.0198066 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};		
		class laptop3berichtversenden: life_RscButtonMenu
		{
			idc = 6055;
			x = 0.709293 * safezoneW + safezoneX;
			y = 0.486795 * safezoneH + safezoneY;
			w = 0.039178 * safezoneW;
			h = 0.070423 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
			onButtonClick = "[] call life_fnc_berichtverfassen";
			tooltip = "Hier senden Sie den Bericht ab"; //--- ToDo: Localize;
		};
		class laptop3beenden: life_RscButtonMenu
		{
			idc = 6056;
			x = 0.754657 * safezoneW + safezoneX;
			y = 0.084063 * safezoneH + safezoneY;
			w = 0.022682 * safezoneW;
			h = 0.0176062 * safezoneH;
			onButtonClick = "closedialog 0;";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
		};
		class laptop3combo: life_RscCombo
		{
			idc = 6057;
			text = "";
			x = 0.443295 * safezoneW + safezoneX;
			y = 0.16769 * safezoneH + safezoneY;
			w = 0.110317 * safezoneW;
			h = 0.0286095 * safezoneH;
		};
		class laptop3berichtedit: life_RscEdit
		{
			idc = 6058;
			style = "16";
			text = "";
			x = 0.254622 * safezoneW + safezoneX;
			y = 0.35035 * safezoneH + safezoneY;
			w = 0.428896 * safezoneW;
			h = 0.202469 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
	};
};

class life_hauptmenu
{
	idd = 6075;
	movingEnabled = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_dropdown;";
	
	class controlBackground
	{
		
	};
	
	class controls
	{	
		class hauptmenu_bild: life_RscPicture		{			idc = -1;			text = "textures\cop\computer\hauptmenue.paa";			x = 0.113375 * safezoneW + safezoneX;			y = -0.215236 * safezoneH + safezoneY;			w = 0.773251 * safezoneW;			h = 1.41947 * safezoneH;		};		class btn_polizeidispatch: life_RscButtonMenu		{			idc = 6076;			x = 0.333969 * safezoneW + safezoneX;			y = 0.275692 * safezoneH + safezoneY;			w = 0.158813 * safezoneW;			h = 0.261693 * safezoneH;
			//onButtonClick = "closedialog 0;createdialog ""life_dispatchmenu"" ";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";		};		class btn_plzdb: life_RscButtonMenu		{			idc = 6077;			x = 0.510311 * safezoneW + safezoneX;			y = 0.275692 * safezoneH + safezoneY;			w = 0.158813 * safezoneW;			h = 0.261693 * safezoneH;
			onButtonClick = "closedialog 0;createdialog ""life_polizei2computer"" ";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";		};
		class hauptmenu_beenden: life_RscButtonMenu
		{
			idc = 6078;
			x = 0.754657 * safezoneW + safezoneX;
			y = 0.084063 * safezoneH + safezoneY;
			w = 0.022682 * safezoneW;
			h = 0.0176062 * safezoneH;
			onButtonClick = "closedialog 0;";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
		};
	};
};


//dispatch menü
class life_dispatchmenu
{
	idd = 6100;
	movingEnabled = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_dropdown;";
	
	class controlBackground
	{
		
	};
	
	class controls
	{	
		class dispatchmenu_bild: life_RscPicture		{			idc = -1;			text = "textures\cop\computer\einsaetze.paa";			x = 0.113375 * safezoneW + safezoneX;			y = -0.215236 * safezoneH + safezoneY;			w = 0.773251 * safezoneW;			h = 1.41947 * safezoneH;		};		class btn_letztenotrufe: life_RscButtonMenu		{			idc = 6101;			x = 0.254562 * safezoneW + safezoneX;			y = 0.277891 * safezoneH + safezoneY;			w = 0.156751 * safezoneW;			h = 0.259494 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";		};		class btn_streifeeinweisen: life_RscButtonMenu		{			idc = 6102;			x = 0.420594 * safezoneW + safezoneX;			y = 0.277891 * safezoneH + safezoneY;			w = 0.156751 * safezoneW;			h = 0.259494 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";		};		class btn_medicanfragen: life_RscButtonMenu		{			idc = 6103;			x = 0.586625 * safezoneW + safezoneX;			y = 0.277891 * safezoneH + safezoneY;			w = 0.156751 * safezoneW;			h = 0.259494 * safezoneH;
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";		};
		class hauptmenu_beenden: life_RscButtonMenu
		{
			idc = 6104;
			x = 0.754657 * safezoneW + safezoneX;
			y = 0.084063 * safezoneH + safezoneY;
			w = 0.022682 * safezoneW;
			h = 0.0176062 * safezoneH;
			onButtonClick = "closedialog 0;";
			colorBackground[] = {0,0,0,0}; colorActive[] = {0,0,0,0}; animTextureDefault = ""; animTextureNormal = ""; animTextureDisabled = ""; animTextureOver = ""; animTextureFocused = "";
		};
	};
};