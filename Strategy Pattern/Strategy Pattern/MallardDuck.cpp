//
//  MallardDuck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "MallardDuck.hpp"

#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>

MallardDuck::MallardDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {
}

void MallardDuck::display() const {
    std::cout << "I'm a real Mallard duck" << std::endl;
}
