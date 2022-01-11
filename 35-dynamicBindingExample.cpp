#include <iostream>
using namespace std;

class B{
    public:
    // A virtual function is a member function in the base class that we expect to redefine in derived classes
    // Basically, a virtual function is used in the base class in order to ensure that the function is overridden. 
    //This especially applies to cases where a pointer of base class points to an object of a derived class.
    virtual void f(){
        cout << "The Base class method is called" << endl;
    }
};

class D: public B{
    public:
    void f() {
        cout << "The derived class method is called" << endl;
    }
};

int main() {

    B base;
    D derived;

    B *basePtr = &base;
    basePtr->f();

    basePtr = &derived;
    basePtr->f();

    return 0;
}
