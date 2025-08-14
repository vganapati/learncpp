// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle
{
    double radius;
  public:
    Circle(double r) { radius = r; }
    double circum() {return 2*radius*3.14;}
};

int main()
{
    Circle foo (10);  // functional form
    Circle bar = 20.0;  // assignment init  // only for single parameter constructor
    Circle baz {30.0};  // uniform init  // pro is that you don't mix up function/constructor calling
    Circle qux = {40.0};  // POD-like

    cout << "foo's circumference: " << foo.circum() << '\n';
    return 0;
}