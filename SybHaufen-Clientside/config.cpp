class CfgPatches
{
	class SyberiaScripts
	{
		units[]={};
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgMods
{
	class SyberiaScripts
	{
		type="mod";
		author="Terje Broygard";
		inputs="SyberiaScripts/inputs/inputs.xml";
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"SyberiaScripts/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SyberiaScripts/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SyberiaScripts/scripts/5_Mission"
				};
			};
			class imageSets
			{
				files[]={};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base: Inventory_Base
	{
	};
	class Bottle_Base;
	class SodaCan_ColorBase;
	class Clothing;
	class Container_Base;
	class BaseBuildingBase;
	class House;
	class HouseNoDestruct;
	class Transmitter_Base;
	class SurvivorM_Mirek;
	class SurvivorM_Boris;
	class SurvivorM_Cyril;
	class SurvivorM_Denis;
	class SurvivorM_Elias;
	class SurvivorM_Francis;
	class SurvivorM_Guo;
	class SurvivorM_Hassan;
	class SurvivorM_Indar;
	class SurvivorM_Jose;
	class SurvivorM_Kaito;
	class SurvivorM_Lewis;
	class SurvivorM_Manua;
	class SurvivorM_Niki;
	class SurvivorM_Oliver;
	class SurvivorM_Peter;
	class SurvivorM_Quinn;
	class SurvivorM_Rolf;
	class SurvivorM_Seth;
	class SurvivorM_Taiki;
	class SurvivorF_Eva;
	class SurvivorF_Frida;
	class SurvivorF_Gabi;
	class SurvivorF_Helga;
	class SurvivorF_Irena;
	class SurvivorF_Judy;
	class SurvivorF_Keiko;
	class SurvivorF_Linda;
	class SurvivorF_Maria;
	class SurvivorF_Naomi;
	class SurvivorF_Baty;
	class SurvivorM_Mirek_Ghost: SurvivorM_Mirek
	{
	};
	class SurvivorM_Boris_Ghost: SurvivorM_Boris
	{
	};
	class SurvivorM_Cyril_Ghost: SurvivorM_Cyril
	{
	};
	class SurvivorM_Denis_Ghost: SurvivorM_Denis
	{
	};
	class SurvivorM_Elias_Ghost: SurvivorM_Elias
	{
	};
	class SurvivorM_Francis_Ghost: SurvivorM_Francis
	{
	};
	class SurvivorM_Guo_Ghost: SurvivorM_Guo
	{
	};
	class SurvivorM_Hassan_Ghost: SurvivorM_Hassan
	{
	};
	class SurvivorM_Indar_Ghost: SurvivorM_Indar
	{
	};
	class SurvivorM_Jose_Ghost: SurvivorM_Jose
	{
	};
	class SurvivorM_Kaito_Ghost: SurvivorM_Kaito
	{
	};
	class SurvivorM_Lewis_Ghost: SurvivorM_Lewis
	{
	};
	class SurvivorM_Manua_Ghost: SurvivorM_Manua
	{
	};
	class SurvivorM_Niki_Ghost: SurvivorM_Niki
	{
	};
	class SurvivorM_Oliver_Ghost: SurvivorM_Oliver
	{
	};
	class SurvivorM_Peter_Ghost: SurvivorM_Peter
	{
	};
	class SurvivorM_Quinn_Ghost: SurvivorM_Quinn
	{
	};
	class SurvivorM_Rolf_Ghost: SurvivorM_Rolf
	{
	};
	class SurvivorM_Seth_Ghost: SurvivorM_Seth
	{
	};
	class SurvivorM_Taiki_Ghost: SurvivorM_Taiki
	{
	};
	class SurvivorF_Eva_Ghost: SurvivorF_Eva
	{
	};
	class SurvivorF_Frida_Ghost: SurvivorF_Frida
	{
	};
	class SurvivorF_Gabi_Ghost: SurvivorF_Gabi
	{
	};
	class SurvivorF_Helga_Ghost: SurvivorF_Helga
	{
	};
	class SurvivorF_Irena_Ghost: SurvivorF_Irena
	{
	};
	class SurvivorF_Judy_Ghost: SurvivorF_Judy
	{
	};
	class SurvivorF_Keiko_Ghost: SurvivorF_Keiko
	{
	};
	class SurvivorF_Linda_Ghost: SurvivorF_Linda
	{
	};
	class SurvivorF_Maria_Ghost: SurvivorF_Maria
	{
	};
	class SurvivorF_Naomi_Ghost: SurvivorF_Naomi
	{
	};
	class SurvivorF_Baty_Ghost: SurvivorF_Baty
	{
	};
	class SodaCan_EnergyDrink: SodaCan_ColorBase
	{
	};
	class BakedBeansCan_Opened;
	class PeachesCan_Opened;
	class TacticalBaconCan_Opened;
	class SpaghettiCan_Opened;
	class SardinesCan_Opened;
	class TunaCan_Opened;
	class DogFoodCan_Opened;
	class CatFoodCan_Opened;
	class PorkCan_Opened;
	class Lunchmeat_Opened;
	class UnknownFoodCan_Opened;
	class Pajka_Opened;
	class Pate_Opened;
	class BrisketSpread_Opened;
	class BakedBeansCan_OpenedRotten: BakedBeansCan_Opened
	{
	};
	class PeachesCan_OpenedRotten: PeachesCan_Opened
	{
	};
	class TacticalBaconCan_OpenedRotten: TacticalBaconCan_Opened
	{
	};
	class SpaghettiCan_OpenedRotten: SpaghettiCan_Opened
	{
	};
	class SardinesCan_OpenedRotten: SardinesCan_Opened
	{
	};
	class TunaCan_OpenedRotten: TunaCan_Opened
	{
	};
	class DogFoodCan_OpenedRotten: DogFoodCan_Opened
	{
	};
	class CatFoodCan_OpenedRotten: CatFoodCan_Opened
	{
	};
	class PorkCan_OpenedRotten: PorkCan_Opened
	{
	};
	class Lunchmeat_OpenedRotten: Lunchmeat_Opened
	{
	};
	class UnknownFoodCan_OpenedRotten: UnknownFoodCan_Opened
	{
	};
	class Pajka_OpenedRotten: Pajka_Opened
	{
	};
	class Pate_OpenedRotten: Pate_Opened
	{
	};
	class BrisketSpread_OpenedRotten: BrisketSpread_Opened
	{
	};
	class PainkillerTablets: Edible_Base
	{
		scope=0;
	};
	class InjectionVial: Inventory_Base
	{
		scope=0;
	};
	class Epinephrine: Inventory_Base
	{
		scope=0;
	};
	class Syringe: Epinephrine
	{
		scope=0;
	};
	class ClearSyringe: Inventory_Base
	{
		scope=0;
	};
	class BloodSyringe: Inventory_Base
	{
		scope=0;
	};
	class Morphine: Inventory_Base
	{
		scope=0;
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		scope=0;
	};
	class CharcoalTablets: Edible_Base
	{
		descriptionShort="Fabricados com carvão ativado. Usados exclusivamente como refil para filtros de máscara de gás";
		medicalItem=1;
		isMedicalItem=1;
	};
	class Thermometer: Inventory_Base
	{
		scope=2;
		medicalItem=1;
		isMedicalItem=1;
	};
	class VitaminBottle: Edible_Base
	{
		scope=2;
		medicalItem=1;
		isMedicalItem=1;
	};
	class BandageDressing: Inventory_Base
	{
		medBloodStop=2;
		medicalItem=1;
		isMedicalItem=1;
	};
	class Rag: Inventory_Base
	{
		medBloodStop=2;
	};
	class Bandana_ColorBase: Clothing
	{
		medBloodStop=2;
	};
	class SurgicalGloves_ColorBase: Clothing
	{
		medGloves=1;
		varCleannessInit=1;
		medicalItem=1;
		isMedicalItem=1;
	};
	class PurificationTablets: Edible_Base
	{
		medicalItem=1;
	};
	class IodineTincture: Edible_Base
	{
		medicalItem=1;
	};
	class DisinfectantAlcohol: Edible_Base
	{
		medicalItem=1;
	};
	class DisinfectantSpray: Edible_Base
	{
		medicalItem=1;
	};
	class SalineBag: Inventory_Base
	{
		medicalItem=1;
	};
	class StartKitIV: Inventory_Base
	{
		medicalItem=1;
	};
	class SalineBagIV: Inventory_Base
	{
		medicalItem=1;
	};
	class BloodBagEmpty: Inventory_Base
	{
		medicalItem=1;
	};
	class BloodBagFull: Inventory_Base
	{
		medicalItem=1;
	};
	class BloodBagIV: Inventory_Base
	{
		medicalItem=1;
	};
	class BloodTestKit: Inventory_Base
	{
		medicalItem=1;
	};
	class TabletsBase: Edible_Base
	{
		descriptionShort="#syb_tablets_common_desc";
		rotationFlags=17;
		itemSize[]={1,2};
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		weight=20;
		stackedUnit="pills";
		canBeSplit=1;
		quantityBar=0;
		absorbency=0;
		overdosedIncrement=0.1;
		medicalItem=1;
		isMedicalItem=1;
		varTemperatureMin=0;
		varTemperatureMax=0;
		inventorySlot[]+=
		{
			"Material_Chemical01",
			"Material_Chemical02",
			"Material_Chemical03",
			"Material_Chemical04"
		};
		hiddenSelections[]=
		{
			"pills"
		};
	};
	class TabletsParacetamol: TabletsBase
	{
		scope=2;
		displayName="Paracetamol";
		model="\dz\gear\medical\painkillers2.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medPainkillerLevel=1;
		medPainkillerTimeSec=1300;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_paracetamol.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsCocodamol: TabletsBase
	{
		scope=2;
		displayName="Cocodamol";
		model="\dz\gear\medical\painkillers2.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medPainkillerLevel=1;
		medPainkillerTimeSec=60;
		medConcussionHeal=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_cocodamol.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsAmoxicillin: TabletsBase
	{
		scope=2;
		displayName="Amoxicilinae";
		model="\dz\gear\medical\tetracycline.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medStomatchhealLevel=1;
		medStomatchhealTimeSec=250;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_amoxicillin.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsTetracycline: TabletsBase
	{
		scope=2;
		displayName="Tetraciclina";
		model="\dz\gear\medical\tetracycline.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medAntibioticLevel=1;
		medAntibioticsTimeSec=300;
		medAntibioticsStrength=0.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsLymecycline: TabletsBase
	{
		scope=2;
		displayName="Limeciclina";
		model="\dz\gear\medical\tetracycline.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medPainkillerLevel=1;
		medPainkillerTimeSec=800;
		medAntibioticLevel=2;
		medAntibioticsTimeSec=400;
		medAntibioticsStrength=0.80000001;
		overdosedIncrement=0.2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_lymecycline.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsFluoxetine: TabletsBase
	{
		scope=2;
		displayName="Fluoxetina";
		model="\dz\gear\medical\tetracycline.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medAntidepresantLevel=1;
		medAntidepresantTimer=70;
		overdosedIncrement=0.2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_flouxatine.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TabletsSorbiferDurulis: TabletsBase
	{
		scope=2;
		displayName="Sorbifer Durulis";
		model="\dz\gear\medical\tetracycline.p3d";
		varQuantityInit=10;
		varQuantityMax=10;
		medBloodHematopoiesis=1;
		medBloodHematopoiesisTimeSec=300;
		medBloodHemostatic=1;
		medBloodHemostaticTimeSec=300;
		overdosedIncrement=0.15000001;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\tablets_sorbiferdurulis.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\tablets_base.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\tablets_base_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\tablets_base_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SyberiaMedicineAmpoule: Inventory_Base
	{
		descriptionShort="#syb_ampoule_desc";
		itemSize[]={1,2};
		weight=100;
		quantityBar=1;
		varQuantityInit=3;
		varQuantityMin=0;
		varQuantityMax=3;
		canBeSplit=1;
		varQuantityDestroyOnMin=1;
		stackedUnit="percentage";
		absorbency=0;
		overdosedIncrement=0.30000001;
		medicalItem=1;
		isMedicalItem=1;
		varTemperatureMin=0;
		varTemperatureMax=0;
		hiddenSelections[]=
		{
			"zbytek"
		};
		inventorySlot[]+=
		{
			"Material_Chemical01",
			"Material_Chemical02",
			"Material_Chemical03",
			"Material_Chemical04"
		};
	};
	class AmpouleDiazinon: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Diazinon";
		model="\dz\gear\medical\injectionvial.p3d";
		medHemologicShock=1;
		overdosedIncrement=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_diazinon.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleAtropine: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Atropina";
		model="\dz\gear\medical\injectionvial.p3d";
		medHemologicShock=1;
		overdosedIncrement=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_atropine.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleAntiVirus: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Anti-Virus";
		model="\dz\gear\medical\injectionvial.p3d";
		medRemoveZVirus=1;
		overdosedIncrement=2.0999999;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_w18.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleFlucloxacillin: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Flucloxacilina";
		model="\dz\gear\medical\injectionvial.p3d";
		medAntibioticLevel=3;
		medAntibioticsTimeSec=1400;
		medAntibioticsStrength=3;
		overdosedIncrement=0.80000001;
		medRemoveSepsis=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_flucloxacillin.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleErytropoenin: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Erytropoenin";
		model="\dz\gear\medical\injectionvial.p3d";
		medBloodHematopoiesis=1;
		medBloodHematopoiesisTimeSec=900;
		medBloodHemostatic=1;
		medBloodHemostaticTimeSec=900;
		overdosedIncrement=0.5;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_erytropoenin.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleAdrenalin30: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Adrenalina 30mg";
		model="\dz\gear\medical\injectionvial.p3d";
		medAdrenalinLevel=3;
		medAdrenalinTimeSec=300;
		overdosedIncrement=1.1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_adrenaline.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleLidocaine: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Lidocaína";
		model="\dz\gear\medical\injectionvial.p3d";
		medPainkillerLevel=2;
		medPainkillerTimeSec=1800;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_lidocaine.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleMorphine: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Morfina";
		model="\dz\gear\medical\injectionvial.p3d";
		medPainkillerLevel=3;
		medPainkillerTimeSec=800;
		overdosedIncrement=0.69999999;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_morphine.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleOndansetron: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Ondansetron";
		model="\dz\gear\medical\injectionvial.p3d";
		medStomatchhealLevel=2;
		medStomatchhealTimeSec=1000;
		medPainkillerLevel=1;
		medPainkillerTimeSec=1200;
		medAntibioticLevel=2;
		medAntibioticsTimeSec=1200;
		medAntibioticsStrength=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_ondansetron.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class AmpouleArsenic: SyberiaMedicineAmpoule
	{
		scope=2;
		displayName="Arsênio";
		model="\dz\gear\medical\injectionvial.p3d";
		medHemologicShock=1;
		overdosedIncrement=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\ampoule_arsenic.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\InjectionVial.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\InjectionVial_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\InjectionVial_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="injectionvial_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class InjectorBase: Inventory_Base
	{
		descriptionShort="#syb_injector_base_desc";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		overdosedIncrement=0.44999999;
		medicalItem=1;
		isMedicalItem=1;
		varTemperatureMin=0;
		varTemperatureMax=0;
		inventorySlot[]+=
		{
			"Material_Chemical01",
			"Material_Chemical02",
			"Material_Chemical03",
			"Material_Chemical04"
		};
	};
	class InjectorAntiVirus: InjectorBase
	{
		scope=2;
		displayName="Anti-Virus";
		model="\dz\gear\medical\Epinephrine.p3d";
		medRemoveZVirus=1;
		overdosedIncrement=2.3;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\antivirus.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class InjectorTopoizomeraza: InjectorBase
	{
		scope=2;
		displayName="#syb_topoizomeraza_name";
		model="\dz\gear\medical\Epinephrine.p3d";
		medRemoveSepsis=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\topoizomeraza.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class InjectorAmoksivan: InjectorBase
	{
		scope=2;
		displayName="#syb_amoksivan_name";
		model="\dz\gear\medical\Epinephrine.p3d";
		medAntibioticLevel=3;
		medAntibioticsTimeSec=1800;
		medAntibioticsStrength=5;
		medRemoveSepsis=1;
		overdosedIncrement=0.89999998;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\amoksivan.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class InjectorEpipen: InjectorBase
	{
		scope=2;
		displayName="#syb_epipen_name";
		model="\dz\gear\medical\Epinephrine.p3d";
		medAdrenalinLevel=3;
		medAdrenalinTimeSec=300;
		overdosedIncrement=1.3;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\epipen.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class InjectorNovichek: InjectorBase
	{
		scope=2;
		displayName="#syb_novichek_name";
		model="\dz\gear\medical\Epinephrine.p3d";
		medHemologicShock=1;
		overdosedIncrement=5;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\novichok.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class SalveBase: Inventory_Base
	{
		descriptionShort="#syb_salve_desc";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=120;
		quantityBar=1;
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=5;
		varQuantityDestroyOnMin=1;
		absorbency=0;
		overdosedIncrement=0.0099999998;
		medicalItem=1;
		varTemperatureMin=0;
		varTemperatureMax=0;
	};
	class SalveHirudoid: SalveBase
	{
		scope=2;
		displayName="Hirudoid";
		model="\dz\gear\medical\VitaminBottle.p3d";
		medHematomaHeal=1;
		medHematomaHealTimeSec=400;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\salve_hirudoid.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SyringeEmpty: Inventory_Base
	{
		scope=2;
		displayName="#syb_syringe_empty_name";
		descriptionShort="#syb_syringe_empty_desc";
		model="SyberiaScripts\data\medical\syringe_empty.p3d";
		rotationFlags=17;
		itemSize[]={2,1};
		weight=50;
		absorbency=0;
		varTemperatureMax=100;
		medicalItem=1;
		isMedicalItem=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\syringe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\syringe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\syringe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\syringe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\syringe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SyringeFull: Inventory_Base
	{
		scope=2;
		displayName="#syb_syringe_full_name";
		descriptionShort="#syb_syringe_full_desc";
		model="SyberiaScripts\data\medical\syringe_full.p3d";
		rotationFlags=17;
		itemSize[]={2,1};
		weight=100;
		absorbency=0;
		varTemperatureMax=100;
		medicalItem=1;
		isMedicalItem=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\syringefluid_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\syringe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\syringe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\syringe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\syringe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\syringe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet="Syringe_out_SoundSet";
					id=201;
				};
				class Syringe_spear
				{
					soundSet="Syringe_spear_SoundSet";
					id=202;
				};
				class Syringe_splash
				{
					soundSet="Syringe_splash_SoundSet";
					id=203;
				};
			};
		};
	};
	class BandageHemostatic: BandageDressing
	{
		scope=2;
		displayName="#syb_hemostatic_bandage_name";
		descriptionShort="#syb_hemostatic_bandage_desc";
		model="SyberiaScripts\data\medical\hemostatic_bandage.p3d";
		inventorySlot[]=
		{
			"MedicalBandage"
		};
		isMeleeWeapon=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		quantityBar=1;
		varQuantityDestroyOnMin=1;
		rotationFlags=17;
		weight=150;
		absorbency=0;
		itemSize[]={1,1};
		medBloodStop=3;
		varCleannessInit=1;
		medicalItem=1;
		isMedicalItem=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\bandage.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\bandage.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\bandage_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\bandage_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\bandage_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
			};
		};
	};
	class SurgicalKit: Inventory_Base
	{
		scope=2;
		displayName="#syb_surgical_kit_once_name";
		descriptionShort="#syb_surgical_kit_once_desc";
		model="\dz\gear\tools\sewing_kit.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\surgical_kit_co.paa"
		};
		rotationFlags=17;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		quantityBar=1;
		stackedUnit="percentage";
		varQuantityDestroyOnMin=1;
		weight=4;
		absorbency=0;
		itemSize[]={1,2};
		varCleannessInit=1;
		medicalItem=1;
		isMedicalItem=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MedContainerSmall: Container_Base
	{
		scope=2;
		displayName="#syb_medcontainer_small_name";
		descriptionShort="#syb_medcontainer_small_desc";
		model="\dz\gear\containers\FirstAidKit.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\medical\FirstAidKit_GreyBloody_co.paa",
			"SyberiaScripts\data\medical\FirstAidKit_GreyBloody_co.paa",
			"SyberiaScripts\data\medical\FirstAidKit_GreyBloody_co.paa"
		};
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={4,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class MedContainerMedium: Container_Base
	{
		scope=2;
		displayName="#syb_medcontainer_middle_name";
		descriptionShort="#syb_medcontainer_middle_desc";
		model="SyberiaScripts\data\medical\medium_first_aid_kit.p3d";
		rotationFlags=17;
		weight=250;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		repairableWithKits[]={5,2};
		repairCosts[]={35,30};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\medium_first_aid_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\medium_first_aid_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\medium_first_aid_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\medium_first_aid_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\medium_first_aid_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class MedContainerLarge: Container_Base
	{
		scope=2;
		displayName="#syb_medcontainer_large_name";
		descriptionShort="#syb_medcontainer_large_desc";
		model="SyberiaScripts\data\medical\large_first_aid_kit.p3d";
		rotationFlags=17;
		weight=500;
		itemSize[]={5,5};
		itemsCargoSize[]={8,6};
		repairableWithKits[]={5};
		repairCosts[]={40};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\medical\large_first_aid_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\medical\large_first_aid_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\medical\large_first_aid_kit.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\medical\large_first_aid_kit.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\medical\large_first_aid_kit.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class ItemPDA: Clothing
	{
		scope=2;
		title="#pda_item_name";
		displayName="#pda_item_name";
		descriptionShort="#pda_item_desc";
		model="SyberiaScripts\data\pda\gear_pda_g.p3d";
		inventorySlot="watch";
		itemInfo[]=
		{
			"Clothing"
		};
		rotationFlags=34;
		weight=210;
		heatIsolation=0.1;
		absorbency=0;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={1,2};
		animClass="ItemPDA";
		oldpower=0;
		class ClothingTypes
		{
			male="SyberiaScripts\data\pda\gear_pda_m.p3d";
			female="SyberiaScripts\data\pda\gear_pda_m.p3d";
		};
		hiddenSelections[]=
		{
			"screen"
		};
		hiddenSelectionsTextures[]=
		{
			"SyberiaScripts\data\pda\ekraan_bc.paa",
			"SyberiaScripts\data\pda\ekraan_ok_co.paa"
		};
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.00030000001;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
			updateInterval=10;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SyberiaScripts\data\pda\pda.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SyberiaScripts\data\pda\pda.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SyberiaScripts\data\pda\pda.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SyberiaScripts\data\pda\pda.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SyberiaScripts\data\pda\pda.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SyberiaSoundEmitter: House
	{
	};
	class Raio_EffectSound: SyberiaSoundEmitter
	{
		scope=2;
		model="\dz\data\data\blesk2.p3d";
		emitterLifetime=4;
		emitterRange=1200;
		emitterSound="raiohaufen_1";
	};
	class SleepingBagPlaced_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=30;
		emitterSound="sbag_deploy";
	};
	class SleepingMale_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=5;
		emitterRange=10;
		emitterSound="sleeping_male";
	};
	class SleepingFemale_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=4;
		emitterRange=10;
		emitterSound="sleeping_female";
	};
	class CutPage_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=5;
		emitterRange=10;
		emitterSound="cut_page";
	};
	class JimWow1_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="jim_wow_1";
	};
	class JimWow2_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="jim_wow_2";
	};
	class PlateCarrierVest: Clothing
	{
		bulletProofProtection=0.40000001;
	};
	class PressVest_ColorBase: Clothing
	{
		bulletProofProtection=0.25999999;
	};
	class PoliceVest: Clothing
	{
		bulletProofProtection=0.1;
	};
	class BallisticHelmet_ColorBase: Clothing
	{
		meleeProtection=0.94999999;
		firearmProtection=0.30000001;
	};
	class ZSh3PilotHelmet: Clothing
	{
		meleeProtection=0.80000001;
		firearmProtection=0;
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		meleeProtection=0.89999998;
		firearmProtection=0;
	};
	class MotoHelmet_ColorBase: Clothing
	{
		meleeProtection=1;
		firearmProtection=0;
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		meleeProtection=1;
		firearmProtection=0;
	};
	class TankerHelmet: Clothing
	{
		meleeProtection=0.30000001;
		firearmProtection=0;
	};
	class GorkaHelmet: Clothing
	{
		meleeProtection=0.89999998;
		firearmProtection=0.30000001;
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		meleeProtection=0.89999998;
		firearmProtection=0;
	};
	class SkateHelmet_ColorBase: Clothing
	{
		meleeProtection=0.69999999;
		firearmProtection=0;
	};
	class Ssh68Helmet: Clothing
	{
		meleeProtection=0.60000002;
		firearmProtection=0.1;
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		meleeProtection=1;
		firearmProtection=0;
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		meleeProtection=1;
		firearmProtection=0;
	};
	class Mich2001Helmet: Clothing
	{
		meleeProtection=0.94999999;
		firearmProtection=0.30000001;
	};
	class Stethoscope: Clothing
	{
		scope=2;
		displayName="#syb_stethoscope_name";
		descriptionShort="#syb_stethoscope_desc";
		model="SyberiaScripts\data\medical\Stethoscope_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		medicalItem=1;
		isMedicalItem=1;
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		itemSize[]={3,2};
		weight=200;
		lootCategory="Eyewear";
		lootTag[]=
		{
			"Civilian"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SyberiaScripts\data\medical\Stethoscope_m.p3d";
			female="SyberiaScripts\data\medical\Stethoscope_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeFist: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=2;
				armorDamage=0.1;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=5;
			};
		};
	};
	class MeleeFist_Heavy: MeleeFist
	{
		hitAnimation=1;
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=5;
				armorDamage=0.1;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=15;
			};
		};
	};
	class MeleeBrassKnuckles: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=15;
			};
		};
	};
	class MeleeBrassKnuckles_Heavy: MeleeBrassKnuckles
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=10;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=20;
			};
		};
	};
};
class CfgSounds
{
	class default;
	class raiohaufen_1: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sounds\thunder",
			40,
			1,
			1200
		};
	};
	class sbag_deploy: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sleeping\deploy.ogg",
			2,
			1,
			25
		};
	};
	class sleeping_male: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sleeping\sleeping_male.ogg",
			1,
			1,
			10
		};
	};
	class sleeping_female: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sleeping\sleeping_female.ogg",
			0.80000001,
			1,
			10
		};
	};
	class cut_page: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sounds\actions\cut_page.ogg",
			0.80000001,
			1,
			10
		};
	};
	class jim_wow_1: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sounds\player\wow1.ogg",
			2,
			1,
			25
		};
	};
	class jim_wow_2: default
	{
		sound[]=
		{
			"SyberiaScripts\data\sounds\player\wow2.ogg",
			2,
			1,
			25
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class messagePDA_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"SyberiaScripts\data\pda\pda_message",
				1
			}
		};
		volume=0.30000001;
	};
	class hearthbit_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"SyberiaScripts\data\sounds\player\Hearthbit.ogg",
				1
			}
		};
		volume=0.30000001;
	};
	class psieffect_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"SyberiaScripts\data\sounds\player\PsiEffect.ogg",
				1
			}
		};
		volume=0.5;
	};
	class adminMessage_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"SyberiaScripts\data\sounds\misc\AdminMessage",
				1
			}
		};
		volume=1;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class messagePDA_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"messagePDA_Soundshader"
		};
	};
	class hearthbit_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"hearthbit_Soundshader"
		};
	};
	class psieffect_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"psieffect_Soundshader"
		};
	};
	class adminMessage_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"adminMessage_Soundshader"
		};
	};
};
class CfgSyberia
{
	class AuthSystem
	{
		allowedLettersInName[]=
		{
			"a",
			"b",
			"c",
			"d",
			"e",
			"f",
			"g",
			"h",
			"i",
			"j",
			"k",
			"l",
			"m",
			"n",
			"o",
			"p",
			"q",
			"r",
			"s",
			"t",
			"u",
			"v",
			"w",
			"x",
			"y",
			"z"
		};
	};
	class SleepingSystem
	{
		sleepingMaxValue=14000;
		sleepingLevel5=100;
		sleepingLevel4=1000;
		sleepingLevel3=6000;
		sleepingLevel2=10000;
	};
	class MindstateSystem
	{
		mindstateMaxValue=200;
		mindstateLevel5=10;
		mindstateLevel4=50;
		mindstateLevel3=100;
		mindstateLevel2=160;
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		additionalTemperatureResistForSurvivalSkill=10;
	};
};
