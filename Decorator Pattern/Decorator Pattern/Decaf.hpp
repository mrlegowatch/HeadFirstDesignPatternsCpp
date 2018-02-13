//
//  Decaf.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Decaf_hpp
#define Decaf_hpp

#include "Beverage.hpp"

class Decaf: public Beverage {
public:
    Decaf();
    double cost() const override;
};

#endif /* Decaf_hpp */
