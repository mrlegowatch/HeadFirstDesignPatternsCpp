//
//  ClamPizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ClamPizza.hpp"
#include <iostream>

ClamPizza::ClamPizza()
{
    name = "Clam Pizza";
    dough = "Thin crust";
    sauce = "White garlic sauce";
    toppings.push_back("Clams");
    toppings.push_back("Grated parmesan cheese");
}



//void ClamPizza::prepare() override
//{
//    std::cout << "Preparing " << std::endl;
//}
//
//void ClamPizza::bake() override
//{
//    std::cout << "Baking " << std::endl;
//}
//
//void ClamPizza::cut() override
//{
//    std::cout << "Cutting " << std::endl;
//}
//
//void ClamPizza::box() override
//{
//    std::cout << "Boxing " << std::endl;
//}

