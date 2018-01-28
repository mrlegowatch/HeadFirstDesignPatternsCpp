//
//  Squeak.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Squeak_hpp
#define Squeak_hpp

#include "QuackBehavior.hpp"

// Quacks that really squeak.
class Squeak: public QuackBehavior {
public:
    void quack() const override;
};

#endif /* Squeak_hpp */
