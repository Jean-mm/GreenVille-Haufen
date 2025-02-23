modded class ItemBase
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionCutBookPage);
	}
	
	bool IsCleanness()
	{
		return m_Cleanness == 1;
	}
};