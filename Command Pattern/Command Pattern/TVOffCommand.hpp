//
//  TVOffCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef TVOffCommand_hpp
#define TVOffCommand_hpp

#include "OnOffCommand.hpp"

#include "TV.hpp"

using TVOffCommand = OnOffCommand<TV, false>;

#endif /* TVOffCommand_hpp */
