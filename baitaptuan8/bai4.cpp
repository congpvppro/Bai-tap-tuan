#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point (){};
    Point (int x, int y)
    {
        this-> x= x;
        this->y = y;
    }
};

struct Rect{
    int x, y, w, h;

    bool contains(Point a){
        if (a.x <= x + w && a.x >= x && a.y <= y + h && a.y >= y) return true;
        return false;
    }
};

int main ()
{
    Rect rect;
    rect.x = 3;
    rect.y = 3;
    rect.w = 3;
    rect.h = 4;
    Point a(5,7);
    Point b(7,5);
    if (rect.contains(a)) cout << "YES" << endl;
    else cout << "NO" << endl;
    if (rect.contains(b)) cout << "YES" << endl;
    else cout << "NO" << endl;

}