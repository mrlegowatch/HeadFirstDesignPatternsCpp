//
//  WeatherData.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "WeatherData.hpp"

namespace wf {
  ListenerToken WeatherData::tokenId = 1;
  
  ListenerToken WeatherData::registerObserver(ListenerCallback func) {
    ListenerToken tok = ++tokenId;
    observerMap.insert(std::make_pair(tok, func));
    return tok;
  }
  
  void WeatherData::removeObserver(ListenerToken token) {
    observerMap.erase(token);
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
    for (auto& kv : observerMap) {
      kv.second(temperature, humidity, pressure);
    }
  }
}
