//
//  RedHeadDuck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef RedHeadDuck_hpp
#define RedHeadDuck_hpp

#include "Duck.hpp"

class RedHeadDuck: public Duck {
public:
    RedHeadDuck();
    
    void display() const override;
};

#endif /* RedHeadDuck_hpp */
