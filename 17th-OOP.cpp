#include<iostream>
using namespace std;
class Employee 
{
    private://We cannot access the variables which are in private outside the class, the class function can only access it 
      int a,b,c;
    public:
      void setData(int a1,int b1,int c1){ //Declaration // Note this can also be set outside the class to prevent from creating the mess in here
          a=a1;
          b=b1;
          c=c1;
      };
      void getData(){
          cout<<"the value of a is :-"<<a<<endl;
          cout<<"the value of b is :-"<<b<<endl;
          cout<<"the value of c is :-"<<c<<endl;
          cout<<"the value of d is :-"<<d<<endl;
          cout<<"the value of e is :-"<<e<<endl;
      };
      int d,e;
};
//***This can also be done
// void Employee :: setData(int a1 , int b1, int c1){
//           a=a1;
//           b=b1;
//           c=c1;    

// };
// void Em
int main() {    
    Employee pinak;
    pinak.d=100;
    pinak.e=200;
    pinak.setData(300,400,500);
    pinak.getData();  
    return 0;
}