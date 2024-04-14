#include <iostream>
using namespace std;

struct Rect{
    int x, y, w, h;

};

struct Ship{
    Rect rect;
    string id;
    int dx = 1, dy = 1;
    void move ()
    {
        rect.x += dx;
        rect.y += dy;
    }
};

void display (const Ship& a)
{
    cout << a.id << ": " << a.rect.x << " " << a.rect.y << endl;
}

int main ()
{
    int loop = 1;
    Ship ship1, ship2;
    ship1.id = "A1";
    ship2.id = "A2";
    ship1.rect.x = 3;
    ship1.rect.y = 4;
    ship1.rect.w = 3;
    ship1.rect.h = 4;
    ship2.rect.x = 8;
    ship2.rect.y = 9;
    ship2.rect.w = 3;
    ship2.rect.h = 4;
    while (loop < 10)
    {
        ship1.move(); ship2.move();
        display(ship1) ; display(ship2); 
    }
}