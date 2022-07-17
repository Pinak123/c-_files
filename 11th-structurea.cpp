#include<iostream>
using namespace std;

// struct employee
// {
//     int id;
//     char nickname;
//     float salary;
//     /* data */
// };

// **Using struct**
typedef struct employee
{
    int id;
    char nickname;
    float salary;
    /* data */
}ep;  //using this you can simply write ep.something instead of struct employee something

// union provides better memoru management
union money {
    // Important:- If you just have to use any one of the following property in union the union will allocate the memory for the respective property which is actually being used, unlike struct
    int dollor;
    char car;
    float pounds;
};

int main() {
    ep pinak;
    pinak.id =1324;
    pinak.nickname = 's';
    pinak.salary =5000000;
    // cout <<pinak.id<<endl;
    // cout <<pinak.nickname<<endl;
    // cout <<pinak.salary<<endl;
    // in the same way you may make the datatypr with diff name
    // ep shubham;//the new datatype 



    union money pinak2;
    pinak2.dollor=1000;//int takes 4 bytes
    pinak2.car='p';//takes p 1 bytes 
    pinak2.pounds=1000;//takees up 4 bytes
    //here if we use all of them at once then offcourse it will allocate memory for all of them at once but if you use just one then it will take memoryy for just one save up the memory

    // Enum
    enum meal{lunch, breakfast, dinner};
    cout << lunch << endl;//returns 0
    cout << breakfast<< endl; //return 1
    cout << dinner<< endl; //returns 2
    meal m1=lunch;//will return 1 as value of m1        


    return 0;
}