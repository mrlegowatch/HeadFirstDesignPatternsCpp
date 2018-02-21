//
//  WeatherData.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef WeatherData_hpp
#define WeatherData_hpp
#include <vector>
#include <unordered_map>
#include "Subject.hpp"
namespace wf {
  class WeatherData : public Subject {
  public:
    WeatherData() = default;
    virtual ~WeatherData() = default;
    
    virtual ListenerToken registerObserver(ListenerCallback o) override;
    virtual void removeObserver(ListenerToken t) override;
    virtual void notifyObservers() override;
    
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
    
    float getTemperature() const {
      return temperature;
    }
    
    float getHumidity() const {
      return humidity;
    }
    
    float getPressure() const {
      return pressure;
    }
    
  private:
    std::unordered_map<ListenerToken, ListenerCallback> observerMap;
    float temperature;
    float humidity;
    float pressure;
    static ListenerToken tokenId;
  };
}
#endif /* WeatherData_hpp */
