#include "IPizza.h"

void Pizza::prepare() const
{
	std::cout << "Preparing" + name  << std::endl;
	std::cout << "Tossing Dough...." << std::endl;
	std::cout << "Adding sauce....." << std::endl;
	std::cout << "Adding toppings.." << std::endl;

	for (const auto& topping : toppings)
	{
		std::cout << " " + topping << std::endl;
	}
}