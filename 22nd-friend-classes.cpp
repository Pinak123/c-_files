#include <iostream>
using namespace std;
// Forward declaration
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
};

class complex
{
    int x, y;
    // Individually declaring functions as friend 
    friend int calculator ::sumRealComplex(complex o1, complex o2);
    // Aliter:Declaring entire class as friend
    friend class calculator;

public:
    void setnum(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void printNum()
    {
        cout << "Your complex number is " << x << " + " << y << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.x + o2.x);
};

int main()
{
    complex o1, o2;
    o1.setnum(1, 2);
    o2.setnum(3, 4);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of o1 and o2 is " << res << endl;

    return 0;
}