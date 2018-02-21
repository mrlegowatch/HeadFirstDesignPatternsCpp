//
//  Mocha.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Mocha.hpp"

Mocha::Mocha(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {
}

std::string Mocha::getDescription() const {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const {
    return beverage->cost() + 0.20;
}
