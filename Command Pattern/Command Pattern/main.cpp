//
//  main.cpp
//  Command Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include <iostream>
 #include <memory>

#include "RemoteControlWithUndo.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFan.hpp"
#include "CeilingFanCommand.hpp"
#include "TV.hpp"
#include "TVOnCommand.hpp"
#include "TVOffCommand.hpp"
#include "Stereo.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"
#include "HotTub.hpp"
#include "HotTubOnCommand.hpp"
#include "HotTubOffCommand.hpp"
#include "MacroCommand.hpp"

int main(int argc, const char * argv[]) {
    RemoteControlWithUndo remoteControl;
    auto livingRoomLight = std::make_shared<Light>("Living Room");
    auto livingRoomLightOn = std::make_shared<LightOnCommand>(livingRoomLight);
    auto livingRoomLightOff = std::make_shared<LightOffCommand>(livingRoomLight);
    
    remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);
    
    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    std::cout << remoteControl;
    remoteControl.undoButtonWasPushed();
    remoteControl.offButtonWasPushed(0);
    remoteControl.onButtonWasPushed(0);
    std::cout << remoteControl;
    remoteControl.undoButtonWasPushed();
    
    auto ceilingFan = std::make_shared<CeilingFan>("Living Room");
    
    auto ceilingFanMedium = std::make_shared<CeilingFanCommand>(ceilingFan, CeilingFan::Speed::medium);
    auto ceilingFanHigh = std::make_shared<CeilingFanCommand>(ceilingFan, CeilingFan::Speed::high);
    auto ceilingFanOff = std::make_shared<CeilingFanCommand>(ceilingFan, CeilingFan::Speed::off);
    
    remoteControl.setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl.setCommand(1, ceilingFanHigh, ceilingFanOff);
    
    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    std::cout << remoteControl;
    remoteControl.undoButtonWasPushed();
    
    remoteControl.onButtonWasPushed(1);
    std::cout << remoteControl;
    remoteControl.undoButtonWasPushed();
    
    //: The following demonstrates the use of the macro command with undo.
    
    // Create all the devices: a light, tv, stereo and hot tub.
    auto light = std::make_shared<Light>("Living Room");
    auto tv = std::make_shared<TV>("Living Room");
    auto stereo = std::make_shared<Stereo>("Living Room");
    auto hotTub = std::make_shared<HotTub>("Back Yard");
    
    // Now create all the On and Off commands to control them.
    auto lightOn = std::make_shared<LightOnCommand>(light);
    auto lightOff = std::make_shared<LightOffCommand>(light);
    auto tvOn = std::make_shared<TVOnCommand>(tv);
    auto tvOff = std::make_shared<TVOffCommand>(tv);
    auto stereoOn = std::make_shared<StereoOnWithCDCommand>(stereo);
    auto stereoOff = std::make_shared<StereoOffCommand>(stereo);
    auto hotTubOn = std::make_shared<HotTubOnCommand>(hotTub);
    auto hotTubOff = std::make_shared<HotTubOffCommand>(hotTub);
    
    // Create an array for On and an array for Off commands.
    std::vector<std::shared_ptr<Command>> partyOn = { lightOn, stereoOn, tvOn, hotTubOn };
    std::vector<std::shared_ptr<Command>> partyOff = { lightOff, stereoOff, tvOff, hotTubOff };
    
    // ... and create two corresponding macros to hold them.
    auto partyOnMacro = std::make_shared<MacroCommand>(partyOn);
    auto partyOffMacro = std::make_shared<MacroCommand>(partyOff);
    
    // Assign the macro to a button as we would any command.
    remoteControl.setCommand(2, partyOnMacro, partyOffMacro);
    
    //: Finally, we just need ot push some buttons and see if this works.
    
    std::cout << std::endl << remoteControl << std::endl;
    std::cout << "--------- Pushing Macro On ---------" << std::endl;
    remoteControl.onButtonWasPushed(2);
    std::cout << "--------- Pushing Macro Off --------"  << std::endl;
    remoteControl.offButtonWasPushed(2);

    return 0;
}

