date.h file
------------------

#ifndef DATE_H
#define DATE_H


#include <iostream>
#include <cassert>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
    public:
        Date (int month, int day, int year);
        ~Date();
        void print() const;
};

#endif

date.cpp file
--------------
#include "date.h"

Date::Date( int m, int d, int y) : month (m), day(d), year(y)
{
 // Validation asserts can be added
}

Date::~Date()
{

}

void Date::print() const
{
    cout << month <<"/" << day << "/"<< year <<endl;
}

person.h file:
---------------
  #ifndef PERSON_H
#define PERSON_H
#include "date.h"

class Person {
    private:
        long identity;
        Date birthDate; // object association
    public:
        Person(long id, Date birthdate);
        ~Person();
        void print() const;
};

#endif

person.cpp file
----------------

#include "person.h"

Person::Person(long id, Date bd) : identity(id),birthDate(bd)
{
     // validation code
}

Person::~Person()
{
}

void Person::print() const{
    cout << "Person id = " << identity << endl;
    cout << "Person Date of Birth: " ;
    birthDate.print();
    cout << endl;
}

aggregationApplication.cpp file
--------------------------------

#include "person.h"


int main()
{
    Date date1 (5,6,1980);
    Person person1 (1234, date1);
    Date date2(4,23,1978);
    Person person2(4567, date2);

    //output
    person1.print();
    person2.print();
    
    return 0;
}

output
Person id = 1234
Person Date of Birth: 5/6/1980

Person id = 4567
Person Date of Birth: 4/23/1978
  
