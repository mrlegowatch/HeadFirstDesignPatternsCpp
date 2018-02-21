//
//  ForecastDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ForecastDisplay_hpp
#define ForecastDisplay_hpp

#include "DisplayElement.hpp"
#include "WeatherData.hpp"
namespace wf {
  class ForecastDisplay : public DisplayElement {
  private:
    float currentPressure;
    float lastPressure;
    std::shared_ptr<Subject> weatherData;
    ListenerToken token;
  public:
    explicit ForecastDisplay(const std::shared_ptr<Subject>& inWeatherData);
    ~ForecastDisplay();
    void update(float temperature, float humidity, float pressure);
    
    void display() const override;
  };
}
#endif /* ForecastDisplay_hpp */
