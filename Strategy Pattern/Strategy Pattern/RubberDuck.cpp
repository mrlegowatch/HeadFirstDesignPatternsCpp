//
//  RubberDuck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "RubberDuck.hpp"

#include "FlyNoWay.hpp"
#include "Squeak.hpp"

#include <iostream>

RubberDuck::RubberDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) {
}

void RubberDuck::display() const {
    std::cout << "I'm rubber duckie" << std::endl;
}
