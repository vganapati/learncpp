// constructor on const object
#include <iostream>
using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int val) : x(val) {}
    
    void add_10() {x = x+10;}
    int get() const {return x;}
};

int main() {
    const MyClass foo(10);
    MyClass bar(10);
    // foo.x = 20;  // not valid: x cannot be modified
    cout << foo.x << '\n';  // ok: data member x can be read
    cout << foo.get() << '\n';
    bar.add_10();
    cout << bar.get() << '\n';
    return 0;
}