#include<iostream>
using namespace std;
// variable and comments
int glo=100;
void sum(){
    int a;
    cout<< glo; //takes the global value of glo i.e;100
    }
int  main(){
    int glo=10;// sets the local value for glo
    glo=20;//modifies he local value for glo
    int num = 10;//creating the variable 
    // syntax Data_type var_name = Value;
    char letter = 'a';
    float value = 10.546;
    int a=45,b=45;// we can declare them on single line
    sum(); //calls the function rand
    bool pinak=true;// sets the value 1->true 0->false
    cout<< glo << pinak;
    // cout << "hello wourld "<< num << " \nthe value of a is " << a << " \nthe value of b is " << b;

    // cout << "\nthe value of letter is:- "<< letter ;//using line brake '\n'
    return 0;
}

