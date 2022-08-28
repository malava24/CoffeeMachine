#pragma once

class ICoffeeMachine {
public:
	virtual ~ICoffeeMachine() {}
	virtual bool MakeAmericano() = 0;
	virtual bool MakeLatte() = 0;
	virtual bool MakeEspresso() = 0;
	virtual bool AddMilk(uint32_t addMilkVal) = 0;
	virtual bool AddWater(uint32_t addWaterVal) = 0;
	virtual bool AddSugar(uint32_t addSugarVal) = 0;
	virtual void ShowCoffeeMachineCapacity() = 0;
	
};