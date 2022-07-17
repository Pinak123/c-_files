#include <iostream>
using namespace std;
class complex
{
    int a, b;

    public:

    complex(int , int ); // declaration of constructor
    void printdata()
    {
        cout << "THe value of a is " << a << endl;
        cout << "THe value of b is " << b << endl;
    };
};
complex ::complex(int x, int y)//   ----> this is parameterised  constructure
{
    a = x;
    b = y;
}
    
int main()
{   
    //Implicit call 
    complex o1(4, 5);
    //Explicit call 
    complex o2 = complex(457,647);
    o1.printdata();
    o2.printdata();

    return 0;
}
