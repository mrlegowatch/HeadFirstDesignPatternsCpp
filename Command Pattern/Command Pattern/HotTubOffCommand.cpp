//
//  HotTubOffCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "HotTubOffCommand.hpp"

HotTubOffCommand::HotTubOffCommand(const std::shared_ptr<HotTub>& hotTub) :
    hotTub(hotTub) {
}

void HotTubOffCommand::execute() {
    hotTub->off();
}

void HotTubOffCommand::undo() {
    hotTub->on();
}
