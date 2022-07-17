#include<iostream>
using namespace std;
// *******Inline Functions ********************************//
// inline int product(int a, int b) {//here the  "inline" will store the content of the fnction in cache memory this might help us in some cases
    // return a*b;
    // ******But if the code content of the fnction is quiet large you are not adviced to use it as it will ake a quiet a large amoungth of memory
// }
// we wil use static variables here

int product(int a, int b) {
    static int c= 0;//the c will retains its value after the function is initiall called , i.e; it won't change the value of c to 0 every time it is called
    c=c+1; //This will update the value of c very time the unction runs 
    return a*b+c; 
    }

int main() {
    int a, b;
    cout << "enter two elements" << endl;
    cin >>a>>b;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    cout<<"The product of the two elements is  "<<product(a,b)<<endl;
    return 0;
}