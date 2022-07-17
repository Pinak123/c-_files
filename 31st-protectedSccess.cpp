#include <iostream>
using namespace std;
class base
{
protected: // The diffrence between private and protected is that protected members can be inherited and privated cannot be inherited.
    int a;

private:
    int b;
};
/*
For a protected member
                    public derivation   private derivation  protected derivation
1.Private members   not inherited        not inherited        not inherited
2.Protected members protected            private(inherited)   protected
3.Public members    public            protected   private              protected
*/

class derived : public base
{
public:
    int geta() //since the inherited protected members cannot be accessed directly outside they can be access with the local functions
    {
        a=1000;
        int b1=1000000;
        return a;
     };
};
int main()
{
    base b;
    derived d;
    cout << d.geta() << endl;
    return 0;
}
