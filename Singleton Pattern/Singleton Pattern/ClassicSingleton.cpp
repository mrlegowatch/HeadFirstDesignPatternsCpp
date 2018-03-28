//
//  ClassicSingleton.cpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ClassicSingleton.hpp"

namespace classic {
  Singleton* Singleton::instance = nullptr;  // memory leak

  Singleton* Singleton::GetInstance()
  {
    if(instance == nullptr)
    {
      instance = new Singleton();
    }
    return instance;
  }

  Singleton2 Singleton2::instance;  // global initialization

  Singleton2& Singleton2::GetInstance()
  {
    return instance;
  }
}
