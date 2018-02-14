//
//  HeatIndexDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HeatIndexDisplay_hpp
#define HeatIndexDisplay_hpp

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class HeatIndexDisplay : public Observer, public DisplayElement {
private:
  float heatIndex;
  
public:
  explicit HeatIndexDisplay(Subject& inWeatherData);
  
  void update(float temperature, float humidity, float pressure) override;
  
  void display() const override;
  
  float computeHeatIndex(float t, float rh) const;
};

#endif /* HeatIndexDisplay_hpp */
