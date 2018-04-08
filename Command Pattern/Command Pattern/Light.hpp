//
//  Light.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Light_hpp
#define Light_hpp

#include <string>

class Light {
public:
    Light(const std::string& location);
    
    void on();
    
    void off();
    
    // IN C++: Java sample code Command classes have undefined state for previousLevel
    // between the time the constructor is called and the time execute() is called.
    // We would use std::optional when it becomes available in C++17.
    // In the meantime, specify an "invalid" (out of range 0...100) value for the int.
    static const int invalidDimmedLevel;
    
    void dimmed(int level);

    int getLevel() const;
    
private:
    std::string location;
    int level;
};

#endif /* Light_hpp */
