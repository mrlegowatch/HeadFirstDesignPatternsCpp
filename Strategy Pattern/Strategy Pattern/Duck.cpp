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

Duck::Duck(const std::shared_ptr<FlyBehavior>& flyBehavior, const std::shared_ptr<QuackBehavior>& quackBehavior) :
    flyBehavior(flyBehavior),
    quackBehavior(quackBehavior) {
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
