//
//  CheesePizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "CheesePizza.hpp"
#include <iostream>

CheesePizza::CheesePizza()
{
    name = "Cheese Pizza";
    dough = "Regular crust";
    sauce = "Marinara Pizza sauce";
    toppings.push_back("Fresh mozzarella");
    toppings.push_back("Parmesan");
}


//void CheesePizza::prepare() override
//{
//    std::cout << "Preparing " << std::endl;
//}
//
//void CheesePizza::bake() override
//{
//    std::cout << "Baking " << std::endl;
//}
//
//void CheesePizza::cut() override
//{
//    std::cout << "Cutting " << std::endl;
//}
//
//void CheesePizza::box() override
//{
//    std::cout << "Boxing " << std::endl;
//}
//
