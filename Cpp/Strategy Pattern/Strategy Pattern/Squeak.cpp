//
//  Squeak.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Squeak.hpp"

#include <iostream>

void Squeak::quack() const {
    std::cout << "Squeak" << std::endl;
}
