//
//  Subject.h
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Subject_h
#define Subject_h

#include <functional>

typedef size_t ListenerToken;
typedef std::function<void(float, float, float)> ListenerCallback;

namespace wf {
  class Subject {
  public:
    virtual ~Subject() = default;
    virtual ListenerToken registerObserver(ListenerCallback o) = 0;
    virtual void removeObserver(ListenerToken tok) = 0;
    virtual void notifyObservers() = 0;
  };
}

#endif /* Subject_h */
