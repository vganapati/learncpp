// default and delete implicit members
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int x, int y) : width(x), height(y) {} // constructor
    Rectangle() = default; // adds a implicit default constructor in addition to other constructors defined
    Rectangle (const Rectangle& other) = delete; // removes implicit copy constructor
    int area() {return width*height;}
};

int main () {
    Rectangle foo;
    Rectangle bar (10,20);
    // Rectangle foo2 = bar;  // not allowed unless line 10 is commented out

    cout << "bar's area: " << bar.area() << '\n';
    return 0;
}