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

void RemoteControlWithUndo::setCommand(std::size_t slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(std::size_t slot) {
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(std::size_t slot) {
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed() {
    undoCommand->undo();
}

std::ostream& operator<<(std::ostream& os, const RemoteControlWithUndo& remote)
{
    //std::stringstream desc;
    
    os << "\n----------- Remote Control -----------\n";
    for (int index = 0; index < remote.onCommands.size(); ++index) {
        auto onCommand = remote.onCommands[index];
        auto offCommand = remote.offCommands[index];
        os << "[slot " << index << "] " << onCommand << "    " << offCommand << std::endl;
    }
    
    os << "[undo] " << remote.undoCommand << std::endl;
    
    return os;
}

