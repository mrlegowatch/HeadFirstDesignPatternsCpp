//
//  TVOnCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "TVOnCommand.hpp"

TVOnCommand::TVOnCommand(const std::shared_ptr<TV>& tv) :
tv(tv) {
}

void TVOnCommand::execute() {
    tv->off();
}

void TVOnCommand::undo() {
    tv->on();
}
