#include <iostream>
#include <string>

using std::string;

#ifndef _Person_H
#define _Person_H
class Person
{
    private:
        string firstname;
        string lastname;
        int arbitrarynumber;

    public:
        Person(string first,
            string last,
                int arbitrary);
        ~Person();
};
#endif