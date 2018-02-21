//
//  PepperoniPizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "PepperoniPizza.hpp"
#include <iostream>

PepperoniPizza::PepperoniPizza()
{
    name = "Pepperoni Pizza";
    dough = "Regular crust";
    sauce = "Marinara Pizza sauce";
    toppings.push_back("Sliced pepperoni");
    toppings.push_back("Sliced onion");
    toppings.push_back("Grated parmesan chese");

}

//void PepperoniPizza::prepare() override
//{
//    std::cout << "Preparing " << std::endl;
//}
//
//void PepperoniPizza::bake() override
//{
//    std::cout << "Baking " << std::endl;
//}
//
//void PepperoniPizza::cut() override
//{
//    std::cout << "Cutting " << std::endl;
//}
//
//void PepperoniPizza::box() override
//{
//    std::cout << "Boxing " << std::endl;
//}

