#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter your last three test scores: "; 
    int s1;
    int s2;
    int s3;
    cin >> s1 >> s2 >> s3;
    double average = (s1 + s2 + s3) / 3; 
    cout << "FIRST - Your average score is " << average << endl;

    double total = s1 + s2 + s3;
    double average2 = total / 3;
    cout << "SECOND - Your average score is " << average2 << endl;
    return 0;
}
