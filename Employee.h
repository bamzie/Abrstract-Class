//
//  Peter Chudinov (pj6593), Brian Moralez (kp5575)
//  homework 4: 5
//

#ifndef Employee_h
#define Employee_h
#include "Person.hpp"

class Employee : public Person {
private:
  int hrsWorked;
  bool validHrs(int hrs) {
    if(hrs >= 0) {
      return true;
    } else { return false; }
  }
public:
  int getHrs()
    { return hrsWorked; }
  void setHrs(int hrs)
    { hrsWorked = hrs; }
  void print() {
    
  }
};

#endif /* Employee_h */