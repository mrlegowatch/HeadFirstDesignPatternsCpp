//
//  Cpp11Singleton.hpp
//  Singleton Pattern
//
//  Created by Abhinay Reddyreddy on 3/28/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Cpp11Singleton_hpp
#define Cpp11Singleton_hpp

class MyersSingleton
{
public:
  static MyersSingleton& GetInstance();
  ~MyersSingleton() = default;
private:
  MyersSingleton() = default;
};

#endif /* Cpp11Singleton_hpp */
