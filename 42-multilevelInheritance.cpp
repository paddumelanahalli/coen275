#include <iostream>
using namespace std;

class students{
    protected:
        int roll_number;
    public:
        void get_number(int a) { roll_number = a; }
        void put_number(void) { cout << "roll Number : " << roll_number << endl; }
};

class test: public students // first level derivation
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float x, float y) { sub1 = x; sub2 = y; }
        void put_marks(void) { 
            cout << "marks in sub 1 : " << sub1 << endl; 
            cout << "marks in sub 2 : " << sub2 << endl;
            }
};

class result : public test { // Second level derivation
    float  total;
    public:
        void display(void) { 
            total = sub1 + sub2;
            put_number();
            put_marks();
            cout << "total = " << total << endl;
            }
};

int main() {

    result student1; // student class object

    student1.get_number( 111);
    student1.get_marks(75.0, 59.5);
    student1.display();

    return 0;
}
/*output
roll Number : 111  
marks in sub 1 : 75
marks in sub 2 : 59.5
total = 134.5
*/
