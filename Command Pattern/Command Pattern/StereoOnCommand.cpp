//
//  StereoOnCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "StereoOnCommand.hpp"

StereoOnCommand::StereoOnCommand(const std::shared_ptr<Stereo>& stereo) :
stereo(stereo) {
}

void StereoOnCommand::execute() {
    stereo->on();
}

void StereoOnCommand::undo() {
    stereo->off();
}
