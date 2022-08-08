#include <iostream>
#include <cmath>
using namespace std;
double *sol;
void printResult(double*);
void solution(double a, double b, double c)
{
    double sol1, sol2;
    double deter = b * b - (4 * a * c);
    if (deter < 0)
    {
        cout << " We have no teal solution" << endl;
    }else if (a==0){
        cout << "This is not a quadratic equation"<<endl;
    }
    else
    {
        sol1 = ((-b) + sqrt(deter)) / (2 * a);
        sol2 = ((-b) - sqrt(deter)) / (2 * a);
        ::sol = new double[2];
        ::sol[0] = sol1;
        ::sol[1] = sol2;
        ::printResult(::sol);
    }
};
void printResult(double* arr){
    cout<<"The first solution is:  "<<arr[0]<<endl;
    cout<<"The second solution is: "<<arr[1]<<endl;
};
int main()
{   
    int a,b,c;
    cout<<"This is quadratic equation solver"<<endl<<endl;
    cout<<"Enter values of corfficient of x^2 , x , and constant term a,b,c respctively"<<endl;
    cin>>a>>b>>c;
    solution(a,b,c);
    return 0;
}