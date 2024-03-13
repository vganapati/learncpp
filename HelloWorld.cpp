#include <iostream>

int main_2()
{  
    std::cout << "Hello, world!\n";
    return 0;
}


int main()
{  
    std::cout << "Hello, world!\n";
    main_2();
    return 0;
    
}


// g++ HelloWorld.cpp -ggdb -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++17