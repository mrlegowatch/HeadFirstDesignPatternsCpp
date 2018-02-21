//
//  main.cpp
//  Factory Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Cindy Solomon

#include "SimplePizzaFactory.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    SimplePizzaFactory factory;

    PizzaStore pizzaStore(factory);

    auto pizza = pizzaStore.orderPizza("cheese");
    std::cout << "We ordered a " + pizza->getName() << std::endl;
    std::cout << *pizza;

    auto vegPizza = pizzaStore.orderPizza("veggie");
    std::cout << "We ordered a " + vegPizza->getName() << std::endl;
    std::cout << *vegPizza;

    return 0;
}
