//
//  Peter Chudinov (pj6593), Brian Moralez (kp5575)
//  Person : Employee : Templates
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Employee.h"

template<typename T>
double totalHours(vector<T> e) {
  double sum = 0;
  for(T i : e) {
    sum += i.getHrs();
  }
  return sum;
}

template<typename T>
double avgHours(vector<T> e) {
  double sum = 0;
  double avg = 0;
  for(T i : e) {
    sum += i.getHrs();
  }
  avg = sum / e.size();
  return avg;
}

int main()
{
    Employee dude;
    vector<Employee> evect;
    int day, month, year;
    string name;
    
    for (int i = 0; i < 2; i++)
    {
      try {
        cout << "What is the first name of your employee? ";
        string first;
        cin >> first;
        dude.setFirst(first);
        
        cout << "What is the person's last name? ";
        string last;
        cin >> last;
        dude.setLast(last);
        
        cout << "What month, day, and year is your birthday? ";
        cin >> month >> day >> year;
        dude.setBirth(month, day, year);
        
        cout << "How many hours has this employee worked? ";
        double hours;
        cin >> hours;
        dude.setHrs(hours);
        
        evect.push_back(dude);
        
      } catch(const char* lol) {
        cout << lol << endl;
        i--;
      }
    }
    
    vector<Employee>::iterator iter;
    cout << endl;
    for(iter = evect.begin(); iter != evect.end(); iter++) {
      iter->print();
      cout << "----------------" << endl;
    }
  
    cout << "Total hours worked by employees: " << totalHours(evect) << endl;
    cout << "Average hours per employee: " << avgHours(evect) << endl;
    
}
