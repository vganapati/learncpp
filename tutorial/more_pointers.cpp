// more pointers

#include <iostream>
using namespace std;

int main ()
{
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue;  // pointer to firstvalue
    p2 = &secondvalue;  // pointer to secondvalue
    *p1 = 10;  // changes firstvalue
    *p2 = *p1; // changes second value to value in firstvalue
    p1 = p2; // p1 becomes pointer to secondvalue
    *p1 = 20; // assign secondvalue

    cout << "firstvalue is " << firstvalue << '\n';  // 10
    cout << "secondvalue is " << secondvalue << '\n'; // 20

    return 0;
}