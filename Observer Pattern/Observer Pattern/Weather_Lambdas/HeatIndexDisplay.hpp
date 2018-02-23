//
//  HeatIndexDisplay.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef HeatIndexDisplay_hpp
#define HeatIndexDisplay_hpp

#include "DisplayElement.hpp"
#include "WeatherData.hpp"
namespace wf {
  class HeatIndexDisplay : public DisplayElement {
  private:
    float heatIndex;
    std::shared_ptr<Subject> weatherData;
    ListenerToken token;
  public:
    explicit HeatIndexDisplay(const std::shared_ptr<Subject>& inWeatherData);
    ~HeatIndexDisplay();
    void update(float temperature, float humidity, float pressure);
    
    void display() const override;
    
    float computeHeatIndex(float t, float rh) const;
  };
}
#endif /* HeatIndexDisplay_hpp */
