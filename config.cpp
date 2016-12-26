#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class tu144d
    {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"wop_gui"};
	};
};

/*class CfgFactionClasses
{
	class CIV_DE {
		displayName = "$STR_DE";
		priority = 8;
		side = TCivilian;
	};
	class CIV_SU {
		displayName = "$STR_SU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_UA {
		displayName = "$STR_UA";
		priority = 8;
		side = TCivilian;
	};
	class CIV_LI {
		displayName = "$STR_LI";
		priority = 8;
		side = TCivilian;
	};
	class CIV_LA {
		displayName = "$STR_LA";
		priority = 8;
		side = TCivilian;
	};
	class CIV_CU {
		displayName = "$STR_CU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_GE {
		displayName = "$STR_GE";
		priority = 8;
		side = TCivilian;
	};
	class CIV_AM {
		displayName = "$STR_AM";
		priority = 8;
		side = TCivilian;
	};
	class CIV_KZ {
		displayName = "$STR_KZ";
		priority = 8;
		side = TCivilian;
	};
	class CIV_GB {
		displayName = "$STR_GB";
		priority = 8;
		side = TCivilian;
	};
	class CIV_NZ {
		displayName = "$STR_NZ";
		priority = 8;
		side = TCivilian;
	};
	class CIV_AR {
		displayName = "$STR_AR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_AU {
		displayName = "$STR_AU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_NB {
		displayName = "$STR_NB";
		priority = 8;
		side = TCivilian;
	};
	class CIV_CA {
		displayName = "$STR_CA";
		priority = 8;
		side = TCivilian;
	};
	class CIV_FR {
		displayName = "$STR_FR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_TW {
		displayName = "$STR_TW";
		priority = 8;
		side = TCivilian;
	};
	class CIV_US {
		displayName = "$STR_US";
		priority = 8;
		side = TCivilian;
	};
	class CIV_JP {
		displayName = "$STR_JP";
		priority = 8;
		side = TCivilian;
	};
	class CIV_CH {
		displayName = "$STR_CH";
		priority = 8;
		side = TCivilian;
	};
	class CIV_FJ {
		displayName = "$STR_FJ";
		priority = 8;
		side = TCivilian;
	};
	class CIV_BR {
		displayName = "$STR_BR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_LX {
		displayName = "$STR_LX";
		priority = 8;
		side = TCivilian;
	};
	class CIV_NE {
		displayName = "$STR_NE";
		priority = 8;
		side = TCivilian;
	};
	class CIV_NR {
		displayName = "$STR_NR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_SW {
		displayName = "$STR_SW";
		priority = 8;
		side = TCivilian;
	};
	class CIV_CN {
		displayName = "$STR_CN";
		priority = 8;
		side = TCivilian;
	};


	class CIV_DD {
		displayName = "$STR_DD";
		priority = 8;
		side = TCivilian;
	};
	class CIV_CZ {
		displayName = "$STR_CZ";
		priority = 8;
		side = TCivilian;
	};
	class CIV_PL {
		displayName = "$STR_PL";
		priority = 8;
		side = TCivilian;
	};
	class CIV_UZ {
		displayName = "$STR_UZ";
		priority = 8;
		side = TCivilian;
	};
	class CIV_KG {
		displayName = "$STR_KG";
		priority = 8;
		side = TCivilian;
	};
	class CIV_HU {
		displayName = "$STR_HU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_BU {
		displayName = "$STR_BU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_BL {
		displayName = "$STR_BL";
		priority = 8;
		side = TCivilian;
	};
	class CIV_IR {
		displayName = "$STR_IR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_SY {
		displayName = "$STR_SY";
		priority = 8;
		side = TCivilian;
	};
	class CIV_SK {
		displayName = "$STR_SK";
		priority = 8;
		side = TCivilian;
	};
	class CIV_TR {
		displayName = "$STR_TR";
		priority = 8;
		side = TCivilian;
	};
	class CIV_TU {
		displayName = "$STR_TU";
		priority = 8;
		side = TCivilian;
	};
};*/

/*class CfgVehicleClasses {
	class wings_of_union {
		displayName = "$STR_WU_NAME";
	};
};*/

class CfgSounds
{
	class tu144gup
 	{
		sound[]={"\tu144d\sound\GEARDOUP.ogg",1,1};
		name = "tu144gup";
		titles[] = {};
 	};

	class tu144gd
 	{
		sound[]={"\tu144d\sound\GEARDOWN.ogg",1,1};
		name = "tu144gd";
		titles[] = {};
 	};
};

