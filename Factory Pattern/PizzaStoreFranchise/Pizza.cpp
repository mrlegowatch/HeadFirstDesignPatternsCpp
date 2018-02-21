//
//  Pizza.cpp
//  SimpleFactoryPattern
//
//  Created by Cindy Solomon on 2/20/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Pizza.hpp"
#include <iostream>
#include <sstream>

const std::string& Pizza::getName() const
{
    return this->name;
}

void Pizza::prepare() const
{
    std::cout << "Preparing " + getName() << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings: " << std::endl;
    for (auto& topping : this->toppings)
    {
        std::cout << "  " + topping + "\n";
    }
}
void Pizza::bake() const
{
    std::cout << "Baking for 25 min at 350 degrees "<< std::endl;
}

void Pizza::cut() const
{
    std::cout << "Cut the pizza into diagonal slices "<< std::endl;
}
void Pizza::box() const
{
    std::cout << "Boxing in official PizzaStore boxes" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
{
    std::string str;

    str = "\n---- " + pizza.getName() + "----\n";
    str.append(pizza.dough + "\n");
    str.append(pizza.sauce + "\n");

    for (auto& topping : pizza.toppings)
    {
        str.append("  " + topping + "\n");
    }

    str.append("\n");

    return os << str;
}

