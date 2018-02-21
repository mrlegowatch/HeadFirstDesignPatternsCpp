//
//  Milk.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Milk_hpp
#define Milk_hpp

#include "CondimentDecorator.hpp"

class Milk: public CondimentDecorator {
public:
    Milk(std::unique_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};
#endif /* Milk_hpp */
