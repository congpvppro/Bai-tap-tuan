#include <iostream>

using namespace std;
int main () 
{
    bool seen  =false;
    int n ;
    cin>>n;
    int *vec = new int [n];
    for (int i = 0;i<n;i++)
    {
        vec[i]=0;
    }
    
    for (int i =0;i<n;i++)
    {
        int k ;
        cin>>k;
        vec[k]++;
    }
    for (int i =0;i<n;i++)
    {
        if (vec[i]>=2)
        {
            seen=true;
        }
    }
    if (seen)
    {
        cout<<"Yes";
    }
    else cout<<"No";
}