//
//  Soy.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Soy_hpp
#define Soy_hpp

#include "CondimentDecorator.hpp"

class Soy: public CondimentDecorator {
public:
    Soy(std::unique_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};
#endif /* Soy_hpp */
