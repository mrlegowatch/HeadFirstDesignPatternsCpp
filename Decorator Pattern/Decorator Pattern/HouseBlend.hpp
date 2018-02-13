//
//  HouseBlend.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HouseBlend_hpp
#define HouseBlend_hpp

#include "Beverage.hpp"

class HouseBlend: public Beverage {
public:
    HouseBlend();
    double cost() const override;
};

#endif /* HouseBlend_hpp */
