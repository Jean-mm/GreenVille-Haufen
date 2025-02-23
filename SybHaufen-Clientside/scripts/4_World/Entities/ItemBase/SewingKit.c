modded class SewingKit: Inventory_Base
{
    override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSurgeryTarget);
		AddAction(ActionSurgerySelf);
	}

    override float GetInfectionChance(int system = 0, Param param = null)
	{
		if(m_Cleanness == 1)
		{
			return 0;
		}
		else
		{
			return 0.5;
		}
	}
    
    override void InitItemVariables()
    {
        super.InitItemVariables();
        can_this_be_combined = true;
    }

    override void OnCombine(ItemBase other_item)
	{
		super.OnCombine(other_item);
		if (m_Cleanness == 1 && other_item.m_Cleanness == 0)
			SetCleanness(0);
	}
};