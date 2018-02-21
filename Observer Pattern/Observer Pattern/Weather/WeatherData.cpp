//
//  WeatherData.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "WeatherData.hpp"
#include "Observer.hpp"
namespace weather {
void WeatherData::registerObserver(Observer* o) {
  observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
  for(auto beg = observers.begin(); beg < observers.end(); beg++)
  {
    if(*beg == o)
      beg = observers.erase(beg);
  }
}

void WeatherData::setMeasurements(float temp, float h, float p) {
  temperature = temp;
  humidity = h;
  pressure = p;
  measurementsChanged();
}

void WeatherData::measurementsChanged() {
  notifyObservers();
}

void WeatherData::notifyObservers() {
  for (auto observer : observers) {
    observer->update(temperature, humidity, pressure);
  }
}
}
