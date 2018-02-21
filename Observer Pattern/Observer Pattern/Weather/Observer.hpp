//
//  Observer.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Observer_h
#define Observer_h
namespace weather {
  class Observer {
  public:
    virtual ~Observer() = default;
    virtual void update(float temp, float humidity, float pressure) = 0;
  };
}
#endif /* Observer_h */
