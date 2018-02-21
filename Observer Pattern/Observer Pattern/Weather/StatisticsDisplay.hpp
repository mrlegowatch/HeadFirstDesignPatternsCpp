//
//  StatisticsDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef StatisticsDisplay_hpp
#define StatisticsDisplay_hpp

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"
namespace weather {
  class StatisticsDisplay : public Observer, public DisplayElement {
  private:
    float maxTemp = 0.0f;
    float minTemp = 200;
    float tempSum= 0.0f;
    int numReadings;
    Subject& weatherData;
  public:
    explicit StatisticsDisplay(Subject& inWeatherData);
    ~StatisticsDisplay();
    void update(float temperature, float humidity, float pressure) override;
    void display() const override;
  };
}
#endif /* StatisticsDisplay_hpp */
