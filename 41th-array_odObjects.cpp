#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setData(int i , int p) 
        {
            id = i;
            price = p;
        }
        void getData(void)
        {
            cout<<"The id is "<<id<<" and the price is "<<price<<endl;
        }
};
int main() {
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    int p,q;
    for (int i = 0; i < size; i++)
    {
        cout << "The id and price of item "<<i+1<<endl;
        cin>> p >> q;
        ptr->setData(p, q);
        ptr++;
    };
    for (int j = 0; j <size; j++)
    {
        ptrTemp->getData();
        ptrTemp++;
    };
    

    


    return 0;
};