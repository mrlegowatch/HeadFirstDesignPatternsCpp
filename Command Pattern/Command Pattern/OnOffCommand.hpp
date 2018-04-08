//
//  OnOffCommand.hpp
//  Command Pattern
//
//  Created by Brian Arnold on 4/8/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef OnOffCommand_hpp
#define OnOffCommand_hpp

#include "Command.hpp"

// IN C++: Use a template to reduce the amount of boilerplate in "on()"/"off()" commands.
template <typename EntityType, bool isOn>
class OnOffCommand : public Command
{
public:
    OnOffCommand(const std::shared_ptr<EntityType>& _entity) :
        entity(_entity) { }
    
    void execute() override { isOn ? entity->on() : entity->off(); }
    
    void undo() override { isOn ? entity->off() : entity->on(); }
    
private:
    std::shared_ptr<EntityType> entity;
};

#endif /* OnOffCommand_hpp */
