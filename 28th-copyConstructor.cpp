#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int x)
    {
        a = x;
    }
    //Copy constructors
    Number (Number &obj)//When no copy constructor is found then compiler supplies its own copy constructor
    {
        cout<<"The example of copy constructor"<<endl;
        a= obj.a;
    };
    void display()
    {
        cout << "Number of this class is " << a << endl;
    };
};
int main()
{
    Number x(100), y(200), z(x) , z2;
    x.display();
    z.display();
    y.display();
    // y.display();
    Number z1(y);
    z1.display();
    z2 = z;//Copy constructor not invoked
    Number z3 = z1;//Copy Constructor invoked
    z3.display();

    return 0;
}