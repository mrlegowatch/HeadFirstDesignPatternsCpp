//
//  QuackBehavior.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef QuackBehavior_hpp
#define QuackBehavior_hpp

// Same thing here for the quack behavior, we have an interface that just includes a quack() method that needs to be implemented.
class QuackBehavior {
public:
    virtual void quack() const = 0;
    
    // IN C++: a base class with virtual functions must also have a virtual destructor.
    virtual ~QuackBehavior() = default;
};

#endif /* QuackBehavior_hpp */
