//
//  DecoyDuck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "DecoyDuck.hpp"

#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"

#include <iostream>

DecoyDuck::DecoyDuck() :
    Duck(std::make_shared<FlyNoWay>(), std::make_shared<MuteQuack>()) {
}

void DecoyDuck::display() const {
    std::cout << "I'm just a decoy duck" << std::endl;
}
