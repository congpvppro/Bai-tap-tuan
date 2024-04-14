#include <iostream>
using namespace std;

struct Point{
    int x, y;

};

void print (Point a)
{
    cout << a.x << " " << a.y << endl;
}

Point midpoint (const Point a, const Point b)
{
    Point mid;
    mid.x = (a.x + b.x) /2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

int main ()
{
    Point a;
    a.x = 10;
    a.y = 12;
    Point b;
    b.x = 20;
    b.y = 22;
    print(midpoint(a,b));
}