#include <iostream>
#include <cmath>
using namespace std;
//****Using class **
class point
{
    int a, b;
    friend double pointdistance(point, point);

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }
};
double pointdistance(point a1, point b1)
{
    double sq;
    sq = pow((a1.a - b1.a), 2) + pow((a1.b - b1.b), 2);
    return sqrt(sq);
};
/////*****Using Struct ***
struct point1
{
    int x, y;
    point1(int x1, int y1)
    {
        x = x1;
        y = y1;
    };
};
double distance(point1 a1, point1 b1)
{
    double sq;
    sq = pow((a1.x - b1.x), 2) + pow((a1.y - b1.y), 2);
    return sqrt(sq);
}
//////////

int main()
{
    //  Class point
    point p(10, 45);
    point q(23, 10);
    //  Struct point1
    point1 p1(1, 0);
    point1 q1(70, 0);

    double dist = pointdistance(p, q); // Class

    double dist2 = distance(p1, q1); // Struct

    cout << dist << endl;
    cout << dist2 << endl;
    return 0;
}