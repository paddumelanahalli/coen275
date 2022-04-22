#include <iostream>
using namespace std;

class circle
{
    private:
        double radius;
    public:
        circle(double radius); // parameter constructor
        circle(); // Default constructor
        ~circle(); // Destructor
        circle( const circle &c ); // copy constructor
        void setRadius(double radius);
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
};

// define member functions
circle::circle(double r) : radius(r)
{
    cout << " The Parameter constructor was called" << endl;
}

circle::circle() : radius(0.0)
{
    cout << " The default constructor was called" << endl;
}

circle::circle(const circle& c) : radius(c.radius)
{
    cout << " The copy constructor was called" << endl;
}

circle::~circle()
{
    cout << " The destructor was called  " << this->radius <<endl;
}

void circle::setRadius(double value)
{
    radius = value;
}

double circle::getRadius() const
{
    return radius;
}

double circle::getArea() const
{
    return (3.14*radius*radius);
}

double circle::getPerimeter() const
{
    return (2*3.14*radius);
}

//application
int main()
{
    circle c1(5.2); // Parameter Constructor
    cout << "Radius= " << c1.getRadius() << endl;
    cout << "Area =  " << c1.getArea() << endl;
    cout << "Perimeter = " << c1.getPerimeter() << endl << endl;

    circle c2(c1); // Copy Constructor
    cout << "Radius= " << c2.getRadius() << endl;
    cout << "Area =  " << c2.getArea() << endl;
    cout << "Perimeter = " << c2.getPerimeter() << endl << endl;

    circle c3;
     cout << "Radius= " << c3.getRadius() << endl;
    cout << "Area =  " << c3.getArea() << endl;
    cout << "Perimeter = " << c3.getPerimeter() << endl << endl;

    return 0;
}

/* output
 The Parameter constructor was called
Radius= 5.2
Area =  84.9056
Perimeter = 32.656

 The copy constructor was called
Radius= 5.2
Area =  84.9056
Perimeter = 32.656

 The default constructor was called
Radius= 0
Area =  0
Perimeter = 0

 The destructor was called0
 The destructor was called5.2
 The destructor was called5.2
 */
