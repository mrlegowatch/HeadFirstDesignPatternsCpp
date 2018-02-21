//
//  Duck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Duck_hpp
#define Duck_hpp

#include <memory>

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck {
    // Declare two reference variables for the behavior interface types. All duck classes (in the same package) inherit these.
public:
    // IN C++: prefer unique_ptr by default, shared_ptr when there are multiple references.
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
    
    Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior);

    // IN C++: a base class with virtual functions must also have a virtual destructor.
    virtual ~Duck() = default;

    void performQuack() const;
    
    void swim() const;
    
    virtual void display() const = 0;
    
    void performFly() const;
};

#endif /* Duck_hpp */
