#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> v;
    int n; cin >> n;
    while (n--)
    {
        int num; cin >> num;
        if (v.empty() || num != v.back()) v.push_back(num);
    }
    for (int it : v) cout << it <<" ";
}