#include <iostream>
using namespace std;
int main ()
{
    int d = 0;
    int check = 0;
    for (int i= 0;i<24;i++)
    {
        if (d==0 &&check==0)
        {
            cout<<d+12<< " midnight"<<endl;
            d++;
            check++;
            continue;
        }
        else if (d==12&& check ==1 )
        {
            cout<<12<<" noon"<<endl;
            d++;
            continue;
        }
        if(d<12)
        {
            cout<<d<<" am"<<endl;
        }
        else 
        {
            cout<<d-12<<" pm"<<endl;
        }
        d++;

    }
}