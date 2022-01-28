/* https://en.cppreference.com/w/cpp/language/move_constructor - for more info
Below is a reference code for move constructor taken from an online example. 
This code just creates shallow copy of an object to be pushed back in the vector instead of actually copying it to a new memory location -
*/

#include <iostream>
#include <vector>
using namespace std;

class A{
  int *ptr;
public:
  A(){
    // Default constructor
    cout << "Calling Default constructor\n";
    ptr = new int ;
  }

  A( const A & obj){
    // Copy Constructor
    // copy of object is created
    this->ptr = new int;
    // Deep copying
    cout << "Calling Copy constructor\n";
  }

  A ( A && obj){
    // Move constructor
    // It will simply shift the resources,
    // without creating a copy.
     cout << "Calling Move constructor\n";
    this->ptr = obj.ptr;
    obj.ptr = NULL;
  }

  ~A(){
    // Destructor
    cout << "Calling Destructor\n";
    delete ptr;
  }

};

int main() {

  vector <A> vec;
  vec.push_back(A());

  return 0;

}


/* output

Calling Default constructor
Calling Move constructor   
Calling Destructor
Calling Destructor

*/
