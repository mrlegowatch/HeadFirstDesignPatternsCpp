//
//  Whip.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Whip_hpp
#define Whip_hpp

#include "CondimentDecorator.hpp"

class Whip: public CondimentDecorator {
public:
    Whip(std::unique_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};
#endif /* Whip_hpp */
