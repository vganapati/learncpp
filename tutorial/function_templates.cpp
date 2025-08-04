#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return result;
}

int main ()
{
    cout << sum<int> (10, 20) << '\n';
    cout << sum<double> (1.0, 1.5) << '\n';
    cout << sum (4, 5) << '\n';
    return 0;
}