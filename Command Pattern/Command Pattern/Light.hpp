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
    
    void dimmed(int level);

    int getLevel() const;
    
private:
    std::string location;
    int level;
};

#endif /* Light_hpp */
