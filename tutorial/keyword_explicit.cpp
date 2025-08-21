// explicit
#include <iostream>
using namespace std;

class A {};

class B {
  public:
    explicit B (const A& x) {}
    B& operator= (const A& x) {return *this;}
    operator A() {return A();}
};

void fn (B x) {}

int main () {
    A foo;
    // B bar = foo; // syntax not allowed
    B bar (foo);
    // fn (foo); // not allowed
    fn (bar); // allowed

    bar = foo;
    // fn (foo); // not allowed
    fn (bar); // allowed

    foo = bar;

    // fn (foo); // not allowed
    fn (bar);
    return 0; // allowed
}