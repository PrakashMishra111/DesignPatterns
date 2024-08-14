#include "IPizza.h"
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include <memory>

int main()
{
	auto factory = std::make_unique<SimplePizzaFactory>();
	auto pizzaStore = PizzaStore(std::move(factory));
	auto pizza = pizzaStore.orderPizza("cheese");

	return 0;
}