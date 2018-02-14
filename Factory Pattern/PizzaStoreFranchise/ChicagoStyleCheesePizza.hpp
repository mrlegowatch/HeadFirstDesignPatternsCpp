//
//  ChicagoStyleCheesePizza.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ChicagoStyleCheesePizza_hpp
#define ChicagoStyleCheesePizza_hpp

#include "Pizza.hpp"

class ChicagoStyleCheesePizza: public Pizza
{
    public:

    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;

};

#endif /* ChicagoStyleCheesePizza_hpp */
