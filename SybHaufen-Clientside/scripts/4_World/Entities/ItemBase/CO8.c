class CO8_Sleepingbag_surv : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSleep);
	}
};