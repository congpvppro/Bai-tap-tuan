#include <iostream>
using namespace std;
int main ()
{
    int year;
    cin>>year;
    if (year%400==0)
    {
        cout<<"LeapYear!";
    }
    else if (year %4==0 && year %100!=0)
    {
        cout<<"LeapYear!";
    }
    else 
    {
        cout<<"Not leap year!";
    }
}