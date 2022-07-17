#include<iostream>
using namespace std;
class base1{
    public:
        void greet(){
            cout << "Hello " <<endl;

        }
        

};
class base2{
    public:
        void greet(){
            cout << "kaise ho " <<endl;
    }
};
class derived: public base1 , public base2{
    int a;
    public:
        void greet(){
            base2::greet();
        }
};
class derived2 : public derived{

};
int main() {
    base1 obj;
    base2 obj2;
    derived derivedObj;
    // derived2 p;
    // p.greet();
    obj.greet();
    obj2.greet();
    derivedObj.greet();    
    return 0;
}