 #include <iostream>
#include "Recipe.h"
#include "CoffeeMachine.h"
 
int main()
{
    Recipe recipe;
    recipe.SetAmericanoRecipe(60, 4, 0);
    recipe.SetLatteRecipe(100, 7, 45);
    recipe.SetEspressoRecipe(30, 0, 0);

    CoffeeMachine maker(500, 50, 200, recipe);
    maker.MakeEspresso();
    maker.MakeAmericano();
    maker.MakeLatte();

    maker.AddMilk(40);
    maker.AddWater(233);
    maker.AddSugar(23);
    maker.ShowCoffeeMachineCapacity();
}
 