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

void WeatherStationWithFunctions()
{
  auto weatherData = std::make_shared<wf::WeatherData>();
  auto currentDisplay = std::make_shared<wf::CurrentConditionsDisplay>(weatherData);
  auto statisticsDisplay = std::make_shared<wf::StatisticsDisplay>(weatherData);
  auto forecastDisplay = std::make_shared<wf::ForecastDisplay>(weatherData);
  auto heatIndexDisplay = std::make_shared<wf::HeatIndexDisplay>(weatherData);
  weatherData->setMeasurements(80, 65, 30.4f);
  weatherData->setMeasurements(82, 70, 29.2f);
  weatherData->setMeasurements(78, 90, 29.2f);
}
