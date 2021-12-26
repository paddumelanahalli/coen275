/*A member function can be called by using its name inside another member function that
of the same class. This is known as nesting of member functions.*/
// program to print the compliment of  binary digits eg: input 101, output 010
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class binary_stream
{
    string s;
    public:

    // generic read method for taking the binary number in to the string
    void read(void)
    {
       cout << "Enter a binary number:";
       cin >> s;
    }

    // check if we have only 1 and 0's, if not, its not a binary number! lets quit
    void chk_bin(void) 
    {
        for (int i=0; i<s.length(); i++)
        {
            if (s.at(i)!= '0' && s.at(i) != '1')
            {
                cout << "\nIncorrect binary number format, quitting\n";
                getch();
                exit(0);
            }
        }
    }

    void ones(void)
    {
        chk_bin(); // Nested member functions
        for (int i = 0;i<s.length();i++)
        {
            if (s.at(i) == '0')
                s.at(i) = '1'; // compliment
            else
                s.at(i) = '0'; // compliment
        }
    }

    //displays
    void displayOnes(void)
    {
        ones(); // Nested member functions
        cout << "\n The 1's compliment of the above binary number is: " << s << endl; 
    }
};

int main()
{
    binary_stream b; // object instance

    b.read();
    b.displayOnes();
    getch();
    return 0;
}
