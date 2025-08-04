#include <iostream>
using namespace std;

int main ()
{
    string mystring0;
    mystring0 = "This is a string\n";

    // Different ways to initialize
    string mystring1 = "String 1\n";
    string mystring2 ("String 2\n");
    string mystring3 {"String 3\n"};

    cout << mystring0;
    cout << mystring1;
    cout << mystring2;
    cout << mystring3;
    cout << "test endl" << endl;

    return 0;
}