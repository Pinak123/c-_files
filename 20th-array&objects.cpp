#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setid()
    {
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    };
    void getid()
    {
        cout << "the id of this employee is " << id << endl;
    };
};
int main()
{
    Employee employee[4];
    for (int i = 0; i < 4; i++)
    {
        employee[i].setid();
        employee[i].getid();
        /* code */
    };

    return 0;
}