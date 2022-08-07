#include <iostream>
using namespace std;
// case:1
//  class B :public A{
//      Order of execution --> first B() then A()
// };
// case:2
//  class A :public B , public C{
//      Order of execution --> first B() then C() then A()
// };
// case:3
//   class A:public B ,virtual public C{
//         Order of execution --> first C() then B() then A()
// }
//
//

class Base1
{
    int data1;

public:
    Base1(int i1)
    {
        data1 = i1;
        cout << "Base1 class constructor called" << endl;
    };
    void printDatab1()
    {
        cout << "The value of data1 is :-" << data1 << endl;
    };
};
class Base2
{
    int data2;

public:
    Base2(int i2)
    {
        data2 = i2;
        cout << "Base2 class constructor called" << endl;
    };
    void printDatab2()
    {
        cout << "The value of data2 is :-" << data2 << endl;
    };
};

class Derived : public Base1, public Base2{//The order of in which Base1 and Base2 are called matters a lot , here in this case Base1 will be activated first.
    int derived1, derived2;
    public:
        Derived(int a, int b , int c , int d):Base1(a) , Base2(b){
            derived1=c;
            derived2=d;
            cout << "derived class constructor called" << endl;
        };
        void printData()
        {
            cout << "The value of derived1 is :-" << derived1 << endl;
            cout << "The value of derived2 is :-" << derived2 << endl;
        };

};



int main()
{
    Derived pinak(1,2,3,4);
    pinak.printDatab1();
    pinak.printDatab2();
    pinak.printData();
    return 0;
}