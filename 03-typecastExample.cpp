// Explicit type casting example
#include <iostream>
#include <conio.h> // for getch

using namespace std;

int main()
{
    int intvar = 25;
    float floatvar = 35.87;

    cout << "intvar = " << intvar << endl;
    cout << "floatvar = " << floatvar << endl;
    cout << " float(intvar) %.2f= " << float(intvar) << endl;
    cout << "int(floatvar) = " << int(floatvar) << endl;

    getch();
}
