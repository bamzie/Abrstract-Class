//
//  Peter Chudinov (pj6593), Brian Moralez (kp5575)
//  Person : Employee : Templates
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
      else
        throw "error";
    }
  
    void setLast(string l) {
      if(l.length() >= 2)
        last = l;
      else
        throw "error";
    }
  
    void setBirth( int m, int d, int y)
    {
        Date b(m, d, y);
        birthday = b;
    }
  
    Date getBirth() const {
      return birthday;
    }
    
    string getFirst() const
    {   return first;   }
    string getLast() const
    {   return last;    }
};
#endif /* Person_hpp */
