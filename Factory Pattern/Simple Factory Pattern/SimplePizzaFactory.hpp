//
//  SimplePizzaFactory.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/12/18.


#ifndef SimplePizzaFactory_hpp
#define SimplePizzaFactory_hpp

#include "Pizza.hpp"
#include <string>

class SimplePizzaFactory
{
    public:
    
    std::unique_ptr<Pizza> createPizza(const std::string& type);

};

#endif /* SimplePizzaFactory_hpp */
