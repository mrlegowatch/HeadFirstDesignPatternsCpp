//
//  StatisticsDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef StatisticsDisplay_hpp
#define StatisticsDisplay_hpp

#include "DisplayElement.hpp"
#include "Subject.hpp"
namespace wf {
  class StatisticsDisplay : public DisplayElement {
  private:
    float maxTemp = 0.0f;
    float minTemp = 200;
    float tempSum= 0.0f;
    int numReadings;
    std::shared_ptr<Subject> weatherData;
    ListenerToken token;
  public:
    explicit StatisticsDisplay(const std::shared_ptr<Subject>& inWeatherData);
    ~StatisticsDisplay();
    void update(float temperature, float humidity, float pressure);
    
    void display() const override;
  };
}
#endif /* StatisticsDisplay_hpp */
