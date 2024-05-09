#include <iostream>
#include <cmath>
using namespace std;
bool checksnt(int n)
{
    for (int  i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int N;
    cin>>N;
    int count=0;
    for (int i =2;i<=N;i++)
    {
        if (checksnt(i))
        {
            count++;
        }
    }
    cout<<count;
}