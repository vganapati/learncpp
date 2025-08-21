// exceptions
#include <iostream>
using namespace std;

int main () {
    try 
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }

    cout << "End of program." << '\n';
    return 0;
}