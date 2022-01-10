#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;

    for (int i=0; i<3; i++)
    {
         cout << "Enter an Integer: "; 
         cin >> num1;

         cout  << "Enter another Integer: "; 
         cin >> num2; 

        // Try - catch Block
        try
        {
            if (num2 == 0)
                throw 0;
            result = num1 / num2;
            cout << "The result is : " << result << endl;

        } // try
        catch( int x)
        {
            cout <<  "Division by zero can't be performed" << endl;
        } // catch
    } // for loop
    return 0; // end
}
