#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setnum(int a1, int b1)
    {
        a = a1;
        b = b1;
    };
    // Below line permits the non - member function Sumcomplex to  acces all private data types of the the class complex
    friend complex Sumcomplex(complex a1, complex b1);
    void output()
    {
        cout << "The complex num is " << a << " + " << b << "i" << endl;
    };
};
complex Sumcomplex(complex a1, complex b1)
{
    complex C1;
    C1.setnum((a1.a + b1.a), (a1.b + b1.b));
    return C1;
};
int main()
{
    complex A, B, C;
    A.setnum(1, 2);
    A.output();

    B.setnum(3, 4);
    B.output();
    cout << "                 "
         << "---------" << endl;
    C = Sumcomplex(A, B);
    // Sumcomplex(A,B);
    C.output();
    return 0;
}

// Friend Functions
/*
Properties of friend function
1.Not in the scope of the class
2.Since it is not the member of the class so it cannot be called with object.
Example:- c1.Sumcomplex() ==> invalid Syntax
3.Usually contains objects as the arguments
4.Can be declared inside public or private section of the class

*/
