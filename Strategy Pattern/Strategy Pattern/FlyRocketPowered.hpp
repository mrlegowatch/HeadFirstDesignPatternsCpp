//
//  FlyRocketPowered.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef FlyRocketPowered_hpp
#define FlyRocketPowered_hpp

#include "FlyBehavior.hpp"

// That's okay, we're creating a rocket-powered flying behavior.
class FlyRocketPowered: public FlyBehavior {
public:
    void fly() const override;
};

#endif /* FlyRocketPowered_hpp */
