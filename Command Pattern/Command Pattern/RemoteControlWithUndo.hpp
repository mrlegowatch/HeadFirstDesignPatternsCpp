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
    
    void setCommand(std::size_t slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand);
    
    void onButtonWasPushed(std::size_t slot);
    
    void offButtonWasPushed(std::size_t slot);
    
    void undoButtonWasPushed();
    
    std::string toString() const;
     
 private:
     std::vector<std::shared_ptr<Command>> onCommands;
     std::vector<std::shared_ptr<Command>> offCommands;
     std::shared_ptr<Command> undoCommand;
    
    friend std::ostream& operator<<(std::ostream& os, const RemoteControlWithUndo& remote);
};

// IN C++: use ostream instead of toString
std::ostream& operator<<(std::ostream& os, const RemoteControlWithUndo& remote);

#endif /* RemoteControlWithUndo_hpp */
