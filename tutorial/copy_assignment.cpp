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

// same as Example4 except deep copy constructor/assignment 
class Example5 {
  public:
    string * ptr;
    Example5 (const string& str) : ptr(new string(str)) {}
    ~Example5 () {delete ptr;}
    // copy constructor
    Example5 (const Example5& x) : ptr(new string(x.content())) {}
    // copy assignment, deletes previous obj and performs a deep copy
    Example5& operator= (const Example5& x){
        cout << x.content() << '\n';
        delete ptr;
        ptr = new string (x.content());
        return *this;
    }
    // access content
    const string& content() const {return *ptr;}
};

int main () {

    Example4 foo4 ("foo4");
    Example4 bar4 ("bar4");
    cout << "foo4's content: " << foo4.content() << '\n';
    cout << "bar4's content: " << bar4.content() << '\n';

    bar4 = foo4; // causes error after main() because pointer is copied and the value the pointer points to is deleted twice
    cout << "foo4's content: " << foo4.content() << '\n';
    cout << "bar4's content: " << bar4.content() << '\n';


    Example5 foo5 ("foo5");
    Example5 bar5 ("bar5");
    cout << "foo5's content: " << foo5.content() << '\n';
    cout << "bar5's content: " << bar5.content() << '\n';

    bar5 = foo5; // delete bar5 pointer and make a new pointer that points to a copy of foo5 value
    cout << "foo5's content: " << foo5.content() << '\n';
    cout << "bar5's content: " << bar5.content() << '\n';

    return 0;
}

