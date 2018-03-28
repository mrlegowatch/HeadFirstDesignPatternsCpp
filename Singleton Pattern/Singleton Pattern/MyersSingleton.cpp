//
//  Cpp11Singleton.cpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "MyersSingleton.hpp"

MyersSingleton& MyersSingleton::GetInstance()
{
  static MyersSingleton instance;
  return instance;
}
