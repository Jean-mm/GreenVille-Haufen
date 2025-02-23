modded class DisinfectItem extends RecipeBase
{
    override void Init()
	{
        super.Init();
        InsertIngredient(0,"GlassBottle");
		InsertIngredient(0,"vinegar_mung");
		InsertIngredient(0,"SFP_Vodka_Pseno");
  		InsertIngredient(0,"SFP_Vodka_Rus");
  		InsertIngredient(0,"SFP_Vodka_Sibir");
  		InsertIngredient(0,"SFP_Vodka_istrinka");
  		InsertIngredient(0,"SFP_Vodka_Kazak");
  		InsertIngredient(0,"SFP_JackDan_Bootle");
  		InsertIngredient(0,"SFP_Cognac_Bootle");
    };

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		ItemBase ingredient1 = ingredients[0];
		ItemBase ingredient2 = ingredients[1];
		
				
		if ( !ingredient2.CanBeDisinfected() )
			return false;
		
		if ( ingredient1.GetQuantity() < ingredient1.GetDisinfectQuantity() )
		{
			return false;
		}

		
		int liquid_type = ingredient1.GetLiquidType();
		return (liquid_type & LIQUID_DISINFECTANT) != 0 || (liquid_type & LIQUID_VODKA) != 0;
	}
};