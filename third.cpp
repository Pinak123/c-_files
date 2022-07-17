#include<iostream>
using namespace std;

// there are two types of header files
// 1. System header files: it comes with the compiler
// example :- #include <iostream>  ("used above ")
// 2. User defined header files: it is defined by the programmer
// example:- #include "this.h" ---> this will throw an error id the this.h file is not present in the directory
int main(){
    int a=10,b=20;
    float x = a / 30;
    cout<<"The value of x is:- "<<x<< endl;
    cout<<"The following are the operators in c++\n";
    cout<<"The value of a+b is:- "<< a+b<< endl;
    cout<<"The value of a-b is:- "<< a-b<< endl;
    cout<<"The value of a*b is:- "<< a*b<< endl;
    cout<<"The value of a/b is:- "<< a/b<< endl;// a / b actually come out to me 0.8 but since two integers are been divide the result must be an integer , this is some sort of floor division
    cout<<"The value of a++ is:- "<< a++<<endl;//First of all it will pfrint value of a i.e; 10 , then it will increment a by 1 then value of a becomes 11
    cout<<"The value of a-- is:- "<<a-- <<endl;//here it will first prints a , =11, then decrements the a by 1
    cout<<"The value of --a is:- "<< --a<<endl;// in this case it will first decrements the value of a by 1 then prints a
    cout<<"The value of ++a is:- "<< ++a<<endl;// in the same fasion it will first increments the a and then it prints the value of a

//    Comparison operators
    cout<<"The value of a==b is:- "<<(a==b)<<endl;
    cout<<"The value of a!=b is:- "<<(a!=b)<<endl;
    cout<<"The value of a<b is:- "<<(a<b)<<endl;
    cout<<"The value of a<=b is:- "<<(a<=b)<<endl;
    cout<<"The value of a>=b is:- "<<(a>=b)<<endl;
    cout<<"The value of a>b is:- "<<(a>b)<<endl;


// Logical operators
    cout<<"tthe value of a<b && a<=b is:-"<< ((a<b) && (a<=b))<<endl;//returns true if both of the statements are true
    cout<<"The value of ((a==b) || (a<=b)) is: "<<((a==b) || (a<=b))<<endl;// logical or operator ,returns true if at least of of the statements are true
    cout<<"The value of !(a==b) is: "<<!(a==b)<<endl;//  not operator , simply reverts the results from true to false and false to true

    return 0;
}
