#pragma once
#include "ICoffeeMachineRecipe.h"
#include <vector>

class Recipe : public ICoffeeMachineRecipe {
public:
	Recipe();
	virtual Ingridients GetRecipe(const std::string& name) const;
	bool CreateOwnRecipe(std::string name, uint32_t water, uint32_t sugar, uint32_t milk);

private:
	  Ingridients GetAmericanoRecipe() const;
	  Ingridients GetLatteRecipe() const;
	  Ingridients GetEspressoRecipe() const;
	 

private:
	std::vector<Ingridients> m_recipes;
	Cup m_volume;
};