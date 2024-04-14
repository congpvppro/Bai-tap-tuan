#include <iostream>
using namespace std;

struct Point{
    int x, y;

};

void print (Point a)
{
    cout << a.x << " " << a.y << endl;
}

int main ()
{
    Point a;
    a.x = 10;;
    a.y = 12;
    print(a);
}