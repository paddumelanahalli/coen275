#include <iostream>
using namespace std;


/*
Constructors can optionally take a member initializer list. 

It's a more efficient way to initialize class members than assigning values 
in the constructor body. 

When you declare an instance of a class, the compiler 
chooses which constructor to invoke based on the rules of overload resolution:

Constructors may be declared as inline, explicit, friend, or constexpr.

Default constructors typically have no parameters, 
but they can have parameters with default values.

Default constructors are one of the special member functions.

If no constructors are declared in a class, 
the compiler provides an implicit inline default constructor.

You can prevent the compiler from generating an implicit default constructor 
by defining it as deleted:
    Box() = delete;

If any non-default constructors are declared, 
the compiler doesn't provide a default constructor:
*/

class Box {
public:
    // Default constructor
    Box() { cout << "Default Constructor called" << endl; }

    // Initialize a Box with equal dimensions (i.e. a cube)
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    { cout << " Constructor int called" << endl;}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {cout << " Constructor int int int called" << endl;}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};

int main()
{
    Box b; // Calls Box()

    // Using uniform initialization (preferred):
    Box b2 {5}; // Calls Box(int)
    Box b3 {5, 8, 12}; // Calls Box(int, int, int)

    cout << "Calling function style Constructor " << endl;
    // Using function-style notation:
    Box b4(2, 4, 6); // Calls Box(int, int, int)

    cout << "Calling array of objects Constructor " << endl;
    Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

}
