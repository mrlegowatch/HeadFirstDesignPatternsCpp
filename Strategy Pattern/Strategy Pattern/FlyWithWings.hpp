//
//  FlyWithWings.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef FlyWithWings_hpp
#define FlyWithWings_hpp

#include "FlyBehavior.hpp"

// Here's the implementation of flying for all ducks that have wings.
class FlyWithWings: public FlyBehavior {
public:
    virtual void fly() const override;
};

#endif /* FlyWithWings_hpp */
