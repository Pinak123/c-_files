#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setnum(int a1 , int b1){
            a=a1;
            b=b1;
        };
        void setBysum(complex c1, complex c2){
            a=c1.a + c2.a;
            b=c1.b + c2.b;
        };
        void output(){
            cout << "The complex num is "<<a<<" + "<<b<<"i"<<endl;
        };
};
int main() {
    complex A,B,C;
    A.setnum(1,2);
    A.output();

    B.setnum(3,4);
    B.output();

    C.setBysum(A,B);
    C.output();
    return 0;
}