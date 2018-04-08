//
//  LightOnCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef LightOnCommand_hpp
#define LightOnCommand_hpp

#include "LightDimCommand.hpp"

// IN C++: Because this implementation is trivial, inline it.
class LightOnCommand: public LightDimCommand {
public:
    LightOnCommand(const std::shared_ptr<Light>& light) :
        LightDimCommand(light, 100) {
    }
};

#endif /* LightOnCommand_hpp */
