//
//  main.cpp
//  Decorator Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"

#include "Milk.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    auto beverage = new Espresso();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    
    Beverage* beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    Beverage* beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
}
