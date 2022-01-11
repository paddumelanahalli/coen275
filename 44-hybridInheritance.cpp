#include <iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void get_number(int a) { roll_number = a; }
        void show_number(void){
            cout << "roll_number: " << roll_number << endl;
        }
};

class test : public student{
    protected:
        float part1, part2;
    public:
        void get_marks( float x, float y){
            part1 = x; part2 = y;
        }
        void show_marks(void){
            cout << "Marks Obtained: " << endl;
            cout << "Part 1: " << part1 << endl;
            cout << "Part 2: " << part2 << endl;
        }
};

class sports {
    protected:
        float score;
    public:
        void get_score(float s) { score = s; }
        void show_score(void) { cout << "sports weight: " << score << endl; }
};

class result : public test, public sports // test is derived from student
{
    float total;
    public:
        void show(void){
            total = part1+ part2 + score;
            show_number();
            show_marks();
            show_score();
           
        }
};

int main()
{
    result student_1;

    student_1.get_number(1234);
    student_1.get_marks (27.5, 33.0);
    student_1.get_score (6.0);
    student_1.show();

    return 0;
}

/* output 
roll_number: 1234
Marks Obtained:
Part 1: 27.5
Part 2: 33
sports weight: 6
*/
