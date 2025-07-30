#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int w,v;

    x = 3;
    v = 3;

    y = x++;
    w = ++v;

    cout << y << endl;  // 3
    cout << x << endl;  // 4 
    cout << w << endl;  // 4
    cout << v << endl;  // 4
}