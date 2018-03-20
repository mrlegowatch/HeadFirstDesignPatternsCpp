//
//  StereoOffCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef StereoOffCommand_hpp
#define StereoOffCommand_hpp

#include "Command.hpp"

#include "Stereo.hpp"

class StereoOffCommand: public Command {
public:
    StereoOffCommand(const std::shared_ptr<Stereo>& stereo);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<Stereo> stereo;
};

#endif /* StereoOffCommand_hpp */
