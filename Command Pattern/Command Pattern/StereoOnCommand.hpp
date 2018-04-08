//
//  StereoOnCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef StereoOnCommand_hpp
#define StereoOnCommand_hpp

#include "OnOffCommand.hpp"

#include "Stereo.hpp"

using StereoOnCommand = OnOffCommand<Stereo, true>;

#endif /* StereoOnCommand_hpp */
