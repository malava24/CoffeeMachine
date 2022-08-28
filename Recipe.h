#pragma once
#include "ICoffeeMachineRecipe.h"

class Recipe : public ICoffeeMachineRecipe {
public:
	virtual bool SetAmericanoRecipe(uint32_t water, uint32_t sugar, uint32_t milk);
	virtual bool SetLatteRecipe(uint32_t water, uint32_t sugar, uint32_t milk);
	virtual bool SetEspressoRecipe(uint32_t water, uint32_t sugar, uint32_t milk);
	virtual const Ingridients& GetAmericanoRecipe() const;
	virtual const Ingridients& GetLatteRecipe() const;
	virtual const Ingridients& GetEspressoRecipe() const;
private:
	Ingridients m_americanoRecipe;
	Ingridients m_latteRecipe;
	Ingridients m_espressoRecipe;
};