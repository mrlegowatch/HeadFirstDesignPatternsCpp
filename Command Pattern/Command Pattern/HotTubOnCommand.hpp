//
//  HotTubOnCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HotTubOnCommand_hpp
#define HotTubOnCommand_hpp

#include "Command.hpp"

#include "HotTub.hpp"

class HotTubOnCommand: public Command {
public:
    HotTubOnCommand(const std::shared_ptr<HotTub>& hotTub);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<HotTub> hotTub;
};

#endif /* HotTubOnCommand_hpp */
