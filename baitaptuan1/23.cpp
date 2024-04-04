#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout<<"Max without IF!"<<endl;
    int a,b;
    cin>>a>>b;
   cout<<(a+b+abs(b-a))/2;
}