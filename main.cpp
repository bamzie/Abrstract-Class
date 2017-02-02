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
  for(int i = 0; i < e.size(); i++) {
    sum += e.at(i).getHrs();
  }
  return sum;
}

template<typename T>
double avgHours(vector<T> e) {
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
    vector<Person> pvect;
    vector<Employee> evect;
    int day, month, year;
    string name;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "What is the first name of your employee? ";
        getline(cin, name);
        dude.setFirst(name);
        
        cout << "What is the person's last name? ";
        getline(cin, name);
        dude.setLast(name);
        
        cout << "What month, day, and year is your birthday? ";
        cin >> month >> day >> year;
        dude.setBirth(month, day, year);
      
    }
    
    vector<Employee>::iterator iter;
  
    for(iter = evect.begin(); iter != evect.end(); iter++) {
      iter->print();
      cout << "----------------" << endl;
    }
  
    cout << "Total hours worked by employees: " << totalHours(evect) << endl;
    cout << "Average hours per employee: " << avgHours(evect) << endl;
    
}
