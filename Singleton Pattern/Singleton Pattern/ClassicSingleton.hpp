//
//  ClassicSingleton.hpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef ClassicSingleton_hpp
#define ClassicSingleton_hpp

namespace classic {
  class Singleton {
  public:
    static Singleton* GetInstance();
    ~Singleton() = default;
  private:
    Singleton() = default;
    static Singleton* instance;
  };

  class Singleton2 {
  public:
    static Singleton2& GetInstance();
    ~Singleton2() = default;
  private:
    Singleton2() = default;
    static Singleton2 instance;
  };
}

#endif /* ClassicSingleton_hpp */
