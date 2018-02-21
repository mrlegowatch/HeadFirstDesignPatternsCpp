//
//  Pizza.hpp
//  AbstractFactoryShenanigans
//
//  Created by Cindy Solomon on 2/21/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp

#include <string>

class Pizza
{
public:
    std::string name;
  //  Dough dough;
//    Sauce sauce;
//    Veggies std::vector<std::string> toppings;
    //Cheese cheese;
    //Pepperoni pepperoni;


    const std::string& getName() const;

    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box()  const;
    virtual ~Pizza() = default;

};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza);



#endif /* Pizza_hpp */
