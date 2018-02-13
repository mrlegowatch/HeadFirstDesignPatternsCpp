//
//  Espresso.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/12/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Espresso_hpp
#define Espresso_hpp

#include "Beverage.hpp"

class Espresso: public Beverage {
    public:
    Espresso();
    double cost() const override;
};

#endif /* Espresso_hpp */
