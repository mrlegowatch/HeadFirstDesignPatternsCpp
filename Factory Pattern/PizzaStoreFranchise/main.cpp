//
//  main.cpp
//  Factory Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Cindy Solomon

#include "ChicagoPizzaStore.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...

    auto pizzaStore = new ChicagoPizzaStore();

    pizzaStore->orderPizza("cheese");
    pizzaStore->orderPizza("pepperoni");
    pizzaStore->orderPizza("deep dish");

    return 0;
}
