//
//  DecoyDuck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef DecoyDuck_hpp
#define DecoyDuck_hpp

#include "Duck.hpp"

class DecoyDuck: public Duck {
public:
    DecoyDuck();
    
    void display() const override;
};


#endif /* DecoyDuck_hpp */
