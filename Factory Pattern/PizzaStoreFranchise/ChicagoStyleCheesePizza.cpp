//
//  ChicagoStyleCheesePizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ChicagoStyleCheesePizza.hpp"
#include <iostream>

void ChicagoStyleCheesePizza::prepare()
{
    std::cout << "Preparing Chicago style " << std::endl;
}

void ChicagoStyleCheesePizza::bake()
{
    std::cout << "Baking Chicago style" << std::endl;
}

void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting Chicago style" << std::endl;
}

void ChicagoStyleCheesePizza::box()
{
    std::cout << "Boxing Chicago style" << std::endl;
}

