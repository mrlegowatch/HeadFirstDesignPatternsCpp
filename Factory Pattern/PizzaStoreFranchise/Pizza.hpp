//
//  Pizza.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.


#ifndef Pizza_hpp
#define Pizza_hpp

#include <string>
#include <vector>
#include <iostream>


class Pizza
{
    public:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

    const std::string& getName() const;

    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box()  const;
    virtual ~Pizza() = default;

    //std::ostream& operator<<(std::ostream& os);
};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza);


#endif /* Pizza_hpp */

