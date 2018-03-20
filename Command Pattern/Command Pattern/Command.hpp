//
//  Command.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Command_hpp
#define Command_hpp

class Command {
public:
    virtual void execute() = 0;
    
    virtual void undo() = 0;
    
    virtual ~Command() = default;
};

#endif /* Command_hpp */
