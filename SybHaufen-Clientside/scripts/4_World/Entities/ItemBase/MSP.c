class Msp_SleepingBag_Base : Msp_Foldable_Item
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSleep);
	}
};
class Msp_Mattress_Base : Msp_Foldable_Item
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSleep);
	}
};