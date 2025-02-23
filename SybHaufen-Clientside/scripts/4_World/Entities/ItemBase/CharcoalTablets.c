modded class CharcoalTablets
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionForceConsumeSingle);
		RemoveAction(ActionConsumeSingle);
	}
}