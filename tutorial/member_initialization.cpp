// member initialization
#include <iostream>
using namespace std;

class Circle
{
  protected:
    double radius;
    Circle (double r) : radius (r) {}
    Circle () {}
    double area() {return radius*radius*3.14;}
};

class Cylinder:Circle
{
    double height;
  public:
    Cylinder(double r, double h) : height(h) {radius=r;}
    double volume() {return area() * height;}
};

int main ()
{
    Cylinder foo (10, 20);

    cout << "foo's volume: " << foo.volume() << '\n';
    return 0;
}