modded class HFN_MilBed : MD_Item
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSleep);
	}
};