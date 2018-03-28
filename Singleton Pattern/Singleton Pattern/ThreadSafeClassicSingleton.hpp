//
//  ThreadSafeClassicSingleton.hpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ThreadSafeClassicSingleton_hpp
#define ThreadSafeClassicSingleton_hpp
#include <memory>
#include <mutex>

namespace threadssafe_classic {
  class Singleton {
  public:
    static std::shared_ptr<Singleton> GetInstance();
    ~Singleton() = default;
  private:
    Singleton() = default;
    static std::shared_ptr<Singleton> instance;
    static std::mutex singletonMutex;
  };
}

#endif /* ThreadSafeClassicSingleton_hpp */
