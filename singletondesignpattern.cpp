/*
In the above example, the first call to Singleton::GetInstance 
will initialize the singleton instance. This example is for illustrative purposes only; 
for anything but a trivial example program, this code contains errors.
*/

#include <iostream>
using namespace std;

/* Place holder for thread synchronization mutex */
class Mutex
{   /* placeholder for code to create, use, and free a mutex */
};

/* Place holder for thread synchronization lock */
class Lock
{   public:
        Lock(Mutex& m) : mutex(m) { /* placeholder code to acquire the mutex */ }
        ~Lock() { /* placeholder code to release the mutex */ }
    private:
        Mutex & mutex;
};

class Singleton
{   public:
        static Singleton* GetInstance();
        int a;
        ~Singleton() { cout << "In Destructor" << endl; }

    private:
        Singleton(int _a) : a(_a) { cout << "In Constructor" << endl; }

        static Mutex mutex;

        // Not defined, to prevent copying
        Singleton(const Singleton& );
        Singleton& operator =(const Singleton& other);
};

Mutex Singleton::mutex;

Singleton* Singleton::GetInstance()
{
    Lock lock(mutex);

    cout << "Get Instance" << endl;

    // Initialized during first access
    static Singleton inst(1);

    return &inst;
}

int main()
{
    Singleton* singleton = Singleton::GetInstance();
    cout << "The value of the singleton: " << singleton->a << endl;
    return 0;
}


/*output
Get Instance
In Constructor
The value of the singleton: 1
In Destructor
*/
