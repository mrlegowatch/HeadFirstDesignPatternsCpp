//
//  CeilingFan.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef CeilingFan_hpp
#define CeilingFan_hpp

#include <string>

class CeilingFan {
public:
    CeilingFan(const std::string& location);

    // IN C++: Use an enum rather than individual int constants.
    enum Speed { off, low, medium, high };

    // Notice that the CielingFan class holds local state representing the speed of the ceiling fan.
    Speed getSpeed() const;
    
    void setSpeed(Speed speed);
    
    std::string getDescription() const;
    
private:
    std::string location;
    Speed speed;
};


#endif /* CeilingFan_hpp */
