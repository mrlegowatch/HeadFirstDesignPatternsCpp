//
//  MacroCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef MacroCommand_hpp
#define MacroCommand_hpp

#include "Command.hpp"

#include <vector>

class MacroCommand: public Command {
public:
    MacroCommand(const std::vector<std::shared_ptr<Command>>& commands);
   
    void execute() override;
    
    void undo() override;
    
private:
    std::vector<std::shared_ptr<Command>> commands;
};

#endif /* MacroCommand_hpp */
