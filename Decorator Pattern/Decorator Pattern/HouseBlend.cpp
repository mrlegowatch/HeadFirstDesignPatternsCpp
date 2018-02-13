//
//  HouseBlend.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "HouseBlend.hpp"

HouseBlend::HouseBlend() {
    description = "House Blend Coffee";
}

double HouseBlend::cost() const {
    return 0.89;
}
