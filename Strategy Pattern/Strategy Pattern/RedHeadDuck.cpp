//
//  RedHeadDuck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "RedHeadDuck.hpp"

#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>

RedHeadDuck::RedHeadDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {
}

void RedHeadDuck::display() const {
    std::cout << "I'm a real Red Headed duck" << std::endl;
}
