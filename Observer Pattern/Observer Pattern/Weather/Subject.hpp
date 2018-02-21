//
//  Subject.h
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef Subject_h
#define Subject_h

namespace weather {
  class Observer; // forward declaration
  class Subject {
  public:
    virtual ~Subject() = default;
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() = 0;
  };
}

#endif /* Subject_h */
