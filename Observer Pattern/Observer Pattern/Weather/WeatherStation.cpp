//
//  WeatherStation.cpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/21/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "WeatherStation.hpp"
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "HeatIndexDisplay.hpp"

void WeatherStation()
{
  weather::WeatherData weatherData;
  weather::CurrentConditionsDisplay currentDisplay(weatherData);
  weather::StatisticsDisplay statisticsDisplay(weatherData);
  weather::ForecastDisplay forecastDisplay(weatherData);

  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);
}

void WeatherStationHeatIndex()
{
  weather::WeatherData weatherData;
  weather::CurrentConditionsDisplay currentDisplay(weatherData);
  weather::StatisticsDisplay statisticsDisplay(weatherData);
  weather::ForecastDisplay forecastDisplay(weatherData);
  weather::HeatIndexDisplay heatIndexDisplay(weatherData);

  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);
}

