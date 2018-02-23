//
//  StatisticsDisplay.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//
#include <iostream>
#include "StatisticsDisplay.hpp"

namespace weather {
  StatisticsDisplay::StatisticsDisplay(Subject& weatherData)
  : maxTemp(0.0f)
  , minTemp(200)
  , tempSum(0.0f)
  , numReadings(0)
  , weatherData(weatherData)
  {
    weatherData.registerObserver(this);
  }
  
  StatisticsDisplay::~StatisticsDisplay()
  {
    weatherData.removeObserver(this);
  }
  
  void StatisticsDisplay::update(float temp, float humidity, float pressure) {
    tempSum += temp;
    numReadings++;
    
    if (temp > maxTemp) {
      maxTemp = temp;
    }
    
    if (temp < minTemp) {
      minTemp = temp;
    }
    
    display();
  }
  
  void StatisticsDisplay::display() const {
    std::cout << "Avg/Max/Min temperature = " << (tempSum / numReadings)
    << "/" << maxTemp << "/" << minTemp << std::endl;
  }
}
