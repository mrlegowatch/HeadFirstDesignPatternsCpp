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
protected:
    CondimentDecorator(std::unique_ptr<Beverage> beverage) : beverage(std::move(beverage)) {};
    std::unique_ptr<Beverage> beverage;
};

#endif /* CondimentDecorator_hpp */
