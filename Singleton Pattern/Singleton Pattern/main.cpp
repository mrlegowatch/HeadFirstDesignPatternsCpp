//
//  main.cpp
//  Singleton Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include <iostream>
#include "ClassicSingleton.hpp"
#include "ThreadSafeClassicSingleton.hpp"
#include "MyersSingleton.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
  std::cout << "*************** Classic Singleton using pointer ********************" << std::endl;
  std::cout << "Singleton instance is " << classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << classic::Singleton::GetInstance() << std::endl;
  std::cout << "*************** Classic Singleton using reference *************" << std::endl;
  std::cout << "Singleton instance is " << &(classic::Singleton2::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(classic::Singleton2::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(classic::Singleton2::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(classic::Singleton2::GetInstance()) << std::endl;
  std::cout << "*************** Thread-safe classic Singleton using shared_ptr *************" << std::endl;
  std::cout << "Singleton instance is " << threadssafe_classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << threadssafe_classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << threadssafe_classic::Singleton::GetInstance() << std::endl;
  std::cout << "Singleton instance is " << threadssafe_classic::Singleton::GetInstance() << std::endl;
  std::cout << "*************** Myers Singleton using Cpp11 magic statics (thread-safe) *************" << std::endl;
  std::cout << "Singleton instance is " << &(MyersSingleton::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(MyersSingleton::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(MyersSingleton::GetInstance()) << std::endl;
  std::cout << "Singleton instance is " << &(MyersSingleton::GetInstance()) << std::endl;
    return 0;
}
