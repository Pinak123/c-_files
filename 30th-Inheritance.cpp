#include <iostream>
using namespace std;
// Base class
class Employee
{

    float salary;

public:
    int id;
    Employee(int id1)
    {
        id = id1;
        salary = 34.00;
    };
    Employee(){};
};
/* Derived class syntax
class {{derived-class-name}}  : {{visibbility-mode}}  {{Base-class-name}} //default visibilitty mode is private
{
    class members/methods/etc...
}

*/
// 1. Default visibility is private
// 2.When visibility mode is private then the all public members are inherited in prvate section of class
// 3.When visibility mode is public then the public members are inherited public section of class
// 4. Private members are never inherited

// creating a programmer derived class with base class Employee
class programmer : private Employee
{
public:
    programmer(int intid)
    {
        id = intid;
    };
    int lanuageCode = 9;
    void getData()
    {
        cout << id << " " << lanuageCode << endl;
    }
};
int main()
{
    Employee pinak(1), Atharva(2);
    cout << pinak.id << endl;
    cout << Atharva.id << endl;
    programmer Pinak(3);
    Pinak.getData();

    return 0;
}