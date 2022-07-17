#include <iostream>
using namespace std;
class bank
{
    int principal;
    int period;
    float interest;
    float final;

public:
    void show();
    bank() {}
    bank(int p, int y, float i);
    bank(int p, int y, int i);
};
bank ::bank(int p, int y, float i)
{
    principal = p;
    period = y;
    interest = i;
    final = principal;
    for (int i = 0; i < y; i++)
    {
        final = final * (1 + interest);
    }
};
bank ::bank(int p, int y, int i){
     principal = p;
    period = y;
    interest = float(i) / 100;
    final = principal;
    for (int i = 0; i < y; i++)
    {
        final = final * (1 + interest);
    }
};
void bank :: show(){
    cout <<endl<<"The principal value was "<<principal<<endl
         <<"Return value after "<<period
         <<" is "<< final << endl;
}
int main()
{
    bank b1, b2 , b3;
    int p,y ;
    float r;
    int R;
    //  When interest value is given in float
    cout<< "Enter the value of P y and r"<<endl;
    cin >>p>> y >>r;
    b1 = bank(p ,y ,r);
    b1.show();
//  when interest value is given in percentage
    cout<<"Enter value od p, y and R"<< endl;
    cin >>p>> y >>R;
    b2 = bank(p ,y , R);
    b2.show();
    
    return 0;
}