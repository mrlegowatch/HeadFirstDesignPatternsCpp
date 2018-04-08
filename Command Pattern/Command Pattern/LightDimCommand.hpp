//
//  LightDimCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef LightDimCommand_hpp
#define LightDimCommand_hpp

#include "Command.hpp"

#include "Light.hpp"

#include <memory>

class LightDimCommand: public Command {
public:
    LightDimCommand(const std::shared_ptr<Light>& light, int level);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<Light> light;
    int level;
    int previousLevel;
};


#endif /* LightDimCommand_hpp */
