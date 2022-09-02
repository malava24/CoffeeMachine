#pragma once
#include <iostream>
#include <cstdint>
#include "ICoffeeMachine.h"
#include "ICoffeeMachineRecipe.h"
#include "Recipe.h"

class CoffeeMachine : public ICoffeeMachine {
public:
	
	CoffeeMachine(uint32_t water, uint32_t sugar, uint32_t milk );

	virtual bool CreateOwnRecipe(std::string name, uint32_t water, uint32_t sugar, uint32_t milk);
	virtual bool AddMilk(uint32_t addMilkVal);
	virtual bool AddWater(uint32_t addWaterVal);
	virtual bool AddSugar(uint32_t addSugarVal);
	virtual void ShowCoffeeMachineCapacity();
	bool MakeBeverage(const std::string& name);

private:
	uint32_t m_water;
	uint32_t m_sugar;
	uint32_t m_milk;
	Recipe m_recipe;

	const uint32_t m_maxWaterCapacity = 2000; 
	const uint32_t m_maxSugarCapacity = 200;
	const uint32_t m_maxMilkCapacity = 1000;
	 
};