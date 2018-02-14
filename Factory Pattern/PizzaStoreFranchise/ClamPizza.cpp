//
//  ClamPizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ClamPizza.hpp"
#include <iostream>

void ClamPizza::prepare()
{
    std::cout << "Preparing " << std::endl;
}

void ClamPizza::bake()
{
    std::cout << "Baking " << std::endl;
}

void ClamPizza::cut()
{
    std::cout << "Cutting " << std::endl;
}

void ClamPizza::box()
{
    std::cout << "Boxing " << std::endl;
}

