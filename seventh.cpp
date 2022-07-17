#include <iostream>
using namespace std;

int main()
{
    /*Loops
    There are three types of loops in c++
    1.For loops
    2.While loops
    3.Do while loops

    */
    // For loop
    // for (int i = 0; i <= 45; i++)
    // {
    //     cout << i<<" "<< endl;
    //     /* code */
    // }

    // while loops
    int i = 0;
    // while (i <= 45)
    // {
    //     cout << i << " " << endl;
    //     i++;
    //     /* code */
    // }
    // ******Break statements
    // while (true)
    // {
    //     cout << i<<" "<< endl;
    //     if (i==45) {
    //         break;
    //     }
    //     i++;
    //     /* code */
    // }
    

    // continue statements
    for (int i = 0; i <= 45000000; i++)
    {
        if (i == 30) {
            continue;//won't print 30 , as it will directly jump to another iteration, as it will not break it unlike break statements  
        }        
        cout << i<<" "<< endl;
    }
    return 0;
}