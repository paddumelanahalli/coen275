#include <iostream>
using namespace std;

class employee
{
    private:
    //only class member functions can access members
    int salary;

    public:
        //setter
        void setSalary(int s)
        {
            salary = s;
        }

        //getter
        int getSalary()
        {
            return salary;
        }
};

int main()
{
    employee myEmpObj;
    myEmpObj.setSalary(30000);
    cout << myEmpObj.getSalary();

    return 0;
}
