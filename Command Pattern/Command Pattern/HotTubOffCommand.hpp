//
//  HotTubOffCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HotTubOffCommand_hpp
#define HotTubOffCommand_hpp

#include "OnOffCommand.hpp"

#include "HotTub.hpp"

using HotTubOffCommand = OnOffCommand<HotTub, false>;

#endif /* HotTubOffCommand_hpp */
