//
//  CurrentConditions.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef CurrentConditionsDisplay_hpp
#define CurrentConditionsDisplay_hpp

#include "DisplayElement.hpp"
#include "Subject.hpp"
namespace wf {
  class CurrentConditionsDisplay : public DisplayElement {
  private:
    float temperature;
    float humidity;
    std::shared_ptr<Subject> weatherData;
    ListenerToken token;
  public:
    explicit CurrentConditionsDisplay(const std::shared_ptr<Subject>& inWeatherData);
    ~CurrentConditionsDisplay();
    
    void update(float temperature, float humidity, float pressure);
    
    void display() const override;
  };
}
#endif /* CurrentConditionsDisplay_hpp */
