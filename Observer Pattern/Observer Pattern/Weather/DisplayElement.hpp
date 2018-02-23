//
//  DisplayElement.hpp
//  Observer Pattern
//
//  Created by Abhinay Reddyreddy on 2/14/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef DisplayElement_h
#define DisplayElement_h
namespace weather {
  class DisplayElement {
  public:
    virtual ~DisplayElement() = default;
    virtual void display() const = 0;
  };
}
#endif /* DisplayElement_h */
