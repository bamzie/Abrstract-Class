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
using namespace std;
class Person
{
private:
    string first;
    string last;
private:
    Person()
    {
        first = "";
        last = "";
    }
    
    void setFirst(string f)
    {   first = f;      }
    void setLast(string l)
    {   last = l;       }
    
    string getFirst() const
    {   return first;   }
    string getLast() const
    {   return last;    }
};
#endif /* Person_hpp */
