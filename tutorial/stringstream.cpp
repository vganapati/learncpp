#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string mystr;
    float price=0;
    float price2=0;
    int quantity=0;

    cout << "Enter 2 prices: ";
    getline (cin, mystr);
    stringstream(mystr) >> price >> price2;
    stringstream(mystr) >> price;  // no effect
    cout << "Enter quantity: ";
    getline (cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    cout << "Total price2: " << price2*quantity << endl;
    return 0;
}