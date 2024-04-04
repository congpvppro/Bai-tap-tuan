#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> vec;
    for (int i =0;i<5;i++)
    {
        int  k ;
        cin>>k;
        vec.push_back(k);
    }
    for (int i = 0;i<5;i++)
    {
        int pos= 0 ;
        for (int j =0;j<5;j++)
        {
            if (vec[i]-vec[j]>0) {pos++;}
            else if (vec[i]-vec[j]<0) {pos--;}
        }
        if (pos ==0 ) 
        {
            cout<<vec[i];
            break;
        }
    }

}