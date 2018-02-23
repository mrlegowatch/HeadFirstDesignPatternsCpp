//
//  main.cpp
//  Observer Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include <iostream>

#include "Weather/WeatherStation.hpp"
#include "Weather_Lambdas/WeatherStation.hpp"

int main(int argc, const char * argv[]) {
  std::cout << " ============= WeatherStation ============" << std::endl;
  WeatherStation();
  std::cout << " ============= WeatherStationHeatIndex ============" << std::endl;
  WeatherStationHeatIndex();
  std::cout << " ============= WeatherStationHeatIndex using std::function / lambda ============" << std::endl;
  WeatherStationWithFunctions();
  return 0;
}
