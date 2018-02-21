//
//  PizzaStore.hpp
//  AbstractFactoryShenanigans
//
//  Created by Cindy Solomon on 2/21/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef PizzaStore_hpp
#define PizzaStore_hpp

#include "Pizza.hpp"
#include <string>

class PizzaStore
{

public:

    std::unique_ptr<Pizza> orderPizza(std::string type);
    virtual std::unique_ptr<Pizza> makePizza(std::string type) = 0;

};

#endif /* PizzaStore_hpp */
