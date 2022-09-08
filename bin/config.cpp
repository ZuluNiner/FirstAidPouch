class CfgPatches
{
	class FirstAidPouch
	{
		units[] = {};
		weapons[] = {};
		name = "First Aid Pouch";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Containers","DZ_Gear_Medical"};
	};
};
class CfgMods
{
	class FirstAidPouch
	{
		type = "mod";
		dir = "firstaidpouch";
		name = "Bigger First Aid Pouch";
		author = "Z9";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FirstAidPouch/scripts/4_World"};
			};
		};
	};
};
class CfgSlots
{
	class Slot_MedicalBandage0
	{
		name="MedicalBandage0";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalBandage1
	{
		name="MedicalBandage1";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalAntibiotics{
		name="MedicalAntibiotics";
		displayName="$STR_CfgVehicles_TetracyclineAntibiotics0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalChlorineTablets
	{
		name="MedicalPurificationTablets";
		displayName="$STR_CfgVehicles_PurificationTablets0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalEpinephrine
	{
		name="MedicalEpinephrine";
		displayName="$STR_CfgVehicles_Epinephrine0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalDisinfectant
	{
		name="MedicalDisinfectant";
		displayName="Alcohol Tincture / Iodine";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalSalineBag
	{
		name="MedicalSalineBag";
		displayName="$STR_CfgVehicles_SalineBagIV0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalBloodBag
	{
		name="MedicalBloodBag";
		displayName="$STR_CfgVehicles_BloodBagIV0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalVitamins
	{
		name="MedicalVitamins";
		displayName="$STR_CfgVehicles_VitaminBottle0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_FirstAidPouch
	{
		name="FirstAidPouch";
		displayName="$STR_CfgVehicles_FirstAidKit0";
		ghostIcon="set:dayz_inventory image:vestpouches";
	};
};
class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class Edible_Base;
	class Man;

	class SurvivorBase: Man
	{
		attachments[] += {"FirstAidPouch"};
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_FirstAidPouch"};
		};
	};
	
	class FirstAidKit: Container_Base
	{
		displayName="First Aid Pouch"
		itemsCargoSize[] = {10, 3};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {10, 15};

		attachments[]=
		{
			"MedicalVitamins",
			"MedicalBandage0",
			"MedicalBandage1",
			"MedicalDisinfectant",
			"MedicalEpinephrine",
			"MedicalPurificationTablets",
			"MedicalAntibiotics",
			"MedicalSalineBag",
			"MedicalBloodBag"
		};
		
		inventorySlot[] = {"FirstAidPouch"};
	};

	class BandageDressing: Inventory_Base
	{
		inventorySlot[]=
		{
			"MedicalBandage",
			"MedicalBandage0",
			"MedicalBandage1"
		};
	};
	class Epinephrine: Inventory_Base
	{
		inventorySlot[]=
		{
			"MedicalEpinephrine"
		};
	};
	class PurificationTablets: Edible_Base
	{
		inventorySlot[]=
		{
			"MedicalPurificationTablets"
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		inventorySlot[]=
		{
			"MedicalAntibiotics"
		};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		inventorySlot[]=
		{
			"MedicalDisinfectant"
		};
	};
	class IodineTincture: Edible_Base
	{
		inventorySlot[]=
		{
			"MedicalDisinfectant"
		};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[]=
		{
			"MedicalSalineBag"
		};
	};
	class BloodBagIV: Inventory_Base
	{
		inventorySlot[]=
		{
			"MedicalBloodBag"
		};
	};
	
	class VitaminBottle: Edible_Base
	{
		inventorySlot[]=
		{
			"MedicalVitamins"
		};
	};
};
