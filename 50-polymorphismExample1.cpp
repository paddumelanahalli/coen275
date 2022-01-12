#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        virtual void print() const { cout << "In the Base" << endl; }
};

class Derived : public Base{
    public:
        virtual void print() const { cout << "In the Derived" << endl; }
};

int main() 
{
    Base *ptr;

    // Base print operation
    ptr = new Base();
    ptr->print();
    delete ptr;
    // Dervied class print operation
    ptr = new Derived();
    ptr->print();
    delete ptr;

    return 0;
}

/*output
In the Base
In the Derived
*/
