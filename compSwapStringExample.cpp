#include <iostream>
#include <string>
using namespace std;

int main()
{
    //creating string objects
    string s1 ("First");
    string s2("Second");
    string s3("Third");
    cout << " s1 =" << s1 << " s2 =" << s2 << " s3 = " << s3 << endl;

    int x = s1.compare(s2); // compares 1 & s2. 0 if the strings are equal, 
                            // +ve number if s1 is lexicographically greater than s2
                            // -ve number otherwise
    if (x == 0)
        cout << "s1 == S2" << endl;
    else if (x > 0)
        cout << "s1 > s2" << endl;
    else
        cout << "s1 < s2" << endl;

    int a = s1.compare(0,2,s2,0,2); // Compares the portion of the string, first 2 characters
    cout << "a = " << a << endl;

    cout << "Before:  s1 =" << s1 << " s2 =" << s2 << endl;
    s1.swap(s2); // swap s1 and S2
    cout << "After:  s1 =" << s1 << " s2 =" << s2 << endl;

    return 0;
}
