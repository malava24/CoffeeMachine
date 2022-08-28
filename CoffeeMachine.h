#pragma once
#include <iostream>
#include <cstdint>
#include "ICoffeeMachine.h"
#include "ICoffeeMachineRecipe.h"

class CoffeeMachine : public ICoffeeMachine {
public:
	CoffeeMachine(uint32_t water, uint32_t sugar, uint32_t milk, const ICoffeeMachineRecipe& recipe);
	virtual bool MakeAmericano();
	virtual bool MakeLatte();
	virtual bool MakeEspresso();
	virtual bool AddMilk(uint32_t addMilkVal);
	virtual bool AddWater(uint32_t addWaterVal);
	virtual bool AddSugar(uint32_t addSugarVal);
	virtual void ShowCoffeeMachineCapacity();
private:
	bool MakeBeverage(const Ingridients& ingridients);
private:
	uint32_t m_water;
	uint32_t m_sugar;
	uint32_t m_milk;
	const ICoffeeMachineRecipe& m_recipe;

	const uint32_t m_maxWaterCapacity = 1300; 
	const uint32_t m_maxSugarCapacity = 200;
	const uint32_t m_maxMilkCapacity = 1000;
};