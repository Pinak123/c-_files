#include <iostream>
using namespace std;
class Base
{
    int data1; // private , not inharitable
public:
    int data2; // public hence inheriatble
    void setData();
    int getData1();
    int getData2();
};
class derived_class : public Base
{ // a class is being derived publically
    int data3;

public:
    void process();
    void display();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
};
int Base ::getData1()
{
    return data1;
};
int Base ::getData2()
{
    return data2;
};
void derived_class::process()
{
    data3 = data2 * getData1();
};
void derived_class::display()
{
    cout << "The value of data1 is " << getData1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
};

int main()
{
    derived_class dr;
    dr.setData();
    dr.process();
    dr.display();

    return 0;
}