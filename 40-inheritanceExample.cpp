#include <iostream>
#include <cassert>

using namespace std;

class person
{
    private:
        long id;
    public:
         void setId(long Id);
         long getId() const;
};
void person::setId(long Identity)
{
    id=Identity;
}

long person::getId() const
{
    return id;
}

class student: public person
{
    private:
        double gpa;
    public:
        void setGpa(double gpa);
        double getGpa() const;
};
void student::setGpa(double studentGpa)
{
    gpa = studentGpa;
    assert(gpa >= 0 && gpa <= 4.0);
}

double student::getGpa() const
{
    return gpa;
}

int main() {

person p;
p.setId(1000);
cout << "Person identification number: "<< p.getId() << endl;

student s; // instantiate the derived object
s.setId(2000); // set
s.setGpa(3.9);

cout << "Student Identificaiton number: " << s.getId() << endl;
cout << "Student GPA: " << s.getGpa() << endl;

return 0;
}
