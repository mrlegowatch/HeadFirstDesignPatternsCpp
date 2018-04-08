//
//  TV.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "TV.hpp"


#include <iostream>

TV::TV(const std::string& location) :
    location(location) {
}

void TV::on() {
    std::cout << location << " TV is on." << std::endl;
}

void TV::off() {
    std::cout << location << " TV is off." << std::endl;
}
