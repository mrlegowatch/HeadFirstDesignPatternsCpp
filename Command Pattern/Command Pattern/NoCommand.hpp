//
//  NoCommand.hpp
//  Command Pattern
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef NoCommand_hpp
#define NoCommand_hpp

#include "Command.hpp"

class NoCommand: public Command {
    
    void execute() override { }
    
    void undo() override { }
    
};

#endif /* NoCommand_hpp */
