#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary): firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    std::cout << "costructing " << firstname << " " << lastname << std::endl;
}

Person::~Person()
{
     std::cout << "destructing " << firstname << " " << lastname << std::endl;
}