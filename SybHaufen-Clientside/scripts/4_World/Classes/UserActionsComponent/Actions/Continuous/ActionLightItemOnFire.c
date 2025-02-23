modded class ActionLightItemOnFire
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		bool result = super.ActionCondition( player, target, item );
		
		if (result && item.IsInherited(HandDrillKit) && !player.GetPerkBoolValue(SyberiaPerkType.SYBPERK_SURVIVAL_HANDDRILL_USE))
		{
			return false;
		}

		if (result && item.IsInherited(Torch) && item.IsInherited(HandDrillKit) && !player.GetPerkBoolValue(SyberiaPerkType.SYBPERK_SURVIVAL_HANDDRILL_USE))
        {
            return false;
        }
		
		return result;
	}
};