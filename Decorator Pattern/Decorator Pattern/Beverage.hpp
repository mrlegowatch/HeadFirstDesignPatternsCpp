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
// pure abstract class!
public:
    virtual ~Beverage() = default;
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

#endif /* Beverage_hpp */
