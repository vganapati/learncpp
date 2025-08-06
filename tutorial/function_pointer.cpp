// pointer to functions
#include <iostream>
using namespace std;

int addition (int a, int b)
{
    return (a+b);
}

int subtraction (int a, int b)
{
    return (a-b);
}

int operation (int x, int y, int (*functocall)(int,int))
{
    int g;
    g = (*functocall)(x,y);
    return (g);
}

int main()
{
    int m, n;
    int (*minus)(int,int) = subtraction;

    m = operation (7,4, addition);
    n = operation (30, m, minus); // could replace minus with subtraction here
    cout << n << '\n';
    return 0; 
}