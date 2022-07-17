#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setnumInt(int);
    void getRoll(void);
};
void student::setnumInt(int r)
{
    roll = r;
};
void student::getRoll(void)
{
    cout << "The roll number is " << roll << endl;
};
class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void exam::setMarks(float m1, float m2)
{
    maths = m1;
    phy = m2;
};
void exam::getMarks(void)
{
    cout << "The maths marks is " << maths << endl;
    cout << "The physics marks is " << phy << endl;
};
class Result : public exam
{
    float percentage;

public:
    void display()
    {
        getRoll();
        getMarks();
        cout << "The result is " << (maths + phy) / 2 << endl;
    }
};
int main()
{
    /*
    Notes:- if we are inheriting B from A and C from B.
    1. Then A is base class for B, and B is base class for C
    2. Then C is inherited class for B and vice versa
    3. A-->B-->C is called inheritence path
    */
    Result pinak;
    pinak.setnumInt(100);
    pinak.setMarks(100, 90);
    pinak.display();

    return 0;
}