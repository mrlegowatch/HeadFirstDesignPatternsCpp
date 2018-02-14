//
//  Beverage.hpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/12/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Beverage_hpp
#define Beverage_hpp

#include <string>

class Beverage {
    
    public:
    std::string description = "Unknown Beverage";

    // not a pure virtual (has default implementation)
    virtual std::string getDescription() const { return description; };
    
    // pure virtual (must be overridden)
    virtual double cost() const = 0;
};

#endif /* Beverage_hpp */
