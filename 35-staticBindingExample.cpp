#include <iostream>
using namespace std;

class computeSum
{
    public:
    int sum (int x, int y){
        return x+y;
    }

    int sum(int x, int y, int z){
        return x+y+z;
    }
};

int main()
{
    computeSum obj;

    cout << "sum of 2 numbers : " << obj.sum(10,20) << endl;
    cout << "sum of 3 numbers : " << obj.sum(10,20,30) << endl;
return 0;
}
