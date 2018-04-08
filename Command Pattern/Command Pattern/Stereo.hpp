//
//  Stereo.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Stereo_hpp
#define Stereo_hpp

#include <string>

class Stereo {
public:
    Stereo(const std::string& location);
    
    void on();
    
    void off();
    
    void setCD();
    
    void setDVD();
    
    void setRadio();
    
    void setVolume(int volume);
    
private:
    std::string location;

};

#endif /* Stereo_hpp */
