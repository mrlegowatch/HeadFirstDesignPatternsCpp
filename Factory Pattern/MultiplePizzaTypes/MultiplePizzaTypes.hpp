//
// MultiplePizzaTypes.hpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.

#include <iostream>
#include <string>

class Pizza {

    public:

    virtual void prepare() = 0;
    virtual void bake() = 0;
    virtual void cut() = 0;
    virtual void box() = 0;
};

class CheesePizza: public Pizza {
    void prepare()
    {
        std::cout << "Preparing cheese" << std::endl;
    };

    void bake()
    {
        std::cout << "Baking cheese" << std::endl;
    };

    void cut()
    {
        std::cout << "Cutting cheese" << std::endl;
    };

    void box()
    {
        std::cout << "Boxing cheese" << std::endl;
    };
};

class GreekPizza: public Pizza {
    void prepare()
    {
        std::cout << "Preparing Greek" << std::endl;
    };

    void bake()
    {
        std::cout << "Baking Greek" << std::endl;
    };

    void cut()
    {
        std::cout << "Cutting Greek" << std::endl;
    };

    void box()
    {
        std::cout << "Boxing Greek" << std::endl;
    };
};

class PepperoniPizza: public Pizza {
    void prepare()
    {
        std::cout << "Preparing pepperoni" << std::endl;
    };

    void bake()
    {
        std::cout << "Baking pepperoni" << std::endl;
    };

    void cut()
    {
        std::cout << "Cutting pepperoni" << std::endl;
    };

    void box()
    {
        std::cout << "Boxing pepperoni" << std::endl;
    };
};

std::unique_ptr<Pizza> orderPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

        if (type == "cheese")
        {
            pizza = std::make_unique<CheesePizza>();
        }
        else if (type == "greek")
        {
            pizza = std::make_unique<GreekPizza>();
        }
        else if (type == "pepperoni")
        {
            pizza = std::make_unique<PepperoniPizza>();
        }

    // Each Pizza subtype (CheesePizza, VeggiePizza, etc.) knows how to prepare itself.
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
};

//const Pizza& orderPizza(std::string type)
//{
//    CheesePizza p;
//    Pizza& pizza = p;
//
//    if (type == "cheese")
//    {
//        //CheesePizza p = CheesePizza();
//        pizza = p;
//    }
//    else if (type == "greek")
//    {
//        pizza = GreekPizza();
//    }
//    else if (type == "pepperoni")
//    {
//        pizza = PepperoniPizza();
//    }
//
//    // Each Pizza subtype (CheesePizza, VeggiePizza, etc.) knows how to prepare itself.
//    pizza.prepare();
//    pizza.bake();
//    pizza.cut();
//    pizza.box();
//
//    return pizza;
//};

