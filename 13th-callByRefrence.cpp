#include <iostream>
using namespace std;
// this will not swap the value of x and y in real arguments
int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return 0;
}
// this swap the value as we have done using pointers
void swapPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by refrence using c++ refrence variables
void swapRefrence(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    x = 1000;
    y = 2000;
    cout << "The initial value of x is " << x << " and the initial value of y is " << y << endl;
    // swapPointers(&x, &y);//This will swap variables using pointers
    swapRefrence(x, y); // this will also swap the variable, using refrece variables
    cout << "The after value of x is " << x << " and that of y is " << y << endl;
    return 0;
}