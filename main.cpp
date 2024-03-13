#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << "\n";
    return 0;
}

// g++ main.cpp add.cpp -ggdb -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++17