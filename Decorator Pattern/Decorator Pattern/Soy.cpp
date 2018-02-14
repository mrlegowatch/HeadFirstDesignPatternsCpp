//
//  Soy.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Soy.hpp"

Soy::Soy(Beverage *beverage) {
    this->beverage = beverage;
}

std::string Soy::getDescription() const {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() const {
    return beverage->cost() + 0.15;
}
