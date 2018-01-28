//
//  FlyNoWay.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "FlyNoWay.hpp"

#include <iostream>

void FlyNoWay::fly() const {
    std::cout << "I can't fly!" << std::endl;
}
