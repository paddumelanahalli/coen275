#include <iostream>
using namespace std;

class M {
    protected :
        int m;
    public:
        void get_m(int x){m=x;}     
};

class N {
    protected:
        int n;
    public:
        void get_n(int y){n=y;}    

};

class P : public M, public N{
    public:
        void display(void)
        {
            cout << "m: " << m << endl;
            cout << "n: " << n << endl;
            cout << "m*n: " << m*n << endl;
        }
};

int main()
{
    P multipleP;

    multipleP.get_m(10);
    multipleP.get_n(20);
    multipleP.display();

    return 0;
}
/*ouuput
m: 10
n: 20
m*n: 200
*/
