//
//  NYPizzaStore.cpp
//  PizzaStoreFranchise
//
//  Created by Cindy Solomon on 2/20/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "NYPizzaStore.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStylePepperoniPizza.hpp"


std::unique_ptr<Pizza> NYPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese")
    {
        pizza = std::make_unique<NYStyleCheesePizza>();
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<NYStylePepperoniPizza>();
    }
    return pizza;
}
