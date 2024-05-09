#include <iostream>
using namespace std;
string tostring(int n)
{

    string s= "1";
    s[0] = n % 10 + 48;
    n /= 10;
    int i = 1;
    while (n > 0)
    {
        int k = n % 10;
        string s1 = "1";
        s1[0] = k + '0';
        s = s1 + s;
        n /= 10;
    }
    return s;
}
void ccount(int &count, const string n)
{
     
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
    count++;
 }
}
int main ()
{
    int n;
    cin>>n;
    for (int i =0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int count = 0;
        for (int j = a;j<=b;j++)
        {
            string s = tostring(j);
            ccount(count,s);
        }
        cout<<count<<endl;
    }
}