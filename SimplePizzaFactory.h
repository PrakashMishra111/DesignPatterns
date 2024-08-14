#pragma once

#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "IPizza.h"
#include "VeggiePizza.h"

#include<memory>
#include<string_view>

class SimplePizzaFactory
{
public:
	std::unique_ptr<Pizza> createPizza(std::string_view);
};
