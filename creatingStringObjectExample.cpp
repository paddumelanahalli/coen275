#include <iostream>
#include <string>
using namespace std;

int main()
{
    //creating string objects
    string s1; // Empty string
    string s2("first");
    string s3("sfo");

    // assign a value to string object
    s1=s2;
    cout << "S1 Object =" << s1 << endl;

    //using a string constant object
    s1 = "Its a beautiful day";
    cout << " Now S1 Object =" << s1 << endl;

    //using another object with object
    string s4(s1);
    cout << "S4 Object =" << s4 << endl;

    // Reading through keyboard
    cout << "Enter a string:" << endl;
    cin >> s4;
    cout << " Now S4 Object =" << s4 << endl;

    //concatenating strings
    s1= s2+ s3;
    cout << " Finally S1 Object =" << s1 << endl;

    return 0;
}
