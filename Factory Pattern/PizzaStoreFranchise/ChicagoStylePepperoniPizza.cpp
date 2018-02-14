//
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ChicagoStylePepperoniPizza.hpp"
#include <iostream>

void ChicagoStylePepperoniPizza::prepare()
{
    std::cout << "Preparing Chicago style with yucky pepperonis" << std::endl;
}

void ChicagoStylePepperoniPizza::bake()
{
    std::cout << "Baking Chicago style with yucky pepperonis" << std::endl;
}

void ChicagoStylePepperoniPizza::cut()
{
    std::cout << "Cutting Chicago style with yucky pepperonis" << std::endl;
}

void ChicagoStylePepperoniPizza::box()
{
    std::cout << "Boxing Chicago style with yucky pepperonis" << std::endl;
}

