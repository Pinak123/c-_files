#include<iostream>
using namespace std;
/*
Syntax for initialization list in cconstructor
constructor (argument list ) : initialization-section
{
    assignment + other code; 
}

*/
class TestConstructor 
{
    int a, b;
    public:
        TestConstructor(int i , int j):a(i), b(i) //if we just send it like  b(i+j) -->then it will set the value of b as (i+j)
        // We can also use it like --> : a(i) , b(a+j)
        // TestConstructor(int i , int j):a(i+ b), b(i)---> THIS WILL CREATE PROBLEMS AS B ISNOT INITIALIZED YET 
        {
            cout << "The vaalue of a is " << a << endl;
            cout << "The vaalue of b is " << b << endl;
        }
};
int main() {
    TestConstructor pinak(19,20);

    return 0;
}