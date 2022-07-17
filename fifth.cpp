#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // int b=10;
    // cout<<"the value of b was is:- "<<b<<endl;
    // b=768;
    // cout<<"the value of b becames :- "<<b<<endl;
    // const int a=10; // here a becames read only variable the value cannot be changed
    // // a=748; It will definitely throw an error
    // cout<<"the value of a is:- "<<a<<endl;

//     // Data manipulator , Helps you to format or display the data
//     int a = 10 , b=223, c=1234;
//     cout <<"The value of a is :- "<<a<<endl;
//     cout <<"The value of b is :- "<<b<<endl;
//     cout <<"The value of c is :- "<<c<<endl;
// // the same with setw
//     cout <<"The value of a with set w is  is :- "<<setw(4)<<a<<endl;//sets the width of a to be 4
//     cout <<"The value of b with set w is  is :- "<<setw(4)<<b<<endl;
//     cout <<"The value of c with set w is  is :- "<<setw(4)<<c<<endl;


// operator precedance
       int a = 10, b =23;
       int c = a*5+b-45+87;//this would be executed like ((((a*5)+b)-45)+87) The expression will be evaluated from Left to Right
       cout <<"The value of c = a*5+b-45+87 is :-"<< c<<"\nIt is same as the value of((((a*5)+b)-45)+85) :-"<< ((((a*5)+b)-45)+87)<< endl; 



    return 0;	
}