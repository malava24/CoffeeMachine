#pragma once

class ICoffeeMachine {
public:
	 
	virtual ~ICoffeeMachine() {}
	virtual bool CreateOwnRecipe(std::string name, uint32_t water, uint32_t sugar, uint32_t milk) = 0;
	virtual bool AddMilk(uint32_t addMilkVal) = 0;
	virtual bool AddWater(uint32_t addWaterVal) = 0;
	virtual bool AddSugar(uint32_t addSugarVal) = 0;
	virtual void ShowCoffeeMachineCapacity() = 0; 
	bool MakeBeverage(const std::string& name);
	
 
};