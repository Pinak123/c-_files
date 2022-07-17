#include <iostream>
using namespace std;
/*
Syntax for inharating multiple inheritance
class Derivedc : visibilty-mode base1 , visibility-mode base2
{
    Class body of class "Derivedc"
};
*/
class base1
{
protected:
    int baseint1;

public:
    void setbase(int base)
    {
        baseint1 = base;
    }
};
class base2
{
protected:
    int base2int2;

public:
    void setbase2(int base)
    {
        base2int2 = base;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << baseint1 << endl;
        cout << "The value of base2 is " << base2int2 << endl;
        cout << "The sum of these values is " << base2int2 + baseint1 << endl;
    }
};
int main()
{
    derived pinak;
    pinak.setbase(1);
    pinak.setbase2(3);
    pinak.show();
    // derived atharval;

    return 0;
}