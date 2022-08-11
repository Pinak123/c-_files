#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A * setdata(int a)
        {
            this->a=a;//(*this).a=a;
            return this;
        };
        void getData(void){
            cout << "The value of a is " << a << endl;
        };
};
int main() {
    A a;
    a.setdata(10)->getData();
    return 0;
}