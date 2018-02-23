//
//  CurrentConditions.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//
#include <iostream>
#include "CurrentConditionsDisplay.hpp"
namespace weather {
  CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& inWeatherData)
  : temperature(0.0f)
  , humidity(0.0f)
  , weatherData(inWeatherData)
  {
    weatherData.registerObserver(this);
  }
  
  CurrentConditionsDisplay::~CurrentConditionsDisplay()
  {
    weatherData.removeObserver(this);
  }
  
  void CurrentConditionsDisplay::update(float temp, float hum, float pressure) {
    temperature = temp;
    humidity = hum;
    display();
  }
  
  void CurrentConditionsDisplay::display() const {
    std::cout << "Current conditions: " << temperature
    << "F degrees and " << humidity << "% humidity" << std::endl;
  }
}
