//
//  PizzaStore.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef PizzaStore_hpp
#define PizzaStore_hpp

#include "SimplePizzaFactory.hpp"
#include "Pizza.hpp"
#include <string>
#include <iostream>

class PizzaStore
{

public:

    std::unique_ptr<Pizza> orderPizza(std::string type);
    virtual std::unique_ptr<Pizza> makePizza(std::string type) = 0;

};

#endif /* PizzaStore_hpp */
