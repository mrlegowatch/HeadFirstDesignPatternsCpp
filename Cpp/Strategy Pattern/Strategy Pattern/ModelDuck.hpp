//
//  ModelDuck.hpp
//  Strategy Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 1/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ModelDuck_hpp
#define ModelDuck_hpp

#include "Duck.hpp"

// Our model duck begins life grounded, without a way to fly.
class ModelDuck: public Duck {
public:
    ModelDuck();
    
    void display() const override;
};

#endif /* ModelDuck_hpp */
