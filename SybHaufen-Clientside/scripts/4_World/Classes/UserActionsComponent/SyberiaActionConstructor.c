modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
	{		
		super.RegisterActions(actions);
		actions.Insert(ActionInjectSyringeSelf);
		actions.Insert(ActionInjectSyringeTarget);
		actions.Insert(ActionEmptySyringe);
		actions.Insert(ActionInjectInjectorTarget);
		actions.Insert(ActionInjectInjectorSelf);
		actions.Insert(ActionSurgeryTarget);
		actions.Insert(ActionSurgerySelf);
		actions.Insert(ActionUseSalveTarget);
		actions.Insert(ActionUseSalveSelf);
		actions.Insert(ActionOpenPDA);
		actions.Insert(ActionSleep);
        actions.Insert(ActionCutBookPage);
		actions.Insert(ActionPlugStethoscope);
		actions.Insert(ActionStethoscopeInspect);
		actions.Insert(ActionWashFruitsWell);
		actions.Insert(ActionWashFruitsWater);
	}
};