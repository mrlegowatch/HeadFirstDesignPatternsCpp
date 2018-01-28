//
//  RubberDuck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef RubberDuck_hpp
#define RubberDuck_hpp

#include "Duck.hpp"

class RubberDuck: public Duck {
public:
    RubberDuck();
    
    void display() const override;
};

#endif /* RubberDuck_hpp */
