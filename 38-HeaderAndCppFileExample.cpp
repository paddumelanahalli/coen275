// Create a new folder in VS code and have only header and cpp files related to that program in this folder.
// This will come handy for compiling all the cpp files in that folder with a common header file.

// person.h
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

//person.cpp
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

// main file
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


// for compile this program - you will have to include all cpp files in the compiler option, you may have to edit the tasks.json file in VS Code.

/* output
Person id = 1234
Person Date of Birth: 5/6/1980 

Person id = 4567
Person Date of Birth: 4/23/1978

*/

