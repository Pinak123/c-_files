#include<iostream>
using namespace std;
class c2;
class c1{
    int value;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a1){
            value = a1;

        };
        void displayData(){
            cout << value << endl;
        }
};
class c2{
    int value2;
    friend void exchange(c1&, c2&);
    public:
        void indata(int a1){
            value2 = a1;

        };
        void displayData(){
            cout << value2 << endl;
        }
};
void exchange(c1 &a1, c2 &a2){
        int temp = a1.value;
        a1.value=a2.value2;
        a2.value2=temp;
};
int main() {
    c1 o1;
    c2 o2;

    o1.indata(23);
    o2.indata(33);
    exchange(o1 , o2 );
    cout << "The value after exchangin becames :-";
    o1.displayData();
    cout << "The value after exchangin becames :-";
    o2.displayData();
    return 0;
}