modded class ActionWorldCraft: ActionContinuousBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		// Check for NULL pointers first
        if (!target.GetObject() || !item)
            return false;

        ItemBase m_target = ItemBase.Cast(target.GetObject());
        
        if (m_target.OnWorkbench())
        {
            return false;
        }

        // Client
        if (!GetGame().IsDedicatedServer())
        {                    
            return true;
        }
#ifdef SERVER
        else // Server
        {
            // Redundant check, but kept for clarity
            if (!target.GetObject() || !item)
                return false;
        }
#endif
        
        return true; 		
	}
	
	override void Start( ActionData action_data ) //Setup on start of action
	{
		super.Start(action_data);
		if ( action_data.m_Player ) action_data.m_Player.TryHideItemInHands(false);
	}
};

class ActionWorkbenchCraft: ActionWorldCraft
{
	void ActionWorkbenchCraft()
	{
		m_CallbackClass = ActionWorldCraftCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target.GetObject() || !item)
            return false;

        ItemBase m_target = ItemBase.Cast(target.GetObject());
        PluginRecipesManager plugin_recipes_manager = PluginRecipesManager.Cast(GetPlugin(PluginRecipesManager));
        
        if (!plugin_recipes_manager || !m_target || !item)
            return false;

        // Check conditions safely
        bool condition = (!item.OnWorkbench() && !m_target.OnWorkbench()) || !plugin_recipes_manager.GetValidRecipes(m_target, item, null, player);
        
        if (condition)
        {
            return false;
        }

        // Client
        if (!GetGame().IsDedicatedServer())
        {                    
            return true;
        }
        
        return true;		
	}
	
	override protected void CreateAndSetupActionCallback( ActionData action_data )
	{
		ActionBaseCB callback;

		Class.CastTo(callback, action_data.m_Player.AddCommandModifier_Action(DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING,ActionWorldCraftCB));

		callback.SetActionData(action_data); 
		callback.InitActionComponent(); //jtomasik - tohle mozna patri do constructoru callbacku?
		action_data.m_Callback = callback;
	}
};