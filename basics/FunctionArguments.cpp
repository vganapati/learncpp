#include <iostream>

void doPrint()
{
    std::cout << "In function doPrint()\n";
}

void printVal(int x)
{
    std::cout << "Value is: " << x << "\n";
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int userInput{};
    std::cout << "Enter an integer: \n";
    std::cin >> userInput;
    printVal(userInput);
    std::cout << "Double values is: " << add(userInput,userInput) << "\n";

    return 0;
}