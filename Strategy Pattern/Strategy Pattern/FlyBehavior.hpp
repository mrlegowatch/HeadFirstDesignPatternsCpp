//
//  FlyBehavior.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef FlyBehavior_hpp
#define FlyBehavior_hpp

/// FlyBehavior is an interface that all flying classes implement. All new flying classes just need to implement the fly() method.
class FlyBehavior {
public:
    virtual void fly() const = 0;
    
    // IN C++: a base class with virtual functions must also have a virtual destructor.
    virtual ~FlyBehavior() = default;
};

#endif /* FlyBehavior_hpp */
