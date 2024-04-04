#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int x,y,z;
  int b;
  cin>>x>>y>>z;
  if (max(max(x,y),z) ==z && min(min(x,y),z)==x)
  {
    b = true;
  }
  if (max(max(x,y),z) ==x && min(min(x,y),z)==z)
  {
    b = true;
  }
  cout<<b;
}