//
//  Quack.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Quack_hpp
#define Quack_hpp

#include "QuackBehavior.hpp"

// Quacks that really quack.
class Quack: public QuackBehavior {
public:
    void quack() const override;
};

#endif /* Quack_hpp */
