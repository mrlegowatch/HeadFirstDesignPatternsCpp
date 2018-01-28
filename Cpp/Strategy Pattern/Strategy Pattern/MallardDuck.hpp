//
//  MallardDuck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef MallardDuck_hpp
#define MallardDuck_hpp

#include "Duck.hpp"

// A MallardDuck uses the Quack class to handle its quack, so when performQuack() is called, the responsibility for the quack is delegated to the Quack object and we get a real quack.
// And it uses FlyWithWings as its FlyBehavior type.
// Remember, MallardDuck inherits the quackBehavior and flyBehavior instance variables from class Duck.
class MallardDuck: public Duck {
public:
    MallardDuck();
    
    void display() const override;
};

#endif /* MallardDuck_hpp */
