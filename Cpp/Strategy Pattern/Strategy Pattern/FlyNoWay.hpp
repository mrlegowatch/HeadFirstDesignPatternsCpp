//
//  FlyNoWay.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef FlyNoWay_hpp
#define FlyNoWay_hpp

#include "FlyBehavior.hpp"

/// And here's the implementation for all ducks that can't fly.
class FlyNoWay: public FlyBehavior {
public:    
    void fly() const override;
};

#endif /* FlyNoWay_hpp */
