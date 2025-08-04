// static vs automatic storage
#include <iostream>
using namespace std;

int x;  // global namespace, static storage, initialized to zero

int main ()
{
    int y;  // local namespace, automatic storage, uninitialized
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}