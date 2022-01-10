#include <iostream>
using namespace std;
void fun(int y);

int main()
{

int x = 10;

fun (x); // calling function by value of x

cout << "x value in main = " << x << endl;
return 0;
}

void fun(int y)
{
    y++;
    cout << "yvalue in main = " << y << endl;
    return;
}
