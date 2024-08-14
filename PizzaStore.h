#pragma once

#include "SimplePizzaFactory.h"
#include "IPizza.h"

#include <memory>
#include <string_view>

class PizzaStore
{
public:
	PizzaStore() = default;
	PizzaStore(std::unique_ptr<SimplePizzaFactory> f) :factory(std::move(f))
	{
	}
	std::unique_ptr<Pizza> orderPizza(std::string_view type);
private:
	std::unique_ptr<SimplePizzaFactory> factory = nullptr;
};
