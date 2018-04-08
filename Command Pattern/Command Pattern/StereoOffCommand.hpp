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

#include "OnOffCommand.hpp"

#include "Stereo.hpp"

using StereoOffCommand = OnOffCommand<Stereo, false>;

#endif /* StereoOffCommand_hpp */
