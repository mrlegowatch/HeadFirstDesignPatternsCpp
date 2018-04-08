//
//  GarageDoor.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "GarageDoor.hpp"

#include <iostream>

GarageDoor::GarageDoor(const std::string& location) :
    location(location) {
}

void GarageDoor::up() {
    std::cout << location << " Garage Door is opened." << std::endl;
}

void GarageDoor::down() {
    std::cout << location << " Garage Door is closed." << std::endl;
}
