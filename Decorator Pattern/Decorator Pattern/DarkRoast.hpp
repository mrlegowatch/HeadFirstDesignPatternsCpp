//
//  DarkRoast.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef DarkRoast_hpp
#define DarkRoast_hpp

#include "Beverage.hpp"

class DarkRoast: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};
#endif /* DarkRoast_hpp */
