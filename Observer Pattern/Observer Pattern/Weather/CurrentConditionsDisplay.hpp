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
namespace weather {
  class CurrentConditionsDisplay : public Observer, public DisplayElement {
  private:
    float temperature;
    float humidity;
    Subject& weatherData;
  public:
    explicit CurrentConditionsDisplay(Subject& inWeatherData);
    ~CurrentConditionsDisplay();
    void update(float temperature, float humidity, float pressure) override;
    
    void display() const override;
  };
}
#endif /* CurrentConditionsDisplay_hpp */
