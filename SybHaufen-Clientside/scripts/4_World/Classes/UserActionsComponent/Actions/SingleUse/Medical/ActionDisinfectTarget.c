

modded class ActionDisinfectSelf
{
	void ActionDisinfectSelf()
	{
		m_CallbackClass = ActionWashHandsItemContinuousCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CLEANHANDSBOTTLE;
		m_FullBody		= false;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_CLEANHANDSBOTTLE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_Text = "#syb_disinfect_hands";
	}

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        if (player.GetItemOnSlot("Gloves"))
            return false;

        if (item.IsInherited(Bottle_Base))
        {
            int liquidType = item.GetLiquidType();

            if (liquidType == LIQUID_VODKA && item.GetQuantity() >= (item.GetQuantityMax() * 0.5))
            {
                return true;
            }

			return false;
        }

        bool result = (item.GetQuantity() >= item.GetDisinfectQuantity() && !player.GetItemOnSlot("Gloves"));
        return result;
    }
    
    override void OnFinishProgressServer( ActionData action_data )
    {
        action_data.m_Player.SetBloodyHands(false);
        super.OnFinishProgressServer(action_data);
    }
};

modded class ActionDisinfectTarget
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (target && target.GetObject())
		{
			PlayerBase other = PlayerBase.Cast( target.GetObject() );
			if (other.GetItemOnSlot("Gloves"))
			{
				return false;
			}
		}

		if (item.IsInherited(Bottle_Base))
        {
            int liquidType = item.GetLiquidType();

            if (liquidType == LIQUID_VODKA && item.GetQuantity() >= (item.GetQuantityMax() * 0.5))
            {
                return true;
            }
			
			return false;
        }
		
		bool result = ( item.GetQuantity() >= item.GetDisinfectQuantity() && !player.GetItemOnSlot("Gloves"));
		return result;
	}
	
	override string GetText()
	{
		return "#syb_disinfect_hands";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		PlayerBase target = PlayerBase.Cast(action_data.m_Target.GetObject());		
		if( target )
		{
			target.SetBloodyHands(false);
		}
		
		super.OnFinishProgressServer(action_data);
	}
}