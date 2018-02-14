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

    pizzaStore.orderPizza("cheese");
    pizzaStore.orderPizza("deep dish");

    return 0;
}
