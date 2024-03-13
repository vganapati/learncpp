#include <iostream>

int main()
{
    int x{5};
    std::cout << "x is equal to: " << x << "\n";
    std::cout << "x is equal to: " << x << std::endl; // flushes buffer 
    return 0;
}