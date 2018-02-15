//
//  ModelDuck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ModelDuck.hpp"

#include "FlyNoWay.hpp"
#include "Quack.hpp"

#include <iostream>

ModelDuck::ModelDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Quack>()) {
}

void ModelDuck::display() const {
    std::cout << "I'm a model duck" << std::endl;
}
