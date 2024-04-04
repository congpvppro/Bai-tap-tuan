#include <iostream>
#include <vector>
using namespace std;
int main ()
{
   vector<string> f(10);
   int n;
   cout<<"Chọn số : ";
   cin>>n;
   f[0] = "a";
   f[1] = "b";
   for (int i =2;i<10;i++)
   {
    f[i] = f[i-1] +f[i-2];
   }
   cout<<f[n];
}