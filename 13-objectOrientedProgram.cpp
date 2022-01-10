#include <iostream>
#include <string>
using namespace std;

class myClass
{
    public:
      int myNum;
      string myString;
};

int main()
{
    myClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Testing 123";
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
