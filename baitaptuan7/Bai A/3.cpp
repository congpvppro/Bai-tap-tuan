#include <iostream>
using namespace std;
int count_even(int*vec, int size,int start,int end)
{
    int count=0;
    for (int i =start;i<end;i++)
    {
       if (vec[i]%2==0)
       {
        count++;
       }
    }
    return count;
}
int main ()
{
    int* vec = new int [20];
    for (int i = 0;i<20;i++)
    {
        vec[i] = i;
    }
    cout<<count_even(vec,20,0,19);
    cout<<endl;
    cout<<count_even(vec,20,0,4);
    cout<<endl;
    cout<<count_even(vec,20,15,19);
}