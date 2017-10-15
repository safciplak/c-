#include <iostream>
#include "functions.h"
using namespace std;


int main()
{
    auto a = add(3,4);
    cout << "3 + 4 is " << a;
    double b = add(1.1, 1.2, 3.4);
    cout << endl;
    cout << "1.1 + 1.2 + 3.4 is " << b;

    add(0,0);
    add(0,0,0);

    cout << endl;

    if(test(true))
    {
        cout << "true passes the test" << endl;
    }

    if(test(3.2))
    {
        cout << "3.2 passes the test" << endl;
    }

//    if(test(3))
//    {
//        cout << "3 passes the test" << endl;
//    }
    return 0;
}
