#pragma once
#include <cstdint>
#include <string>
struct Ingridients {
	std::string name;
	uint32_t water;
	uint32_t sugar;
	uint32_t milk;
};
struct Cup {
	uint32_t lowCup = 100; //ml
	uint32_t mediumCup = 200; //ml
	uint32_t bigCup = 300; //ml
};
class ICoffeeMachineRecipe {
public:
	 
	virtual ~ICoffeeMachineRecipe()  {}
	virtual Ingridients GetRecipe(const std::string& name) const = 0;
	 
 
	 
};