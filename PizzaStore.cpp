#include "PizzaStore.h"

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string_view type)
{
	auto pizza = factory->createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	
	return pizza;
}