#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int w,v;

    x = 3;
    v = 3;

    y = x++;  // y = x = x + 1
    w = ++v;  // w = v + 1 = v

    cout << y << endl;  // 3
    cout << x << endl;  // 4 
    cout << w << endl;  // 4
    cout << v << endl;  // 4
}