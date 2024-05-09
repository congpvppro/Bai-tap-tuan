#include <iostream>
using namespace std;
int main ()
{
 string n;
 cin>>n;
 int i =0;
 int j = n.length()-1;
 int check = true;
 while (i<=j)
 {
    if (n[i]!=n[j])
    {
        check =false;
    }
    i++;
    j--;
 }   
 if (check)
 {
    cout<<"Yes";
 }
 else {cout<<"No";}
}