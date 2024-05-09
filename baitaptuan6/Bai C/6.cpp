#include <iostream>
using namespace std;
int uc(int a,int b)
{
    if (a>b)
    {
        for (int i = b;i>=1;i--)
        {
            if (b%i==0&&a%i==0)
            {
                return i;
            }
        }
    }
    else{
        for (int i = a;i>=1;i--)
        {
            if (b%i==0&&a%i==0)
            {
                return i;
            }
        }
    }
    return 0;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    int u = uc(a,b);
    cout<<u<<endl;
    if (u==1)
    {
        cout<<"LA SNT CUNG NHAU";
    }
    else {cout<<"NO";}
}