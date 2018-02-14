//
//  CondimentDecorator.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/12/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef CondimentDecorator_hpp
#define CondimentDecorator_hpp

#include "Beverage.hpp"

class CondimentDecorator: public Beverage {
    public:
    // this needs to be a pure virtual here
    std::string getDescription() const override = 0;
};

#endif /* CondimentDecorator_hpp */
