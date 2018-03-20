//
//  CeilingFanCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "CeilingFanCommand.hpp"

CeilingFanCommand::CeilingFanCommand(const std::shared_ptr<CeilingFan>& ceilingFan, CeilingFan::Speed speed) :
    Command(),
    ceilingFan(ceilingFan),
    newSpeed(speed) {
}

void CeilingFanCommand::execute() {
    // In execute, before we change the speed of the fan, we need to first record its previous state, just in case we need to undo our actions.
    previousSpeed = ceilingFan->getSpeed();
    ceilingFan->setSpeed(newSpeed);
}

void CeilingFanCommand::undo() {
    // To undo, we set the speed of the fan back to its previous speed.
    ceilingFan->setSpeed(previousSpeed);
}