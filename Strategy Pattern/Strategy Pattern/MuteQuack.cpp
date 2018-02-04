//
//  MuteQuack.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "MuteQuack.hpp"

#include <iostream>

void MuteQuack::quack() const {
    std::cout << "<< Silence >>" << std::endl;
}
