// Create a new folder in VS code and have only header and cpp files related to that program in this folder.
// This will come handy for compiling all the cpp files in that folder with a common header file.



// date.h file
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


// date.cpp ( main cpp file)
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

int main()
{
    return 0;
}

// for compile this program - you will have to include all cpp files in the compiler option, you may have to edit the tasks.json file in VS Code.
