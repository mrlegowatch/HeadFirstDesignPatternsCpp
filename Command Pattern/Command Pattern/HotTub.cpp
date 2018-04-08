//
//  HotTub.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "HotTub.hpp"

#include <iostream>

HotTub::HotTub(const std::string& location) :
    location(location) {
}

void HotTub::on() {
    std::cout << location << " Hot Tub is on." << std::endl;
}

void HotTub::off() {
    std::cout << location << " Hot Tub is off." << std::endl;
}
