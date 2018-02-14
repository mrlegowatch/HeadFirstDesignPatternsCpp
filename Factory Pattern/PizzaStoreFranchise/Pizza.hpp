//
//  Pizza.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.


#ifndef Pizza_hpp
#define Pizza_hpp

class Pizza
{
public:

    virtual void prepare()  = 0;
    virtual void bake()     = 0;
    virtual void cut()      = 0;
    virtual void box()      = 0;
    virtual ~Pizza(){}
};

#endif /* Pizza_hpp */
