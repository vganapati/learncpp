// can pass an argument by reference and 
// use the const keyword to prevent modification
#include <iostream>
using namespace std;

string concatenate (const string& a, const string& b)
{
    return a + b;
}

int main ()
{
    // use double "" for string
    string a="hello", b=" world!";
    cout << concatenate(a,b) << "\n";

    // use single '' for char
    // \n can use single '' or double ""
    char c = 'y';
    cout << c << '\n';
    return 0;
}