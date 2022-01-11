#include <iostream>
using namespace std;

class BaseClass
{
    int a;
    public:
        int b;
        void set_ab(void) { a = 5; b=10;}
        int get_a() { return a; }
        void show_a(void) { cout << "a = " << a << endl;}
};

class derivedClass : public BaseClass
{
    int c;
    public:
        void mul(void) { c = b * get_a();}
        void display(void)
        {
            // cout << "a = " << a << endl; // gives an error
            cout << "a = " << get_a() << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        }
};

int main()
{
    derivedClass d;

    d.set_ab(); // a= 5, b=10
    d.mul(); // 5*10 = 50
    d.show_a(); // 5
    d.display(); // 

    d.b=20;
    d.mul();
    d.display();

    return(0);
}

/* output 
a = 5
a = 5
b = 10
c = 50
a = 5
b = 20
c = 100
*/
