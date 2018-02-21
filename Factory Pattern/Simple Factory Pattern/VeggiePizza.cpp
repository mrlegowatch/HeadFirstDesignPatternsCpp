//
//  PepperoniPizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "VeggiePizza.hpp"
#include <iostream>

VeggiePizza::VeggiePizza()
{
    name = "Veggie Pizza";
    dough = "Regular crust";
    sauce = "Marinara sauce";
    toppings.push_back("Shredded mozzarella");
    toppings.push_back("Grated Parmesan");
    toppings.push_back("Diced onion");
    toppings.push_back("Sliced mushrooms");
    toppings.push_back("Sliced red pepper");
    toppings.push_back("No olives because they're gross");
}

//void VeggiePizza::prepare() override
//{
//    std::cout << "Preparing " << std::endl;
//}
//
//void VeggiePizza::bake() override
//{
//    std::cout << "Baking " << std::endl;
//}
//
//void VeggiePizza::cut() override
//{
//    std::cout << "Cutting " << std::endl;
//}
//
//void VeggiePizza::box() override
//{
//    std::cout << "Boxing " << std::endl;
//}


