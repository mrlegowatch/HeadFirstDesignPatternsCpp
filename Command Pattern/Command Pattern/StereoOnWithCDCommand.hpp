//
//  StereoOnWithCDCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef StereoOnWithCDCommand_hpp
#define StereoOnWithCDCommand_hpp

#include "Command.hpp"

#include "Stereo.hpp"

class StereoOnWithCDCommand: public Command {
public:
    StereoOnWithCDCommand(const std::shared_ptr<Stereo>& stereo);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<Stereo> stereo;
};

#endif /* StereoOnWithCDCommand_hpp */
