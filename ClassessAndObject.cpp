#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Person p1("Kate", "Gregory", 123);
    {
        Tweeter t1("Somone", "Else", 456, "@whoever");
    }

    cout << "after innermost block" << endl;
    Status s = Pending;
    s = Approved;
    return 0;
}