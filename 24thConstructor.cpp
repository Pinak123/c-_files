#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Constructor is special member function with same name as of the class .
    // It is use to initialize the objects of its class.
    // Is is automatically invoked Whenever the object is created
    complex(void); // declaration of constructor
    void printdata()
    {
        cout << "THe value of a is " << a << endl;
        cout << "THe value of b is " << b << endl;
    };
};
complex ::complex(void)//   ----> this is default constructure
{
    a = 10;
    b = 10;
}

int main()
{
    complex o1;
    o1.printdata();
    return 0;
}
//1. It should be declared in the public section of the class 
//2. Whenever the object is created , the constructor is automatically invoked
//3. The cannot have return values , and so not have return types 
//4. It can have default arguments.