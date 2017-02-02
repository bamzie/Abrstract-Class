//
//  Peter Chudinov (pj6593), Brian Moralez (kp5575)
//  Person : Employee : Templates
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Employee.h"

template<typename T>
double totalHours(vector<Employee> e) {
  double sum = 0;
  for(int i = 0; i < e.size(); i++) {
    sum += e.at(i).getHrs();
  }
  return sum;
}

template<typename T>
double totalHours(vector<T> e) {
  double sum = 0;
  double avg = 0;
  for(int i = 0; i < e.size(); i++) {
    sum += e.at(i).getHrs();
  }
  avg = sum / e.size();
  return avg;
}

int main()
{
    Person dude;
    
    cout << "What is the first name of your employee? ";
    cin.get();
    cout << "okay!!";
    
    
}