class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Air: AllVehicles {};
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class tu144d: Plane
	{
		scope=public;
		model="\tu144d\tu144d";
		displayName="$STR_tu144d_NAME1";
		side=0;
		faction="OPF_F";
		extCameraPosition[] = {0, 10, -55};
		vehicleclass="air";
		crew = "B_Helipilot_F";
		driverAction="pilot";
		_generalMacro="Plane";
		simulation="airplane";
		unitInfoType="UnitInfoAirplane";
		hasGunner=1;
		driverIsCommander = 1;
		gunnerAction = "pilot"
		gunnerOpticsColor[] = {1, 1, 1, 1};
		flyInHeight=200;
		Icon = "\tu144d\icons\icon.paa";
		picture = "\tu144d\icons\picture.paa";
		mapSize = 50;

		gearRetracting = true;
		nameSound="aircraft";
		animated=1;
		class Library {
			libTextDesc = "$STR_TU144D_DESCR";
		};

		soundServo[] = {"tu144d\sound\flaps144.ogg", 3, 0.5, 100};
		//soundLocked[] = {"\ca\Tracked\Data\sound\alarm_loop1", 0.000316228, 1};
		soundIncommingMissile[] = {"\tu144d\sound\Incoming", 0.000316228, 1};
		soundGear[] = {"tu144d\sound\GEARUP.ogg", 3, 1, 100};
		/*soundGetIn[] = {"ca\sounds\Air\C130\close", db-10, 1};
		soundGetOut[] = {"ca\sounds\Air\C130\open", db-10, 1, 40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.001, 1};*/
		soundEngine[]={"tu144d\sound\TU144_XLAN14.ogg",4,1.2};
		soundEngineOnInt[] = {"tu144d\sound\TU144_XCBN2STRT.ogg", 0.562341, 1.000000};
		soundEngineOnExt[] = {"tu144d\sound\TU144_XCBN2STRT.ogg", 0.562341, 1.000000, 900};
		soundEngineOffInt[] = {"tu144d\sound\TU144_XCBN2SHUT.ogg", 0.562341, 1.000000};
		soundEngineOffExt[] = {"tu144d\sound\TU144_XCBN2SHUT.ogg", 0.562341, 1.000000, 900};

		camouflage = 25;
		audible = 10;
		accuracy = 0.500000;
    commanderCanSee = 31;
		gunnerCanSee = "1+16+4+8";
		landingAoa = "rad 2";
    landingSpeed = 300;
		acceleration = 450;
		maxSpeed = 2150;
		armor = 40;
		armorStructured = 1;
		wheelSteeringSensitivity = 3.000000;
		irScanRangeMin = 125;
		irScanRangeMax = 40000;
		irScanToEyeFactor = 7;
		aileronSensitivity = 0.3;
		elevatorSensitivity = 5.5;
		brakeDistance=300;
		flapsFrictionCoef = 0.300000;
		envelope[] = {0.000000,0.400000,1.900000,4,6.800000,8.300000,8.500000,7.800000,6.200000,3.600000,2.200000,1.600000,1.100000,0.700000,0.400000,0 };
		laserScanner = 1;
		gunAimDown = 0.045000;

		minFireTime = 30;

		class ViewPilot: ViewPilot
		{
			initFov = 0.8; minFov = 0.3; maxFov = 1.2;
			initAngleX = 0; minAngleX = -40; maxAngleX = +85;
			initAngleY = 0; minAngleY = -90; maxAngleY = 90;
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				body = "";
      			gun = "";
				commanding = -1;
				memoryPointsGetInGunner= "pos gunner";
				memoryPointsGetInGunnerDir= "pos gunner dir";
				weapons[]={};
		        magazines[]={};
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "c130_Pilot";
				gunnerInAction = "c130_Pilot";
			};
		};

		cost = 20000000;
		type = "VAir";
		threat[] = {1, 1, 0.700000};

		class Reflectors
		{
			class Left
			{
				color[] = {0.5, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.7;
			};

			class Right
			{
				color[] = {0.5, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 0.7;
			};
		};
		// Radar stuff
		irTarget=true;
		irScanRange = 2000;
		irScanGround = true;
		// Weapon and ammo
		weapons[]={}; // none
		magazines[]={}; // none
		class AnimationSources
		{
			class AnimAfterburner
			{
				source = "user";
				animPeriod = 2.2;
				initPhase = 0;
			};

			class AnimVibration
			{
				source = "user";
				animPeriod = 0.8;
				initPhase = 0;
			};

			class ABSwitch
			{
				source = "user";
				animPeriod = 0.8;
				initPhase = 0;
			};

			class damper_f
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class ngear
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class ngear_door_l
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class ngear_door_r
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_l
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_r
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_l_st
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};

			class gear_r_st
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};

			class shnjaga
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class shnjaga_st
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_l_door_l
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_l_door_r
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_r_door_l
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class gear_r_door_r
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};

			class nose
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};

			class kryl_l
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};

			class kryl_r
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
		};
		class EventHandlers
		{
			init = "_this execVM ""\tu144d\scr\Vapour.sqf""; _this execVM ""\tu144d\scr\gear_trigger.sqf""; [_this select 0] exec ""\tu144d\scr\common_init.sqs"";";
			engine = "if (_this Select 1) then {[_this select 0] exec ""\tu144d\scr\CheckEngine.sqs""}";
		};
		class UserActions
		{
			class Afterburner
			{
				displayName ="$STR_TU144D_BON";
				position = "doorarea";
				radius =100;
				showWindow = 0;
				condition = "speed this > 100 and player in this and this animationPhase ""ABSwitch"" <= 0.1";
				//statement = "[this] exec ""\tu144d\scr\Boost.sqs""";
				statement = "this execvm ""\tu144d\scr\Afterburner.sqf"";";
				onlyforplayer = false;
			};

			class Afterburner_1
			{
				displayName ="$STR_TU144D_BOFF";
				position = "doorarea";
				radius =100;
				showWindow = 0;
				condition = "player in this and this animationPhase ""ABSwitch"" >= 0.9";
				statement = "this animate [""ABSwitch"",0]";
				onlyforplayer = false;
			};
		};

		class Exhausts
		{
		   class Exhaust1
		   {
			   position = "exhaust1";
			   direction = "exhaust1_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust2
		   {
			   position = "exhaust2";
			   direction = "exhaust2_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust3
		   {
			   position = "exhaust3";
			   direction = "exhaust3_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust4
		   {
			   position = "exhaust4";
			   direction = "exhaust4_dir";
			   effect = "ExhaustsEffectPlane";
		   };
		};
	};

	class tu144d_d77105 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME2";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77105\fuse01_t.paa",
											"tu144d\liveries\d77105\fuse02_t.paa",
											"tu144d\liveries\d77105\fuse03_t.paa",
											"tu144d\liveries\d77105\tail_t.paa",
											"tu144d\liveries\d77105\wing_t.paa"
										};
	};

	class tu144d_d77111 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME3";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77111\fuse01_t.paa",
											"tu144d\liveries\d77111\fuse02_t.paa",
											"tu144d\liveries\d77111\fuse03_t.paa",
											"tu144d\liveries\d77111\tail_t.paa",
											"tu144d\liveries\d77111\wing_t.paa"
										};
	};

	class tu144d_d77112 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME4";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77112\fuse01_t.paa",
											"tu144d\liveries\d77112\fuse02_t.paa",
											"tu144d\liveries\d77112\fuse03_t.paa",
											"tu144d\liveries\d77112\tail_t.paa",
											"tu144d\liveries\d77112\wing_t.paa"
										};
	};

	class tu144d_d77113 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME5";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77113\fuse01_t.paa",
											"tu144d\liveries\d77113\fuse02_t.paa",
											"tu144d\liveries\d77113\fuse03_t.paa",
											"tu144d\liveries\d77113\tail_t.paa",
											"tu144d\liveries\d77113\wing_t.paa"
										};
	};

	class tu144d_d77114_afl : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME6";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77114_afl\fuse01_t.paa",
											"tu144d\liveries\d77114_afl\fuse02_t.paa",
											"tu144d\liveries\d77114_afl\fuse03_t.paa",
											"tu144d\liveries\d77114_afl\tail_t.paa",
											"tu144d\liveries\d77114_afl\wing_t.paa"
										};
	};

	class tu144d_d77115_max : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME7";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77115_max\fuse01_t.paa",
											"tu144d\liveries\d77115_max\fuse02_t.paa",
											"tu144d\liveries\d77115_max\fuse03_t.paa",
											"tu144d\liveries\d77115_max\tail_t.paa",
											"tu144d\liveries\d77115_max\wing_t.paa"
										};
	};

	class tu144d_d77116_afl_nc : tu144d
	{
		faction = "CIV_RU";
		displayName="$STR_TU144D_NAME8";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\d77116_afl_nc\fuse01_t.paa",
											"tu144d\liveries\d77116_afl_nc\fuse02_t.paa",
											"tu144d\liveries\d77116_afl_nc\fuse03_t.paa",
											"tu144d\liveries\d77116_afl_nc\tail_t.paa",
											"tu144d\liveries\d77116_afl_nc\wing_t.paa"
										};
	};

	class tu144d_ll77114 : tu144d
	{
		faction = "CIV_RU";
		displayName="$STR_TU144D_NAME9";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\ll77114\fuse01_t.paa",
											"tu144d\liveries\ll77114\fuse02_t.paa",
											"tu144d\liveries\ll77114\fuse03_t.paa",
											"tu144d\liveries\ll77114\tail_t.paa",
											"tu144d\liveries\ll77114\wing_t.paa"
										};
	};

	class tu144d_ll77114_moscow : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME10";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\ll77114_moscow\fuse01_t.paa",
											"tu144d\liveries\ll77114_moscow\fuse02_t.paa",
											"tu144d\liveries\ll77114_moscow\fuse03_t.paa",
											"tu144d\liveries\ll77114_moscow\tail_t.paa",
											"tu144d\liveries\ll77114_moscow\wing_t.paa"
										};
	};

	class tu144d_s68001 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME11";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s68001\fuse01_t.paa",
											"tu144d\liveries\s68001\fuse02_t.paa",
											"tu144d\liveries\s68001\fuse03_t.paa",
											"tu144d\liveries\s68001\tail_t.paa",
											"tu144d\liveries\s68001\wing_t.paa"
										};
	};

	class tu144d_s77101 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME12";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77101\fuse01_t.paa",
											"tu144d\liveries\s77101\fuse02_t.paa",
											"tu144d\liveries\s77101\fuse03_t.paa",
											"tu144d\liveries\s77101\tail_t.paa",
											"tu144d\liveries\s77101\wing_t.paa"
										};
	};

	class tu144d_s77101_red : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME13";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77101_red\fuse01_t.paa",
											"tu144d\liveries\s77101_red\fuse02_t.paa",
											"tu144d\liveries\s77101_red\fuse03_t.paa",
											"tu144d\liveries\s77101_red\tail_t.paa",
											"tu144d\liveries\s77101_red\wing_t.paa"
										};
	};

	class tu144d_s77102 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME14";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77102\fuse01_t.paa",
											"tu144d\liveries\s77102\fuse02_t.paa",
											"tu144d\liveries\s77102\fuse03_t.paa",
											"tu144d\liveries\s77102\tail_t.paa",
											"tu144d\liveries\s77102\wing_t.paa"
										};
	};

	class tu144d_s77103 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME15";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77103\fuse01_t.paa",
											"tu144d\liveries\s77103\fuse02_t.paa",
											"tu144d\liveries\s77103\fuse03_t.paa",
											"tu144d\liveries\s77103\tail_t.paa",
											"tu144d\liveries\s77103\wing_t.paa"
										};
	};

	class tu144d_s77104 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME16";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77104\fuse01_t.paa",
											"tu144d\liveries\s77104\fuse02_t.paa",
											"tu144d\liveries\s77104\fuse03_t.paa",
											"tu144d\liveries\s77104\tail_t.paa",
											"tu144d\liveries\s77104\wing_t.paa"
										};
	};

	class tu144d_s77106 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME17";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77106\fuse01_t.paa",
											"tu144d\liveries\s77106\fuse02_t.paa",
											"tu144d\liveries\s77106\fuse03_t.paa",
											"tu144d\liveries\s77106\tail_t.paa",
											"tu144d\liveries\s77106\wing_t.paa"
										};
	};

	class tu144d_s77107 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME18";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77107\fuse01_t.paa",
											"tu144d\liveries\s77107\fuse02_t.paa",
											"tu144d\liveries\s77107\fuse03_t.paa",
											"tu144d\liveries\s77107\tail_t.paa",
											"tu144d\liveries\s77107\wing_t.paa"
										};
	};

	class tu144d_s77108 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME19";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77108\fuse01_t.paa",
											"tu144d\liveries\s77108\fuse02_t.paa",
											"tu144d\liveries\s77108\fuse03_t.paa",
											"tu144d\liveries\s77108\tail_t.paa",
											"tu144d\liveries\s77108\wing_t.paa"
										};
	};

	class tu144d_s77109 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME20";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77109\fuse01_t.paa",
											"tu144d\liveries\s77109\fuse02_t.paa",
											"tu144d\liveries\s77109\fuse03_t.paa",
											"tu144d\liveries\s77109\tail_t.paa",
											"tu144d\liveries\s77109\wing_t.paa"
										};
	};

	class tu144d_s77110 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME21";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77110\fuse01_t.paa",
											"tu144d\liveries\s77110\fuse02_t.paa",
											"tu144d\liveries\s77110\fuse03_t.paa",
											"tu144d\liveries\s77110\tail_t.paa",
											"tu144d\liveries\s77110\wing_t.paa"
										};
	};

	class tu144d_s77144 : tu144d
	{
		faction = "CIV_SU";
		displayName="$STR_TU144D_NAME22";
		hiddenSelections[]={
								"fuse01_t",
								"fuse02_t",
								"fuse03_t",
								"tail_t",
								"wing_t"
							};
		hiddenSelectionsTextures[] = 	{
											"tu144d\liveries\s77144\fuse01_t.paa",
											"tu144d\liveries\s77144\fuse02_t.paa",
											"tu144d\liveries\s77144\fuse03_t.paa",
											"tu144d\liveries\s77144\tail_t.paa",
											"tu144d\liveries\s77144\wing_t.paa"
										};
	};
};
