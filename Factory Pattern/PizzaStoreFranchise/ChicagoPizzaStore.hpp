//
//  ChicagoPizzaStore.hpp
//  PizzaStoreFranchise
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ChicagoPizzaStore_hpp
#define ChicagoPizzaStore_hpp

#include "Pizza.hpp"
#include "PizzaStore.hpp"


class ChicagoPizzaStore: public PizzaStore
{
public:

    std::unique_ptr<Pizza> makePizza(std::string type);
};


#endif /* ChicagoPizzaStore_hpp */
