#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(uint32_t water, uint32_t sugar, uint32_t milk, const ICoffeeMachineRecipe& recipe) :
	m_water(water),
	m_sugar(sugar),
	m_milk(milk),
	m_recipe(recipe)
{
}

 bool CoffeeMachine::MakeAmericano() {
	const Ingridients& americano = m_recipe.GetAmericanoRecipe();
	return MakeBeverage(americano);
};

 bool CoffeeMachine::MakeLatte() {
	const Ingridients& latte = m_recipe.GetLatteRecipe();
	return MakeBeverage(latte);
};

 bool CoffeeMachine::MakeEspresso() {
	const Ingridients& espresso = m_recipe.GetEspressoRecipe();
	return MakeBeverage(espresso);
};

 bool CoffeeMachine::MakeBeverage(const Ingridients& ingridients) {
	 if (ingridients.water == 0) {
		 std::cout << "Coffe without water...?" << std::endl;
		 return false;
	 }
	 if (m_water < ingridients.water || m_sugar < ingridients.sugar || m_milk < ingridients.milk) {
		 std::cout << "not enough resources in the coffee machine" << std::endl;
		 return false;
	 }
	 m_water -= ingridients.water;
	 m_sugar -= ingridients.sugar;
	 m_milk -= ingridients.milk;
	 std::cout << "Succsesful" << std::endl;
	 return true;
 }
 bool CoffeeMachine::AddMilk(uint32_t addMilkVal) {
	 uint32_t res = addMilkVal + m_milk;
	 if (res > m_maxMilkCapacity) {
		 std::cout << "The coffee machine can't hold that much milk." << std::endl;
		 return false;
	 }
	 else {
		 m_milk  = res;;
		 return true;
	 }
 }
 bool CoffeeMachine::AddWater(uint32_t addWaterVal) {
	 uint32_t res = addWaterVal + m_water;
	 if (res > m_maxWaterCapacity) {
		 std::cout << "The coffee machine can't hold that much water." << std::endl;
		 return false;
	 }
	 else {
		 m_water = res;
		 return true;
	 }
  }
 bool CoffeeMachine::AddSugar(uint32_t addSugarVal) {
	 uint32_t res = addSugarVal + m_sugar;
	 if (res > m_maxSugarCapacity) {
		 std::cout << "The coffee machine can't hold that much water." << std::endl;
		 return false;
	 }
	 else {
		 m_sugar = res;
		 return true;
	 }
 }
  void CoffeeMachine::ShowCoffeeMachineCapacity() {
	  std::cout << "Capacity:" << std::endl;
	  std::cout << "Water - " << m_water << std::endl;
	  std::cout << "Sugar - " << m_sugar << std::endl;
	  std::cout << "Milk - " << m_milk << std::endl;
 }
  
