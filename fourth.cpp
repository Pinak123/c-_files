#include <iostream>
using namespace std;

int value= 10;
int main(){
    // int value;
    // cout << "enter the value of a :- ";
    // cin >> value;
    // cout << "the square of the entered value is :-  "<<value*value<<endl;//the 'value' is a global variable with value 10 but it will prints the local value of 'value'
    // //to print the global value of 'value' we can use ::value --> scope resolution operator
    // cout << "The global value of 'value' is :- "<< ::value<<endl ;
    float a=34.45;// can also be written as 34.45f
    long double b=34.45;// can also be written as 34.45l 
    cout << "the value of a is :- "<< a<<endl<<"the value of b is :- "<< b<<endl;
    // the the c++ compiler will recognise 34.45 as double and so we need to add 34.45f to pass it as float like - "34.45f , capital L or F doesn't matter "

    // ********* Float , double and , long double literals ********

    cout << "The size of 34.4f :- "<< sizeof(34.4)<<endl;//the sizeof() is a c++ keyword
    cout << "The size of 34.4F :- "<< sizeof(34.4F)<<endl;
    cout << "The size of 34.4l :- "<< sizeof(34.4)<<endl;
    cout << "The size of 34.4L :- "<< sizeof(34.4L)<<endl;
    

    // **********Refrence variable **************** 
    // float x =453;
    // float & y = x; // Assign the value of x to y
    // cout << x<< endl;
    // cout << y<< endl;

    // **********Typecasting  **************** 
    int a2 =10;
    float b2 =100.35f;
    cout <<"the value of a is "<<(float)a2 << endl;//can also be done as float(a2)
    cout <<"the value of b is "<<int(b2) << endl;// can also be done as (int)b2
    int c = int(b2);
    cout << "The the value of c is integral part of b2  "<< c<< endl;




    
    return 0;
}