#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;


Person::Person(string first, string last, int arbitrary): firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    cout << "costructing " << firstname << " " << lastname << endl;
}

Person::~Person()
{
     cout << "destructing " << firstname << " " << lastname << endl;
}