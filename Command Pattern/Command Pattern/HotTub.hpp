//
//  HotTub.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HotTub_hpp
#define HotTub_hpp

#include <string>

class HotTub {
public:
    HotTub(const std::string& location);
    
    void on();
    
    void off();
    
private:
    std::string location;
};

#endif /* HotTub_hpp */
