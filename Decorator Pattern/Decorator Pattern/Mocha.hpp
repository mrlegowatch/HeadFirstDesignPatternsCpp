//
//  Mocha.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Mocha_hpp
#define Mocha_hpp

#include "CondimentDecorator.hpp"

class Mocha: public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};

#endif /* Mocha_hpp */
