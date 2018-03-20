//
//  HotTubOnCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "HotTubOnCommand.hpp"

HotTubOnCommand::HotTubOnCommand(const std::shared_ptr<HotTub>& hotTub) :
hotTub(hotTub) {
}

void HotTubOnCommand::execute() {
    hotTub->on();
}

void HotTubOnCommand::undo() {
    hotTub->off();
}
