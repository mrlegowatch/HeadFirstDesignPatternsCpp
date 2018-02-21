//
//  PizzaStore.cpp
//  AbstractFactoryShenanigans
//
//  Created by Cindy Solomon on 2/21/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Pizza.hpp"
#include "PizzaStore.hpp"

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    auto pizza = makePizza(type);

    if (pizza != nullptr)
    {
        std::cout << "\n--- Making a " + pizza->getName() + " ---\n \n";
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    else
    {
        std::cout << "Not a valid pizza type. I don't know how to make this pizza!!" << std::endl;
    }
    return pizza;
};
