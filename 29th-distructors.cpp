#include <iostream>
using namespace std;
// Destructors free up the space occupied by the objects/classes
// Destructors never takes any arguments and never returns any values
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for the object number " << count << endl;
    };
    ~num()
    {
        cout << "this is the time when destructor is called for the object number " << count << endl;
        count--;
    }
};
int num :: count =0 ;
int main()
{
    cout << "we are inside our main function " << endl;
    cout << "Creating first object" << endl;
    num n1;
    {//Whatever the code which is inside this block will be destroyed once we exit the block
        cout << "Entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}