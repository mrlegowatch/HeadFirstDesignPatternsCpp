//
//  ClamPizza.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ClamPizza_hpp
#define ClamPizza_hpp

#include "Pizza.hpp"

class ClamPizza: public Pizza
{
    public:

    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;

};

#endif /* ClamPizza_hpp */
