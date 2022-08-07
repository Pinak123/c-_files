#include<iostream>
using namespace std;
class Complex{
    int real ,imaginary ;
    public:
        void getData()
        {
            cout << "The real part is " << real << endl;
            cout << "The imaginary part is " << imaginary << endl;
        }
        void setData(int a ,int b)
        {
            real = a; 
            imaginary = b;

        }
};
int main() {
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex();// Same thing as above
    // (*ptr).setData(10,20);
    ptr->setData(10,20);
    // (*ptr).getData();
    ptr->getData();// use of arrow operator , here we don't need to derefrence pointer
    // Array of objects 
    Complex *ptr2 = new Complex[3];
    ptr2->setData(1,4);
    ptr2->getData();
    
    return 0;
}