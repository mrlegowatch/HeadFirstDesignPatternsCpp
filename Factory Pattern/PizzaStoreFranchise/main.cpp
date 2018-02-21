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
    //auto nyStore = new NYPizzaStore();
    auto chicagoStore = new ChicagoPizzaStore();

    auto chicagoCheese = chicagoStore->orderPizza("cheese");

    auto chicagoPepperoni = chicagoStore->orderPizza("pepperoni");


    return 0;
}
