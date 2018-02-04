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

// IN C++: forward declare types used in an interface.
class FlyBehavior;
class QuackBehavior;

class Duck {
    // Declare two reference variables for the behavior interface types. All duck classes (in the same package) inherit these.
public:
    // IN C++: prefer shared_ptr.
    std::shared_ptr<FlyBehavior> flyBehavior;
    std::shared_ptr<QuackBehavior> quackBehavior;
    
    Duck(const std::shared_ptr<FlyBehavior>& flyBehavior, const std::shared_ptr<QuackBehavior>& quackBehavior);

    void performQuack() const;
    
    void swim() const;
    
    virtual void display() const = 0;
    
    void performFly() const;
};

#endif /* Duck_hpp */
