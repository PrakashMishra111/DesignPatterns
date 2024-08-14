#include "SimplePizzaFactory.h"

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string_view type)
{
	if (type == "cheese")
		return std::make_unique<CheesePizza>();
	if (type == "pepperoni")
		return std::make_unique<PepperoniPizza>();
	if (type == "clam")
		return std::make_unique<ClamPizza>();
	if (type == "veggie")
		return std::make_unique<VeggiePizza>();

	return nullptr;
}