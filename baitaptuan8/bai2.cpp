#include <iostream>
using namespace std;

struct Point{
    int x, y;

};

void print (Point a)
{
    cout << a.x << " " << a.y << endl;
}

void add(Point a){
    a.x += 1;
    a.y += 1;
}

void addup (Point &a)
{
    a.x += 1;
    a.y += 1;
}
int main ()
{
    Point a;
    a.x = 10;;
    a.y = 12;
    add(a);
    print(a);
    addup(a);
    print(a);
}