#include<iostream>
using namespace std;
int count = 0;
int recursion(int n) 
{
    if ( n <=1){
        return 1;
    }
    return n * recursion(n-1);
}
int fibonacci(int n)
{
    if ( n <=1)
    {
        return 1;
    };
    return fibonacci(n-2) + fibonacci(n-1);
}
int main() {
    // ***Recursion***
    // cout << "Enter the number:- "<<endl;
    // int a;
    // cin>>a;
    // cout<<"The factorial of the number "<<a<< " is :- "<<recursion(a)<<endl;
    int f;
    cout<<"Enter the position num :- "<<endl;
    cin >> f;
    cout<<"the number is :- "<<fibonacci(f)<<endl;


    return 0;
}