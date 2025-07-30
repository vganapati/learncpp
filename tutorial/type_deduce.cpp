#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    auto b = a;
    decltype(a) c = 0;

    cout << b; // same value and type as a
    cout << "\n";
    cout << c;
    cout << "\n";
};