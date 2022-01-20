#include <iostream>
using namespace std;

class test{
    int code;
    static int count; //static member
    /* Static variables are initialized only once , at the start of the execution. 
    These variables will be initialized first, before the initialization of any instance variables. 
    A single copy to be shared by all instances of the class. 
    A static variable can be accessed directly by the class name and doesn't need any object.
    */

public:
    void setCode(void) {code = ++count;}
    void showCode(void)
    {
        cout << "object number: " << code << endl;
    }
    static void showCount(void) // static member function
    {
        cout << "count : " << count << endl;
    }
};

int test:: count; // We can initaize it here as well eg: int test:: count = 0;

int main()
{
    test t1, t2;
    t1.setCode();
    t2.setCode();
    test::showCount();

    test t3;
    t3.setCode();

    test::showCount();
    
    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}
/*
code = ++count; is executed whenever setCode() function is invoked and the current value of count is assigned to the code. 
Since each object has its own copy of code, the value contained in code represents a unique number of its object
*/
