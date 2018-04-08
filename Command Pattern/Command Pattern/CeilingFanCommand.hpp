//
//  CeilingFanCommand.hpp
//  Command Pattern
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef CeilingFanCommand_hpp
#define CeilingFanCommand_hpp

#include "Command.hpp"

#include "CeilingFan.hpp"

// IN C++: we create a base class to store the new speed.
// IN C++: we won't create individual command classes for setting the speed or turning the fan off. This has a consequence of exposing CeilingFan.Speed to clients, but we might make this tradeoff to reduce the overall number of command classes.
class CeilingFanCommand: public Command {
public:
    CeilingFanCommand(const std::shared_ptr<CeilingFan>& ceilingFan, CeilingFan::Speed speed);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<CeilingFan> ceilingFan;
    CeilingFan::Speed newSpeed;
    
    // We've added local state to keep track of the previous speed of the fan.
    // IN C++: Use "std::optional" (C++17) because it's not initialized until execute() is called.
    CeilingFan::Speed previousSpeed;
};


#endif /* CeilingFanCommand_hpp */
