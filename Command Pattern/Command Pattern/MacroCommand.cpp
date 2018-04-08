//
//  MacroCommand.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "MacroCommand.hpp"

MacroCommand::MacroCommand(const std::vector<std::shared_ptr<Command>>& commands) :
    commands(commands) {
        // Take an array of Commands and store them in the Macro command
}
    
void MacroCommand::execute() {
    for (auto& command : commands) {
        // When the macro gets executed by the remote, execute those commands one at a time.
        command->execute();
    }
}
    
void MacroCommand::undo() {
    // Make sure to "undo" the commands in reverse order.
    std::for_each(commands.rbegin(), commands.rend(), [](auto& command) {
        command->undo();
    });
}
