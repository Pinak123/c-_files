#include<iostream>
using namespace std;

int main() {
    // pointers in arrays
    int arrays[5]={1,2,3,4,5};
    int* p=arrays;
    cout<<"The value at arrays[0] is "<<*p<<endl;
    cout<<"The value at arrays[1] is "<<*(p+1)<<endl;// this can also be done using p++
    cout<<"The value at arrays[2] is "<<*(p+2)<<endl;
    cout<<"The value at arrays[3] is "<<*(p+3)<<endl;
    cout<<"The value at arrays[4] is "<<*(p+4)<<endl;

    return 0;
}