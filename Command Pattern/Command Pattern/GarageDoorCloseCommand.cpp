//
//  GarageDoorCloseCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "GarageDoorCloseCommand.hpp"

GarageDoorCloseCommand::GarageDoorCloseCommand(const std::shared_ptr<GarageDoor>& garageDoor) :
    garageDoor(garageDoor) {
}

void GarageDoorCloseCommand::execute() {
    garageDoor->down();
}

void GarageDoorCloseCommand::undo() {
    garageDoor->up();
}
