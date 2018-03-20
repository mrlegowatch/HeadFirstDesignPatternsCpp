//
//  StereoOnWithCDCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "StereoOnWithCDCommand.hpp"

StereoOnWithCDCommand::StereoOnWithCDCommand(const std::shared_ptr<Stereo>& stereo) :
stereo(stereo) {
}

void StereoOnWithCDCommand::execute() {
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo() {
    stereo->off();
}
