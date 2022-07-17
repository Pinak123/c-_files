#include <iostream>
using namespace std;

int main(){
    // ****** If else statements ******
    int i;
    cout << "Tell me your age." << endl;
    cin >> i;
    // if (i<18 && i>0){
    //     cout << "you are not elligible for driving" <<endl;
        
    // }
    // else if (i==18){
    //     cout << "you are still a kid but you can apply for driving license"<<endl;
    // }
    // else if (i<0){
    //     cout << "you Entered invalid age"<<endl;
    // }
    // else
    // {
    //     cout << "you are not a kid, so you can drive"<<endl;
    // };
    // Switch controll statements
    switch (i)
    {
    case 18:
    cout << "you are 18 "<< endl;
        /* code */
        break;
    case 19:
    cout << "you are 19 "<< endl;
    break;
    case 20:
    cout << "you are 20 "<< endl;
    break;

    case 21:
    cout << "you are 21 "<< endl;
    break;


    default:
    cout << "you are not 18 "<< endl;
        break;
    }
    
    return 0;


}