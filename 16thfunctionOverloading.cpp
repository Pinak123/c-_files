#include<iostream>
using namespace std;
// int sum(int x , int y) {
//     cout<<"Using function with 2 arguments: "<<endl;
//     return x + y;
// }
int sum(int x , int y , int z) 
{
    cout<<"Using function with 3 arguments: "<<endl;
    return x + y + z;
}
int main() {
    cout<<sum(1,3)<<endl;
    cout<<sum(1,2,3)<<endl;

    return 0;
}