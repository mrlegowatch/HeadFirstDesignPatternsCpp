//
//  LightOffCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef LightOffCommand_hpp
#define LightOffCommand_hpp

#include "LightDimCommand.hpp"

class LightOffCommand: public LightDimCommand {
public:
    LightOffCommand(const std::shared_ptr<Light>& light) :
        LightDimCommand(light, 0) {
    }
};

#endif /* LightOffCommand_hpp */
