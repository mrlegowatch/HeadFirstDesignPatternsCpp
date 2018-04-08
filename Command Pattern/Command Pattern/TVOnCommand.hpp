//
//  TVOnCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef TVOnCommand_hpp
#define TVOnCommand_hpp

#include "OnOffCommand.hpp"

#include "TV.hpp"

using TVOnCommand = OnOffCommand<TV, true>;

#endif /* TVOnCommand_hpp */
