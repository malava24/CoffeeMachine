#include "CoffeeMachine.h"
 
CoffeeMachine::CoffeeMachine(uint32_t water, uint32_t sugar, uint32_t milk ) :
	m_water(water),
	m_sugar(sugar),
	m_milk(milk)
{
}
  bool CoffeeMachine::CreateOwnRecipe(std::string name, uint32_t water, uint32_t sugar, uint32_t milk) {
	  return m_recipe.CreateOwnRecipe(name, water, sugar, milk);
}

 bool CoffeeMachine::MakeBeverage(const std::string& name) {
	 
	 const Ingridients& curIngridients = m_recipe.GetRecipe(name);
	 if (curIngridients.water == 0) {
		 std::cout << "Coffee without water...?" << std::endl;
		 return false;
	 }
	 if (m_water < curIngridients.water || m_sugar < curIngridients.sugar || m_milk < curIngridients.milk) {
		 std::cout << "not enough resources in the coffee machine" << std::endl;
		 return false;
	 }
	 m_water -= curIngridients.water;
	 m_sugar -= curIngridients.sugar;
	 m_milk -= curIngridients.milk;
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
		 std::cout << "The coffee machine can't hold that much sugar." << std::endl;
		 return false;
	 }
	 else {
		 m_sugar = res;
		 return true;
	 }
 }
  void CoffeeMachine::ShowCoffeeMachineCapacity() {
	  std::cout << "Capacity coffee machine:" << std::endl;
	  std::cout << "Water - " << m_water << std::endl;
	  std::cout << "Sugar - " << m_sugar << std::endl;
	  std::cout << "Milk - " << m_milk << std::endl;
 } 
 