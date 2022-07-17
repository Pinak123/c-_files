#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        static int count ;
        void setData(void){
            cout<<"Enter the id "<<endl; 
            cin>>id;
            count++;
        }           
        void getData(void){
            cout<<"The id of the employee number :-"<<count<<" is "<<id<<endl;
        }
        static void getCount(void){//the static functions only have acces to static variable of other atatic functions
            cout <<"The value of count is "<<count<<endl;
        }
};
// *****The static variables are not owed by the objects they are by calsses itself the static variable get thre independent memory location from from the Objects
// All the objects shares the same memory location for the static variables

int Employee:: count; //default value is 0
int main() {
    Employee employee,pinak,sandip,atharva;
    // employee.id=1;//Cannot do this as is is private to
    atharva.setData();
    atharva.getData();
    Employee::getCount();//since it is static function we need to call it like this


    employee.setData();
    employee.getData();
    Employee::getCount();

    pinak.setData();
    pinak.getData();
    Employee::getCount();

    sandip.setData();
    sandip.getData();
    Employee::getCount();


    return 0;
}