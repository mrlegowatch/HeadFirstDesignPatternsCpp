//
//  TVOffCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "TVOffCommand.hpp"

TVOffCommand::TVOffCommand(const std::shared_ptr<TV>& tv) :
tv(tv) {
}

void TVOffCommand::execute() {
    tv->off();
}

void TVOffCommand::undo() {
    tv->on();
}
