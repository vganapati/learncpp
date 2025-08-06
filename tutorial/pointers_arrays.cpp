// pointers and arrays

#include <iostream>
using namespace std;

int main ()
{
    int numbers[5]; // numbers is a pointer that points to the start of a block of 5 ints
    int * p; // initialize an int pointer
    p = numbers; // p points to the start of the numbers array
    *p = 10; // assign the 0th value of the numbers array to 10
    p++; // add 1 to pointer p, i.e. move over 1 number in the numbers array
    *p = 20; // assign the 1st value of the numbers array to 20
    p = &numbers[2]; // pointer to the 2nd value of the numbers array
    *p = 30;
    p = numbers + 3; // pointer to the 3rd value of the numbers array
    *p = 40;
    p = numbers; // back to the beginning of the array
    *(p+4) = 50; // assign the 4th value of the numbers array
    for (int n=0; n<5; n++)
    {
        cout << numbers[n] << ", "; 
    }
    return 0;
}