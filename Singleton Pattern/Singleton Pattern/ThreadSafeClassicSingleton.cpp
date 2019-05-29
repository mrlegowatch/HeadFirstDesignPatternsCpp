//
//  ThreadSafeClassicSingleton.cpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ThreadSafeClassicSingleton.hpp"

namespace threadssafe_classic {
  std::shared_ptr<Singleton> Singleton::instance;
  std::mutex Singleton::singletonMutex;

  std::shared_ptr<Singleton> Singleton::GetInstance()
  {
    if(instance == nullptr)
    {
      std::lock_guard<std::mutex> lk(singletonMutex);
      if(instance == nullptr)
      {
        instance.reset(new Singleton());
      }
    }
    return instance;
  }
}
