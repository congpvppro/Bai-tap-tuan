#include <iostream>
using namespace std;
#define N 4
int a[] = {1, 2, 3, 4};
int main ()
{
 int b[] = {1, 2, 3, 4};
 for (int i = 0;i<N;i++)
 {
    cout<<a[i]<<" ";
 }
 cout<<endl;
 for (int i = 0;i<N+2;i++)
 {
    cout<<b[i]<<" ";
 }
}
