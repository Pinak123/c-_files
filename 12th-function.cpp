#include<iostream>
using namespace std;

// Function prototype
// type Function-name(arguments);
// int add(int a , int b);///-->Acceptable
// int add(int a , b);//-->Not Acceptable
// int add(int  , int );// --Acceptable
int add(int a , int b);
void g(void); //Acceptable

int main() {
    int num1,num2;
    cout << "Enter first number:- "<<endl;
    cin >> num1;
    cout << "Enter second number:- "<<endl;
    cin >> num2;
    // Here num1 and num2 are actual parameters 
    cout<<"The sum is :-"<<add(num1,num2)<<endl;
    g();
    return 0;
}
int add(int a , int b){
    // Here Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}
void g(){
    cout << "Hey there\n";
}