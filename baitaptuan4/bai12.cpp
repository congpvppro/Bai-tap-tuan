#include <iostream>
#include <map>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for (int i = 2 ;i<=n;i++)
    {
        mp.insert({i,0});
    }
    for (int i =2;i<=n;i++)
    {
        if (mp[i]==0)
        {
            int j =i;
            while (j<=n)
            {
                j+=i;
                mp[j]++;
            }
        }
    }
    int count = 0;
    for (int i =2;i<=n;i++)
    {
        if (mp[i]==0)
        {
            count++;
        }

    }
    cout<<count;
    
}