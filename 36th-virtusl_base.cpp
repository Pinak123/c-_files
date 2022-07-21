#include<iostream>
using namespace std;
class students {
    protected:
        int roll_no;
    public:
        void setnum(int a)
        {
            roll_no =a;
        }
        void print_num(void )
        {
            cout<<"you roll number is "<<roll_no<<endl; 
        }
};
int main() {
    
    return 0;
}