//
//  Espresso.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/12/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Espresso.hpp"

Espresso::Espresso() {
    description = "Espresso";
}

double Espresso::cost() const {
    return 1.99;
}
