//
//  ChicagoStylePepperoniPizza.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ChicagoStylePepperoniPizza_hpp
#define ChicagoStylePepperoniPizza_hpp

#include "Pizza.hpp"

class ChicagoStylePepperoniPizza: public Pizza
{
    public:

    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;

};

#endif /* ChicagoStylePepperoniPizza_hpp */
