//
//  GarageDoorOpenCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "GarageDoorOpenCommand.hpp"

GarageDoorOpenCommand::GarageDoorOpenCommand(const std::shared_ptr<GarageDoor>& garageDoor) :
    garageDoor(garageDoor) {
}

void GarageDoorOpenCommand::execute() {
    garageDoor->down();
}

void GarageDoorOpenCommand::undo() {
    garageDoor->up();
}
