//
//  GarageDoorOpenCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef GarageDoorOpenCommand_hpp
#define GarageDoorOpenCommand_hpp

#include "Command.hpp"

#include "GarageDoor.hpp"

class GarageDoorOpenCommand: public Command {
public:
    GarageDoorOpenCommand(const std::shared_ptr<GarageDoor>& garageDoor);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<GarageDoor> garageDoor;
};

#endif /* GarageDoorOpenCommand_hpp */
