//
//  LightDimCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "LightDimCommand.hpp"

LightDimCommand::LightDimCommand(const std::shared_ptr<Light>& light, int level) :
    light(light),
    level(level),
    previousLevel(Light::invalidDimmedLevel) {
}

void LightDimCommand::execute() {
    previousLevel = light->getLevel();
    light->dimmed(level);
}

void LightDimCommand::undo() {
    // IN C++: check for invalid dimmed level and exit early (undo() called before execute() called).
    if (previousLevel == Light::invalidDimmedLevel) { return; }
    light->dimmed(previousLevel);
}
