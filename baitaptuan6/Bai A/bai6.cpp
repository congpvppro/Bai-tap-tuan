#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;

void print()
{
    do{
    for (auto it : v) cout << it ;
    cout << endl;
    }
    while (next_permutation(v.begin(),v.end()));
}
void find(int n)
{
    int lastnum (v.empty() ? 0 : v.back());
    for (int a = lastnum + 1; a <= n; a++)
    {
        v.push_back(a);
        if (v.size() == n) print();
        else find(n);
        v.pop_back();
    }
}


int main ()
{
    int n;
    cin >> n;
    find(n);
    
}