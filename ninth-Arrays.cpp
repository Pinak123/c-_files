#include<iostream>
using namespace std;
void pinak(){
    // int a=100
    int n,a;
    cin>>n;
    cin>>a;
}
int main() {
    // int marks[] = {1,2,3};
    // // cout << marks[0] << " " << marks[1] << " " <<marks[2]<<endl;
    // // another way of doing it
    // int mathmarks[3];
    // mathmarks[0] =1;
    // mathmarks[1] =2;
    // mathmarks[2] =3;
    // cout << marks[0] << " " << marks[1]<< " " <<marks[2]<< " " <<endl;
    // and yet another way of doing it
    int i;
    cout<<"enter the number of elements in an arraay"<<endl;
    cin>>i;
    int newArr[i]={};
    for(int n=0; n<i; n++){
        cin >>newArr[n];

    };
    int n1=0;
     cout<<"Here we go :- "<<endl;
    while ((n1<i))
    {
        cout<<"the element #"<<n1<<endl;
        cout<<newArr[n1]<<endl;
        n1++;
        /* code */
    }






    return 0;
}
int sum(int a,  int b)
{

    int c = a+ b;
    return c;

}
