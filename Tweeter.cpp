#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;


Tweeter::Tweeter(string first,
                 string last,
                 int arbitrary,
                 string handle): Person(first,last,
                                        arbitrary),
                                        twitterhandle(handle)

{
    cout << "costructing tweeter " << twitterhandle << endl;
}

Tweeter::~Tweeter(void)
{
cout << "destructing tweeter " << twitterhandle << endl;
}