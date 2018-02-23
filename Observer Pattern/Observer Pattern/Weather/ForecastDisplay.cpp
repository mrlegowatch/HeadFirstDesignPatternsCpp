//
//  ForecastDisplay.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//
#include <iostream>
#include "ForecastDisplay.hpp"

namespace weather {
  ForecastDisplay::ForecastDisplay(Subject& weatherData)
  : currentPressure(29.92f)
  , lastPressure(0.0f)
  , weatherData(weatherData)
  {
    weatherData.registerObserver(this);
  }
  
  ForecastDisplay::~ForecastDisplay()
  {
    weatherData.removeObserver(this);
  }
  
  void ForecastDisplay::update(float temp, float humidity, float pressure) {
    lastPressure = currentPressure;
    currentPressure = pressure;
    display();
  }
  
  void ForecastDisplay::display() const {
    std::cout << "Forecast: ";
    if (currentPressure > lastPressure) {
      std::cout << "Improving weather on the way!"<< std::endl;
    } else if (currentPressure == lastPressure) {
      std::cout << "More of the same"<< std::endl;
    } else if (currentPressure < lastPressure) {
      std::cout << "Watch out for cooler, rainy weather"<< std::endl;
    }
  }
}
