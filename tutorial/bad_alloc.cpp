// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main() {
    try
    {
        int* myarray= new int[100000000000000000];
    }
    catch (exception& e)
    {
        cout << "standard exception: " << e.what() << '\n';
    }
    return 0;
}