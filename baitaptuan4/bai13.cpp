#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int suml(vector <int> v, int index, int n)
{
    int sum = 0;
    for (int i = 0;i <index; i ++)
    {
        sum += v[i];
    }
    return sum;
}
int sumr(vector <int> v, int index, int n)
{
    int sum = 0;
    for (int i = index + 1 ; i < n; i ++)
    {
        sum += v[i];
    }
    return sum;
}
int main ()
{
    int cases; cin >> cases;
    while (cases--)
    {
        bool found = false;
        int n; cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i ++)
        {
            int num; cin >> num;
            v.push_back(num);
        }
        for (int i = 0; i < n; i ++){
        if (suml(v,i,n) == sumr(v,i,n)) {
            cout << "YES"<< endl;
            found = true;
        }
        }
        if (found ==false) cout << "NO"<< endl;
    }
}