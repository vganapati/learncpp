// copy constructor: deep copy
#include <iostream>
#include <string>
using namespace std;

class Example4 {
  public:
    string * ptr;
    // constructor
    Example4 (const string& str) : ptr(new string(str)) {}
    //destructor
    ~Example4 () {delete ptr;}
    // access content
    const string& content() const {return *ptr;}
};

// same as Example4 except deep copy member 
class Example5 {
  public:
    string * ptr;
    Example5 (const string& str) : ptr(new string(str)) {}
    ~Example5 () {delete ptr;}
    // copy constructor
    Example5 (const Example5& x) : ptr(new string(x.content())) {}
    // access content
    const string& content() const {return *ptr;}
};

int main () {
    Example4 foo ("Example4");
    Example4 bar = foo;
    cout << "foo's content: " << foo.content() << '\n';
    cout << "bar's content: " << bar.content() << '\n';

    *foo.ptr = "changed Example4";
    cout << "foo's content: " << foo.content() << '\n';
    cout << "bar's content: " << bar.content() << '\n';

    Example5 foo5 ("Example5");
    Example5 bar5 = foo5;
    cout << "foo5's content: " << foo5.content() << '\n';
    cout << "bar5's content: " << bar5.content() << '\n';

    *foo5.ptr = "changed Example5";
    cout << "foo5's content: " << foo5.content() << '\n';
    cout << "bar5's content: " << bar5.content() << '\n';

    return 0;
}

/*
The following error will print due to the shallow copy and trying to delete the same 
memory location twice due to Example4 shallow copy.

a.out(96793,0x2089b9f00) malloc: Double free of object 0x15ae05de0
a.out(96793,0x2089b9f00) malloc: *** set a breakpoint in malloc_error_break to debug
*/