// another function example
#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
    int r;
    r = a - b;
    return r;
}

int main ()
{
    int x=5, y=3, z;
    z = subtraction (7,2);
    cout << z << "\n";
    cout << subtraction (x,y) << "\n";
}
