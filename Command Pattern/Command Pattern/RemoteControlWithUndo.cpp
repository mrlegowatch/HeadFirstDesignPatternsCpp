//
//  RemoteControlWithUndo.cpp
//  Command Pattern
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "RemoteControlWithUndo.hpp"

#include "NoCommand.hpp"

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream

RemoteControlWithUndo::RemoteControlWithUndo() {
    auto noCommand = std::make_shared<NoCommand>();
    onCommands = std::vector<std::shared_ptr<Command>>(7);
    offCommands = std::vector<std::shared_ptr<Command>>(7);
    undoCommand = nullptr;
}

void RemoteControlWithUndo::setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed() {
    undoCommand->undo();
}

std::string RemoteControlWithUndo::toString() const {
    std::stringstream desc;
    
    desc << "\n----------- Remote Control -----------\n";
    for (int index = 0; index < onCommands.size(); ++index) {
        auto onCommand = onCommands[index];
        auto offCommand = offCommands[index];
        desc << "[slot " << index << "] " << onCommand << "    " << offCommand << std::endl;
    }
   
    desc << "[undo] " << undoCommand << std::endl;
    
    return desc.str();
}
