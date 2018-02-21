//
//  main.cpp
//  Factory Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Cindy Solomon

#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"

int main(int argc, const char * argv[])
{
    auto nyStore            = new NYPizzaStore();
    auto chicagoStore       = new ChicagoPizzaStore();

    auto nyCheese           = nyStore->orderPizza("cheese");
    auto chicagoCheese      = chicagoStore->orderPizza("cheese");


    auto nyPepperoni        = nyStore->orderPizza("pepperoni");
    auto chicagoPepperoni   = chicagoStore->orderPizza("pepperoni");

    return 0;
}
