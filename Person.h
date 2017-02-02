//
//  Person.hpp
//  Abrstract Class
//
//  Created by Brian Morales on 2/1/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>
#include <string>
#include "Date.h"
using namespace std;
class Person
{
private:
    string first;
    string last;
    Date birthday;
public:
    Person()
    {
        first = "";
        last = "";
    }
    
    void setFirst(string f) {
      if(f.length() >= 2)
        first = f;
    }
  
    void setLast(string l) {
      if(f.length() >= 2)
        last = l;
    }
  
    void setBirth( int m, int d, int y)
    {
        Date b(m, d, y);
        birthday = b;
    }
    
    string getFirst() const
    {   return first;   }
    string getLast() const
    {   return last;    }
};
#endif /* Person_hpp */
