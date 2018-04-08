//
//  GarageDoor.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef GarageDoor_hpp
#define GarageDoor_hpp

#include <string>

class GarageDoor {
public:
    GarageDoor(const std::string& location);
    
    void up();
    
    void down();
    
private:
    std::string location;
};

#endif /* GarageDoor_hpp */
