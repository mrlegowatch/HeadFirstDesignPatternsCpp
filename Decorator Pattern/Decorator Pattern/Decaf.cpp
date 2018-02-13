//
//  Decaf.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Decaf.hpp"

Decaf::Decaf() {
    description = "Decaf";
}

double Decaf::cost() const {
    return 1.05;
}
