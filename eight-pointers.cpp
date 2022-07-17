#include<iostream>
using namespace std;

int main() {
    //pointer concept
    int a= 10;
    int* b= &a;
    //& ---> Address of a operator
    cout << "The address of a( b ) is :- "<<b<<endl;//prints the address of a on the ram
    cout << "The address of a( &a ) is :- "<<&a<<endl;//prints the address of a on the ram
    //* --->(The value at operator) Derefrence operator
    cout << "The value at address b is :- "<<*b<<endl;//prints the value which is stored at address b
    // pointers of pointers
    int** c = &b;
    cout << "The address of b(c) is :- "<<c<<endl;//prints the address of of b
    cout << "The address of b(&b) is :- "<<&b<<endl;//prints the address of of b
    cout <<"The value at address c is :- "<<*c<<endl;
    cout << "The value at address value(address (c) )=>[**c]:- "<<**c<<endl;

    return 0;
}   