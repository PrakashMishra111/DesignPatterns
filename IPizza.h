#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pizza
{
public:
	Pizza()          = default;
	virtual ~Pizza() = default;

	virtual void prepare() const;
	virtual void bake() const
	{
		std::cout << "Bake for 25 minutes at 350" << std::endl;
	}
	virtual void cut() const
	{
		std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}
	virtual void box() const
	{
		std::cout << "Place the pizza in official Pizza Store box" << std::endl;
	}
	std::string getName() const
	{
		return name;
	}
protected:
	std::string name = {};
	std::string dough = {};
	std::string sauce = {};
	std::vector<std::string> toppings = {};
};
