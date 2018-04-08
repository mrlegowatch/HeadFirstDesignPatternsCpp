//
//  TV.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef TV_hpp
#define TV_hpp

#include <string>

class TV {
public:
    TV(const std::string& location);
    
    void on();
    
    void off();
    
private:
    std::string location;
};

#endif /* TV_hpp */
