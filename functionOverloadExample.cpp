#include <iostream>
using namespace std;

//declaration of function prototype
int area (int);
int area (int,int);
float area (float);

int main()
{
    //Area of a Sqare
    cout << "Area of a square with side 5 cm each = " << area (5) << "cm"  <<endl;

    //Area of a Rectagle
    cout << "Area of a Rectagle with l=10 cm and b=5 cm  = " << area (10,5) << "cm" <<endl;

    //Area of a circle
    cout << "Area of a circle with r=5.5cm = " << area (float(5.5))<< "cm" <<endl;
    return 0;
}

int area(int side)
{
    return side*side;
}

int area (int l, int b)
{
    return (l*b);
}

float area (float r)
{
    return (3.14*r*r);
}
