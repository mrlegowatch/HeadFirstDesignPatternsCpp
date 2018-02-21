//
//  NYPizzaStore.hpp
//  PizzaStoreFranchise
//
//  Created by Cindy Solomon on 2/20/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef NYPizzaStore_hpp
#define NYPizzaStore_hpp

#include "Pizza.hpp"
#include "PizzaStore.hpp"


class NYPizzaStore: public PizzaStore
{
    public:

    std::unique_ptr<Pizza> makePizza(std::string type);
};

#endif /* NYPizzaStore_hpp */
