//
//  StereoOffCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "StereoOffCommand.hpp"

StereoOffCommand::StereoOffCommand(const std::shared_ptr<Stereo>& stereo) :
stereo(stereo) {
}

void StereoOffCommand::execute() {
    stereo->off();
}

void StereoOffCommand::undo() {
    stereo->on();
}
