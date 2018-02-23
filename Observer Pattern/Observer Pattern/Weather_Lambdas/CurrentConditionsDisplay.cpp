//
//  CurrentConditions.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//
#include <iostream>
#include "CurrentConditionsDisplay.hpp"
namespace wf {
  CurrentConditionsDisplay::CurrentConditionsDisplay(const std::shared_ptr<Subject>& weatherData)
  : temperature(0.0f)
  , humidity(0.0f)
  , weatherData(weatherData)
  {
    token = weatherData->registerObserver([this](float temp, float hum, float pressure) {
      update(temp, hum, pressure);
    });
  }
  
  CurrentConditionsDisplay::~CurrentConditionsDisplay()
  {
    weatherData->removeObserver(token);
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
