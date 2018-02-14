//
//  main.cpp
//  Observer Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include <iostream>

#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "HeatIndexDisplay.hpp"

void WeatherStation()
{
  WeatherData weatherData;
  CurrentConditionsDisplay currentDisplay(weatherData);
  StatisticsDisplay statisticsDisplay(weatherData);
  ForecastDisplay forecastDisplay(weatherData);
  
  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);
}

void WeatherStationHeatIndex()
{
  WeatherData weatherData;
  CurrentConditionsDisplay currentDisplay(weatherData);
  StatisticsDisplay statisticsDisplay(weatherData);
  ForecastDisplay forecastDisplay(weatherData);
  HeatIndexDisplay heatIndexDisplay(weatherData);
  
  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);
}

int main(int argc, const char * argv[]) {
  WeatherStation();
  //WeatherStationHeatIndex();
  return 0;
}
