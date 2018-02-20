//
//  DarkRoast.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "DarkRoast.hpp"

std::string DarkRoast::getDescription() const {
    return "Dark Roast Coffee";
}

double DarkRoast::cost() const {
    return 0.99;
}
