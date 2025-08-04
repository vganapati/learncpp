// passing parameters by reference
#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;
    cout << "duplicate function:\n";
    cout << "a=" << a << ", b=" << b << ", c=" << c << "\n";
}

void not_duplicate(int a, int b, int c)
{
    a*=2;
    b*=2;
    c*=2;
    cout << "not_duplicate function:\n";
    cout << "a=" << a << ", b=" << b << ", c=" << c << "\n";
}

int main ()
{
    int x=1, y=3, z=7;
    duplicate (x,y,z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << "\n";

    x=1, y=3, z=7;
    not_duplicate (x,y,z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << "\n";

    return 0;
}