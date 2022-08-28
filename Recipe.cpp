#include "Recipe.h"

bool Recipe::SetAmericanoRecipe(uint32_t water, uint32_t sugar, uint32_t milk) {
	m_americanoRecipe = { water, sugar, milk };
	return true;
};
bool Recipe::SetLatteRecipe(uint32_t water, uint32_t sugar, uint32_t milk) {
	m_latteRecipe = { water, sugar, milk };
	return true;
};bool Recipe::SetEspressoRecipe(uint32_t water, uint32_t sugar, uint32_t milk) {
	m_espressoRecipe = { water, sugar, milk };
	return true;
};
const Ingridients& Recipe::GetAmericanoRecipe() const {
	return m_americanoRecipe;
};
const Ingridients& Recipe::GetLatteRecipe() const {
	return m_latteRecipe;

}const Ingridients& Recipe::GetEspressoRecipe() const {
	return m_espressoRecipe;
}