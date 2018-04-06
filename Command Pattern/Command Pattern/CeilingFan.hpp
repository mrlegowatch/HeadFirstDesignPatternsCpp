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

    // IN C++: Use an enum class rather than individual int constants.
    // IN C++: Java sample code Command classes have undefined state for previousSpeed
    // between the time the constructor is called and the time execute() is called.
    // We would use std::optional when it becomes available in C++17.
    // In the meantime, specify an "invalid" value for the enum.
    enum class Speed { off, low, medium, high, invalid };

    // Notice that the CielingFan class holds local state representing the speed of the ceiling fan.
    Speed getSpeed() const;
    
    void setSpeed(Speed speed);
    
    std::string getDescription() const;
    
private:
    std::string location;
    Speed speed;
};


#endif /* CeilingFan_hpp */
