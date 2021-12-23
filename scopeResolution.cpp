// scope resolution example
#include <iostream>
using namespace std;

int m =10; // Gloabl variable M, ::m always represent the global value

int main()
{
    int m = 20; // m redeclared, local to main function
    {
        int k=m;
        int m=30;  // m redeclared, local to inner block{}

        cout << " Inner block values for k =" << k << "  m = " << m << endl;
        cout << "::m = " << ::m << endl;
    }
    cout << " Outer block values for m = " << m << endl;
    cout << "::m = " << ::m << endl;    
}
