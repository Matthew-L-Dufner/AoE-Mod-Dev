class CfgPatches
{
	class dz_Honey_Badger
	{
		units[]={};
		weapons[]=
		{
			"dz_Honey_Badger",
			"dz_Honey_Badger_black",
			"dz_Honey_Badger_camo",
			"dz_Honey_Badger_Tan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Firearms_M4"
		};
		author="Magic Bottle (Maslenok mod)";
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class M4A1;
	class dz_Honey_Badger: M4A1
	{
		scope=2;
		weight=2950;
		WeaponLength=0.75;
		chamberableFrom[]=
		{
			"Ammo_300",
			"Ammo_300AP"
		};
		magazines[]=
		{
			"Mag_HoneyBadger_30Rnd",
			"Mag_HoneyBadger_tan_30Rnd"
		};
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		displayName="$STR_dz_w_honeybadger";
		descriptionShort="$STR_dz_w_honeybadger_dsc";
		model="dz_weapons\Honey_Badger\aac_hb.p3d";
		ironsightsExcludingOptics[]=
		{
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics"
		};
		itemSize[]={7,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz_weapons\Honey_Badger\data\AAC_HB_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AUG_silencer_SoundSet",
				"AUG_silencerTail_SoundSet",
				"AUG_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=0.1;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AUG_silencer_SoundSet",
				"AUG_silencerTail_SoundSet",
				"AUG_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=0.075000003;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=7;
			type="shot";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=7;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class dz_Honey_Badger_black: dz_Honey_Badger
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz_weapons\Honey_Badger\data\AAC_HB_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class dz_Honey_Badger_camo: dz_Honey_Badger
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz_weapons\Honey_Badger\data\AAC_HB_camo.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class dz_Honey_Badger_Tan: dz_Honey_Badger
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz_weapons\Honey_Badger\data\AAC_HB_camo_tan.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"dz_weapons\Honey_Badger\data\aac_hb_worn.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
