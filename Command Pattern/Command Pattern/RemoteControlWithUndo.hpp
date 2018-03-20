//
//  RemoteControlWithUndo.hpp
//  Command Pattern
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef RemoteControlWithUndo_hpp
#define RemoteControlWithUndo_hpp

#include "Command.hpp"

#include <vector>
#include <string>

class RemoteControlWithUndo {
public:
    RemoteControlWithUndo();
    
    void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand);
    
    void onButtonWasPushed(int slot);
    
    void offButtonWasPushed(int slot);
    
    void undoButtonWasPushed();
    
    std::string toString() const;
     
 private:
     std::vector<std::shared_ptr<Command>> onCommands;
     std::vector<std::shared_ptr<Command>> offCommands;
     std::shared_ptr<Command> undoCommand;
};

#endif /* RemoteControlWithUndo_hpp */
