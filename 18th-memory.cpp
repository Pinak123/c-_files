#include<iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) { counter = 0; };
        void displayprice(void);
        void setPrice(void);
};
void shop :: setPrice(void)
{
    cout <<"Enter the id of the item "<<counter+1<<endl;
    cin >> itemId[counter];
    cout <<"Enter the price of the item"<<endl;
    cin >> itemPrice[counter];
    counter++;

};
void shop :: displayprice(void)
{
    for (int i = 0; i <=counter; i++) {
        cout<<"The price of item with Id is=> "<<"Id:-> "<<itemId[i]<<" price is:-> "<<itemPrice[i]<<endl;
    };
};

int main() {
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    // dukan.setPrice();
    dukan.displayprice();    
    return 0;
}