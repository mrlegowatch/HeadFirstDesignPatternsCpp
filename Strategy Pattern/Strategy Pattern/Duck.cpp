//
//  Duck.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Duck.hpp"

#include "QuackBehavior.hpp"
#include "FlyBehavior.hpp"

#include <iostream>

Duck::Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior) :
    flyBehavior(std::move(flyBehavior)),
    quackBehavior(std::move(quackBehavior)) {
}

void Duck::performQuack() const {
    // Delegate to the behavior class.
    quackBehavior->quack();
}

void Duck::swim() const {
    std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performFly() const {
    // Delegate to the behavior class.
    flyBehavior->fly();
}
