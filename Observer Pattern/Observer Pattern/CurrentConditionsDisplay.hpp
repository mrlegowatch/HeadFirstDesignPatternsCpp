//
//  CurrentConditions.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef CurrentConditionsDisplay_hpp
#define CurrentConditionsDisplay_hpp

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
  float temperature;
  float humidity;
  
public:
  explicit CurrentConditionsDisplay(Subject& inWeatherData);
  
  void update(float temperature, float humidity, float pressure) override;
  
  void display() const override;
};

#endif /* CurrentConditionsDisplay_hpp */
