#include "Recipe.h"
#include <iostream>
#include <stdexcept>
#include "ICoffeeMachineRecipe.h"
 
Recipe::Recipe() {
	m_recipes.push_back(GetAmericanoRecipe());
	m_recipes.push_back(GetLatteRecipe());
	m_recipes.push_back(GetEspressoRecipe());
}

 Ingridients Recipe::GetRecipe(const std::string& name) const {
	 
	 for (size_t i = 0; i < m_recipes.size(); ++i) {
		 if (m_recipes[i].name == name) {
			 return m_recipes[i];
		 }
	 }
		 throw std::runtime_error(name);
}
 

 Ingridients Recipe::GetAmericanoRecipe() const {
	Ingridients americano;
	americano.name = "Americano";
	americano.water = 120;
	americano.sugar = 4;
	americano.milk = 0;
	return americano;
};
  Ingridients Recipe::GetLatteRecipe() const {
	Ingridients latte;
	latte.name = "Latte";
	latte.water = 50;
	latte.sugar = 7;
	latte.milk = 100;
	return latte;

}
  Ingridients Recipe::GetEspressoRecipe() const {
	Ingridients espresso;
	espresso.name = "Espresso";
	espresso.water = 50;
	espresso.sugar = 0;
	espresso.milk = 0;
	return espresso;
} 
  bool Recipe::CreateOwnRecipe(std::string name, uint32_t water, uint32_t sugar, uint32_t milk) {
	  uint32_t beverageVolume = water + milk;
	  if(beverageVolume > m_volume.bigCup){
		  std::cerr << "your drink will not fit into a cup" << std::endl;
		  return false;
	  }
	  else {
		  Ingridients ownRecipe;
		  ownRecipe.name = name;
		  ownRecipe.water = water;
		  ownRecipe.sugar = sugar;
		  ownRecipe.milk = milk;
		  m_recipes.push_back(ownRecipe);
		  return true;
	  }
  }

   