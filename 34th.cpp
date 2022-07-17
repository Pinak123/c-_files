#include <iostream>
using namespace std;
// Create two classes
// 1.Simple calculator :- Takes input from user using utility function and performs simple operations +,-,*,/
// 2.scientific calculator:-Takes input of two numbers and performs scientific operations of your choice
// Create another class HybridCalculator and inherit using theae two classes and perform operations
class simplecalc
{
protected:
    float x, y, result=0;

public:
    char operate;
    friend void simplecalculations(void);
    void setnum()
    {
        cout << "Enter the num 1 :- " << endl;
        cin >> x;
        cout << "Enter the num 2 :- " << endl;
        cin >> y;
    };
    void operation()
    {
        cout << "Enter A for addition S sor substraction M for multiplication D for division" << endl;
        cin >> operate;
        switch (operate)
        {
        case 'A':
            result = x + y;
            break;
        case 'S':
            result = x - y;
            break;
        case 'M':
            result = x * y;
            break;
        case 'D':
            result = x / y;
            break;
        default:
            cout << "Enter valid operator " << endl;
            break;
        };
    };
    void display1()
    {
        cout <<"the result of your calculations is :- "<< result << endl;
    };

};
void simplecalculations(){
    simplecalc op1;
    op1.setnum();
    op1.operation();
    op1.display1();
}
int main()
{
    simplecalc op1;
    simplecalculations();
    return 0;
}