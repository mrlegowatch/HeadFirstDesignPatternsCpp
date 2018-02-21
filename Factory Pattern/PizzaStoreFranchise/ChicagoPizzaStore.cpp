//
//  ChicagoPizzaStore.cpp
//  PizzaStoreFranchise
//
//  Created by Cindy Solomon on 2/20/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ChicagoPizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"

std::unique_ptr<Pizza> ChicagoPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese")
    {
        pizza = std::make_unique<ChicagoStyleCheesePizza>();
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<ChicagoStylePepperoniPizza>();
    }
    else if (type == "veggie")
    {
        pizza = std::make_unique<ChicagoStyleVeggiePizza>();
    }
    return pizza;
}


