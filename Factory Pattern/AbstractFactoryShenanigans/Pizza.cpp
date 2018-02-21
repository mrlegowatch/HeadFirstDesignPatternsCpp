//
//  Pizza.cpp
//  AbstractFactoryShenanigans
//
//  Created by Cindy Solomon on 2/21/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Pizza.hpp"

#include <iostream>
#include <sstream>

const std::string& Pizza::getName() const
{
    return this->name;
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

    if (pizza.dough != null)
    {
        str.append(pizza.dough + "\n");
    }

    if (pizza.sauce != null)
    {
        str.append(pizza.sauce + "\n");
    }

    for (auto& veggie : pizza.veggies)
    {
        str.append("  " + veggie + "\n");
    }

    if (pizza.pepperoni != null)
    {
        str.append(pizza.pepperoni + "\n");
    }


    str.append("\n");

    return os << str;
}

