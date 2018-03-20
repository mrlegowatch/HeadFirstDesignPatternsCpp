//
//  Light.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Light.hpp"

#include <iostream>

Light::Light(const std::string& location) :
    location(location),
    level(0) {
}

void Light::on() {
    dimmed(100);
}

void Light::off() {
    dimmed(0);
}

void Light::dimmed(int level) {
    this->level = level;
    
    switch (level) {
        case 0:
        std::cout << location << " Light is off" << std::endl;
        break;
        case 100:
        std::cout << location << " Light is on" << std::endl;
        break;
        default:
        std::cout << location << " Light is dimmed to " << level << "%" << std::endl;
    }
}

int Light::getLevel() const {
    return level;
}
