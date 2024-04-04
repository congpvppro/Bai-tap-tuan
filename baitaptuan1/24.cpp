#include <iostream>
using namespace std;
int main ()
{
    int d,m,y;
    cin>>d>>m>>y;
    int sum = d-1;
    bool leap = 0;
    if (y%400==0)
    {
        leap = 1;

    }
    else if (y%4==0&&y%100!=0)
    {
        leap = 1;
    }
    else leap = 0;
    m--;
    while (m>=1)
    {
        switch (m)
        {
            case 1:
            sum +=31;
            break;
            case 2:
            switch (leap)
            {
                 case 1:
                 sum+=29;
                 break;
                 case 0:
                 sum+=28;
            }
            case 3:
            sum+=31;
            break;
            case 4:
            sum+=30;
            break;
            case 5:
            sum+=31;
            break;
            case 6:
            sum+=30;
            break;
            case 7:
            sum+=31;
            break;
            case 8:
            sum+=31;
            break ;
            case  9 :
            sum+=30;
            break;
            case 10:
            sum+=31;
            break;
            case 11:
            sum+=30;
            break;
            case 12:
            sum+=31;
            break; 
        }
        m--;
    }
    while (sum>=7)
    {
        sum-=7;
    }
    switch (sum)
    {
        case 0:
        cout<< "Monday";
        break;
        case 1:
        cout<<"Tuessay";
        break;
        case 2:
        cout<<"Wednesday";
        break;
        case 3:
        cout<<"Thursday";
        break;
        case 4:
        cout<<"Friday";
        break;
        case 5:
        cout<<"Saturday";
        break;
        case 6:
        cout<<"Sunday";
        break;
    }

}