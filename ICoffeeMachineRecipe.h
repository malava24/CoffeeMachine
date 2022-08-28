#pragma once
#include <cstdint>
struct Ingridients {
	uint32_t water;
	uint32_t sugar;
	uint32_t milk;
};
class ICoffeeMachineRecipe {
public:
	virtual ~ICoffeeMachineRecipe() {}
	virtual bool SetAmericanoRecipe(uint32_t water, uint32_t sugar, uint32_t milk) = 0;
	virtual bool SetLatteRecipe(uint32_t water, uint32_t sugar, uint32_t milk) = 0;
	virtual bool SetEspressoRecipe(uint32_t water, uint32_t sugar, uint32_t milk) = 0;
	virtual const Ingridients& GetAmericanoRecipe() const = 0;
	virtual const Ingridients& GetLatteRecipe() const = 0;
	virtual const Ingridients& GetEspressoRecipe() const = 0;
};