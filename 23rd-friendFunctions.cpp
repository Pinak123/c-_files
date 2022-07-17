#include<iostream>
using namespace std;
class y;    //We need to declare y before head since we had to declare the friend at ine 8
class x{
    int data;
    public:
        void setValue(int value) { data = value; };
    friend void add(x, y);//////
};
class y{
    int num;
    public:
        void setValue(int value) { num = value; };
    friend void add(x, y);  
};
void add( x o1 , y o2){
    cout <<"The sum of values of x and y gives me :-"<< o1.data + o2.num << endl;

};
int main() {
    x a1;
    a1.setValue(3);

    y a2;
    a2.setValue(5);

    add(a1, a2);
    return 0;
}