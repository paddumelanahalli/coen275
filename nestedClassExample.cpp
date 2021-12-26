#include <iostream>
using namespace std;

class outer
{
    private:
        int x=2;
        class inner
        {
            private:
                int y;
            public:
                int z;
                void display()
                {
                    y=3;z=2;
                    cout << "\n The product of " << y << "*" << z << "=" << y*z <<endl;
                }
        }; // inner class definition is over
    inner n1;
    public:
        inner n2;
        void square()
        {
            n2.display(); //inner class member function is called by its object x=2;
            n2.z = 4;
            cout << "\n The product of " <<n2.z<<'*'<<n2.z<<"= "<<n2.z*n2.z<<"\n";
            cout<<"\n The product of " <<x<<'*'<<x<<"= "<<x*x;
        }
}; // outer class definition is over

int main()
{
    outer o;
    o.square(); // outer class member function is called
    return 0;
}
