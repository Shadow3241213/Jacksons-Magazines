class CfgPatches
{
	class JACKSON_Magazines
	{
		requiredAddons[]=
		{
			"uk3cb_baf_weapons_Ammo",
			"uk3cb_baf_weapons_L85a3",
			"rhsusf_weapons",
			"rhsusf_weapons3"
		};
		author="Jackson";
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMagazines 
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class UK3CB_BAF_556_30Rnd_T;
	class UK3CB_BAF_556_100Rnd_T;
	class UK3CB_BAF_762_L42A1_20Rnd_T;
	class UK3CB_BAF_762_100Rnd_T;
	// 5.56
	class JACKSON_556_T_30Rnd_Magazine_RHS_4: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="Jackson";
		displayName="30rnd STANAG M855A1 (TE4)";
		tracersEvery=5;
		lastRoundsTracer=1;
		displayNameShort="M855A1 EPR (TE4)";
	};
	class JACKSON_556_T_30Rnd_Magazine_RHS_2: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="Jackson";
		displayName="30rnd STANAG M855A1 (TE2)";
		tracersEvery=3;
		lastRoundsTracer=1;
		displayNameShort="M855A1 EPR (TE2)";
	};
	class JACKSON_556_T_30Rnd_Magazine_4 : UK3CB_BAF_556_30Rnd_T 
	{
		author="Jackson";
		displayName="5.56mm 30rnd Tracer Mag (TE4)";
		tracersEvery=5;
		lastRoundsTracer=1;
		displayNameShort="5.56mm (TE4)";
	};
	class JACKSON_556_T_30Rnd_Magazine_2 : UK3CB_BAF_556_30Rnd_T 
	{
		author="Jackson";
		displayName="5.56mm 30rnd Tracer Mag (TE2)";
		tracersEvery=3;
		lastRoundsTracer=1;
		displayNameShort="5.56mm Tracer (TE2)";
	};
	class JACKSON_556_T_100Rnd_Magazine_2 : UK3CB_BAF_556_100Rnd_T
	{
		author="Jackson";
		displayName="5.56mm 100rnd Tracer Boxmag (TE2)";
		tracersEvery=3;
		lastRoundsTracer=1;
		displayNameShort="5.56mm Tracer (TE2)";
	};
	class JACKSON_556_T_100Rnd_Magazine_4 : UK3CB_BAF_556_100Rnd_T
	{
		author="Jackson";
		displayName="5.56mm 100rnd Tracer Boxmag (TE4)";
		tracersEvery=5;
		lastRoundsTracer=1;
		displayNameShort="5.56mm Tracer (TE4)";
	};
	// 7.62
	class JACKSON_762_T_100Rnd_Magazine_4 : UK3CB_BAF_762_100Rnd_T
	{
		author="Jackson";
		displayName="7.62mm 100rnd Tracer Belt (TE4)";
		tracersEvery=5;
		lastRoundsTracer=1;
		displayNameShort="7.62mm Tracer (TE4)";
	};
	class JACKSON_762_T_100Rnd_Magazine_2 : UK3CB_BAF_762_100Rnd_T
	{
		author="Jackson";
		displayName="7.62mm 100rnd Tracer Belt (TE2)";
		tracersEvery=3;
		lastRoundsTracer=1;
		displayNameShort="7.62mm Tracer (TE2)";
	};
	class JACKSON_762_T_20Rnd_Magazine_4 : UK3CB_BAF_762_L42A1_20Rnd_T
	{
		author="Jackson";
		displayName="7.62mm 20rnd Tracer Mag (TE4)";
		tracersEvery=5;
		lastRoundsTracer=1;
		displayNameShort="7.62mm Tracer (TE2)";	
	};
	class JACKSON_762_T_20Rnd_Magazine_2 : UK3CB_BAF_762_L42A1_20Rnd_T
	{
		author="Jackson";
		displayName="7.62mm 20rnd Tracer Mag (TE2)";
		tracersEvery=3;
		lastRoundsTracer=1;
		displayNameShort="7.62mm Tracer (TE4)";	
	};
};
class cfgWeapons
{
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L85A3 : UK3CB_BAF_L85A2
	{ 
		magazineWell[] = { "JACKSON_556" };
	};
	class UK3CB_safe_base;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class Single;
		class single_medium_optics1;
		class single_far_optics1;
	};
	class srifle_EBR_F: EBR_base_F
	{
	};
	class UK3CB_BAF_L129A1 : srifle_EBR_F
	{ 
		magazineWell[] = { "JACKSON_762_2" };
	};
	class UK3CB_BAF_L7A2 : Rifle_Long_Base_F
	{ 
		magazineWell[] = { "JACKSON_762" };
	};
	class UK3CB_BAF_L110_Base;
	class UK3CB_BAF_L110_556_Base : UK3CB_BAF_L110_Base
	{ 
		magazineWell[] = { "JACKSON_556_2" };
	};
	class UK3CB_BAF_L110_762_Base : UK3CB_BAF_L110_Base
	{ 
		magazineWell[] = { "JACKSON_762_2" };
	};
	class rhs_weap_m4_Base;
	class rhs_weap_m4a1: rhs_weap_m4_Base
	{
		class WeaponSlotsInfo;
		magazineWell[] = { "STANAG_556x45" };
	};
};
class CfgMagazineWells
{
	class JACKSON_556
	{
		JACKSON_Magazines[] =
		{
			"JACKSON_556_T_30Rnd_Magazine_4",
			"JACKSON_556_T_30Rnd_Magazine_2"
		};
	};
	class JACKSON_556_2
	{
		JACKSON_Magazines[] =
		{
			"JACKSON_556_T_100Rnd_Magazine_4",
			"JACKSON_556_T_100Rnd_Magazine_2"
		};
	};
	class JACKSON_762
	{
		JACKSON_Magazines[] =
		{
			"JACKSON_762_T_100Rnd_Magazine_4",
			"JACKSON_762_T_100Rnd_Magazine_2",
		};
	};
	class JACKSON_762_2
	{
		JACKSON_Magazines[] =
		{
			"JACKSON_762_T_20Rnd_Magazine_4",
			"JACKSON_762_T_20Rnd_Magazine_2"
		};
	};
	class STANAG_556x45
	{
		JACKSON_Magazines[]=
		{
			"JACKSON_556_T_30Rnd_Magazine_RHS_2",
			"JACKSON_556_T_30Rnd_Magazine_RHS_4"
		};
	};
};