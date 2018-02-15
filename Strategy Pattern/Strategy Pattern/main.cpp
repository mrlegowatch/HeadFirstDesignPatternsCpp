//
//  main.cpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "MallardDuck.hpp"
#include "RedHeadDuck.hpp"
#include "DecoyDuck.hpp"
#include "ModelDuck.hpp"
#include "RubberDuck.hpp"

#include "FlyRocketPowered.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    // IN C++: use stack-based classes when possible.
    MallardDuck mallard;
    mallard.display();
    mallard.swim();
    mallard.performQuack();
    mallard.performFly();
    
    std::cout << std::endl;
    
    RedHeadDuck redHead;
    redHead.display();
    redHead.swim();
    redHead.performQuack();
    redHead.performFly();
    
    std::cout << std::endl;

    DecoyDuck decoy;
    decoy.display();
    decoy.swim();
    decoy.performQuack();
    decoy.performFly();
    
    std::cout << std::endl;

    RubberDuck rubberDuckie;
    rubberDuckie.display();
    rubberDuckie.swim();
    rubberDuckie.performQuack();
    rubberDuckie.performFly();
    
    std::cout << std::endl;

    ModelDuck model;
    model.display();
    model.swim();
    model.performQuack();
    // First call to performFly() delegates to the flyBehavior object set in the ModelDuck's constructor, which is a FlyNoWay instance.
    model.performFly();
    // This invokes the model's inherited behavior setter method, and... voilà! The model suddenly has rocket-powered flying capability!
    model.flyBehavior = std::make_unique<FlyRocketPowered>();
    // If it worked, the model duck dynamically changed its flying behavior! You can't do THAT if the implementation lives inside the Duck class.
    model.performFly();

    return 0;
}
