//
//  MuteQuack.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef MuteQuack_hpp
#define MuteQuack_hpp

#include "QuackBehavior.hpp"

// Quacks that make no sound at all.
class MuteQuack: public QuackBehavior {
public:
    void quack() const override;
};


#endif /* MuteQuack_hpp */
