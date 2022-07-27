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
            cout<<"you roll number is "<<roll_no<<endl<<endl; 
        }
};

//Creating test from stuudent
class test : virtual public students{
    protected:
        float maths, physics;
    public:
        void set_marks(float a, float b)
        {
            maths  = a;
            physics = b;
        }
        void print_marks(void )
        {
            cout <<"your marks obtained are :-"<<endl
                 <<"maths: "<<maths<<endl
                 <<"physics: "<<physics<<endl<<endl;
        }
};
class sports : virtual public students{
    protected:
        float scores;
    public:
        void set_scores(float sc)
        {
            scores= sc;
        }
        void print_scores(void )
        {
            cout<<"your pt score is :- "<<scores<<endl<<endl;
        }
};

class result : public test , public sports{
    private:
        float total;
    public:
        void display(void)
        {
            total= maths + physics + scores;
            print_num();
            print_marks();
            print_scores();
            cout<<"your total score is "<<endl 
                <<total<<endl;
        }
};
int main() {
    result Pinak;
    Pinak.set_marks(100 , 100);
    Pinak.setnum(22);
    Pinak.set_scores(99);
    Pinak.display();
    return 0;
}