#include <iostream>
int counter = 1;

int main() {
    while (counter <= 5) {
        std::cout << "Hello, World" << std::endl;
        counter = counter + 1;
    }
}


// g++ WhileLoop.cpp -std=c++17