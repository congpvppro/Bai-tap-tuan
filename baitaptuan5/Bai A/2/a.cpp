#include <iostream>
using namespace std;
char a[3];
int main ()
{
    char b[3];
    for (auto const i :a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto const i :b)
    {
        cout<<i<<" ";
    }
    
}