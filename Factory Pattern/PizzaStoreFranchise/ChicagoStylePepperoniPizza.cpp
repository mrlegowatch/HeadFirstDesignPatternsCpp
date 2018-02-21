//
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ChicagoStylePepperoniPizza.hpp"
#include <iostream>

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
    name = "Chicago Style Pepperoni Pizza";
    dough = "Extra thick crust dough";
    sauce = "Plum tomato sauce";
    toppings.push_back("Shredded mozzarella");
    toppings.push_back("Sliced pepperoni");
    toppings.push_back("No olives or eggplant because that should not go on a pizza");
}

