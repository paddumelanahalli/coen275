#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
    int i;
    char str[25];
    const char *ptr[10] = {
        "books",
        "tv",
        "computer",
        "sports"
    };
    cout << "Enter your favorite leisure pursuit: ";
    cin >> str;
    for (i=0; i< 4; i++)
    {

        int x = strcmp(str,ptr[i]);
        if (!x)
        {
            cout << "Your favorite pursuit " << "is available here" << endl;
            break;
        }
    }

    if (i==4)
        cout << "Your favorite persuit is not avaible here" << endl;
    
    return 0;
}
