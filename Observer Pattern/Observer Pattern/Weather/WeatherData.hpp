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
#include "Subject.hpp"
#include "Observer.hpp"
namespace weather {
  class WeatherData : public Subject {
    
  public:
    WeatherData() = default;
    virtual ~WeatherData() = default;
    
    virtual void registerObserver(Observer* o) override;
    
    virtual void removeObserver(Observer* o) override;
    
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
    std::vector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
  };
}
#endif /* WeatherData_hpp */
