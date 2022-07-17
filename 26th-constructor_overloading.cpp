#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int x,int y){
            a=x;
            b=y;
        };
        complex(int x ){//the same thing can be done using default Arguments
            a=x;
            b=10;
        };
        void printdata(){
            cout << "a="<<a<<" , b="<<b<<endl;
        };
};
int main() {
    complex pinak(1,2);
    pinak.printdata();
    complex pin(1);
    pin.printdata();

    return 0;
}