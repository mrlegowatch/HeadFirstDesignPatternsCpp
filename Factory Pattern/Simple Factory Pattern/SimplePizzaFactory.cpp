//
//  SimplePizzaFactory.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/12/18.

#include "SimplePizzaFactory.hpp"
#include "Pizza.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"
#include "VeggiePizza.hpp"


#include <vector>
#include <string>
#include <iostream>

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(const std::string& type)
{
    // If not a valid type, returns a null object.

        std::unique_ptr<Pizza> pizza = nullptr;

        if (type == "cheese")
        {
            pizza = std::make_unique<CheesePizza>();
        }
        else if (type == "pepperoni")
        {
            pizza = std::make_unique<PepperoniPizza>();
        }
        else if (type == "clam")
        {
            pizza = std::make_unique<ClamPizza>();
        }
        else if (type == "veggie")
        {
            pizza = std::make_unique<VeggiePizza>();
        }
    return pizza;

}

