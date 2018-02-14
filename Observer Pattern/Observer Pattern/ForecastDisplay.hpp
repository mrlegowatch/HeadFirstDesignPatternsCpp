//
//  ForecastDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ForecastDisplay_hpp
#define ForecastDisplay_hpp

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class ForecastDisplay : public Observer, public DisplayElement {
private:
  float currentPressure;
  float lastPressure;
  
public:
  explicit ForecastDisplay(Subject& inWeatherData);
  
  void update(float temperature, float humidity, float pressure) override;
  
  void display() const override;
};

#endif /* ForecastDisplay_hpp */
