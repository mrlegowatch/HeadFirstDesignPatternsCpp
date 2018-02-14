//
//  PepperoniPizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "PepperoniPizza.hpp"
#include <iostream>

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << std::endl;
}

void PepperoniPizza::bake()
{
    std::cout << "Baking " << std::endl;
}

void PepperoniPizza::cut()
{
    std::cout << "Cutting " << std::endl;
}

void PepperoniPizza::box() 
{
    std::cout << "Boxing " << std::endl;
}

