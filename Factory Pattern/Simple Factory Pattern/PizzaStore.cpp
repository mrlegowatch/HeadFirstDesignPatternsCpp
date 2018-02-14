//
//  PizzaStore.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"
#include <iostream>

PizzaStore::PizzaStore(SimplePizzaFactory factory)
{
    this->factory = factory;
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    
    std::unique_ptr<Pizza> pizza = nullptr;

    pizza = factory.createPizza(type);

    if (pizza != nullptr)
    {
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

}
