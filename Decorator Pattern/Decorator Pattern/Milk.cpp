//
//  Milk.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Milk.hpp"

Milk::Milk(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {
}

std::string Milk::getDescription() const {
    return beverage->getDescription() + ", Steamed Milk";
}

double Milk::cost() const {
    return beverage->cost() + 0.10;
}
