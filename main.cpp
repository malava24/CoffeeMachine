#include <iostream>
#include "Recipe.h"
#include "CoffeeMachine.h"

int main()
{

    try
    {
        //Recipe recipe;
        CoffeeMachine maker(500, 50, 300);
        maker.MakeBeverage("Latte");
        maker.MakeBeverage("Espresso");
        maker.MakeBeverage("Americano");

        maker.CreateOwnRecipe("Ekspresso", 70, 3, 10);
        maker.MakeBeverage("Ekspresso");

        maker.AddWater(243);
        maker.AddMilk(40);
        maker.AddSugar(23);
        maker.ShowCoffeeMachineCapacity();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what();
    }

}
