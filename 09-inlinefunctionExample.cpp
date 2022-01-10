#include <iostream>
using namespace std;

inline float mult(float x, float y)
{
    return x * y;
}

inline double div(double p, double q)
{
    return (p/q);
}

int main()
{
    float a=12.345, b=9.82;
    cout << mult (a, b) << endl; // inline code expansion
    cout << div (a, b) << endl;
    return 0;
}
