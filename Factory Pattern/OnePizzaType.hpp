//
//  OnePizzaType.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include <iostream>

class Pizza {

    public:

    void prepare()
    {
        std::cout << "Preparing " << std::endl;
    };

    void bake()
    {
        std::cout << "Baking " << std::endl;
    };

    void cut()
    {
        std::cout << "Cutting " << std::endl;
    };

    void box()
    {
        std::cout << "Boxing " << std::endl;
    };
};

Pizza orderPizza()
{
    // For flexibility, we really want this to be an abstract class or interface, but we can't directly instantiate either of those.
    Pizza pizza = Pizza();

    pizza.prepare();
    pizza.bake();
    pizza.cut();
    pizza.box();

    return pizza;
};
