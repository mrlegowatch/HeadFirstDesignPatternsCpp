//
//  CheesePizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "CheesePizza.hpp"
#include <iostream>

void CheesePizza::prepare()
{
    std::cout << "Preparing " << std::endl;
}

void CheesePizza::bake()
{
    std::cout << "Baking " << std::endl;
}

void CheesePizza::cut()
{
    std::cout << "Cutting " << std::endl;
}

void CheesePizza::box()
{
    std::cout << "Boxing " << std::endl;
}

