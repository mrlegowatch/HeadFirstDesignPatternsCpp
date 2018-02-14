//
//  ChicagoPizzaStore.hpp
//  PizzaStoreFranchise
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ChicagoPizzaStore_h
#define ChicagoPizzaStore_h

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"

class ChicagoPizzaStore: public PizzaStore
{

public:


    std::unique_ptr<Pizza> makePizza(std::string type) 
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
        return pizza;
    }


};


#endif /* ChicagoPizzaStore_h */
