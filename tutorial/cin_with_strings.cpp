// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
}