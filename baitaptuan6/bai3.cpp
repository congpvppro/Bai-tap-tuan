#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <char> v;

void print()
{
    for (auto it : v) cout << it ;
    cout << endl;
}
void find(int n, int k)
{
    char lastchar (v.empty() ? 'a' - 1 : v.back());
    for (char a = lastchar + 1; a <'a' + n; a++)
    {
        v.push_back(a);
        if (v.size() == k) print();
        else find(n,k);
        v.pop_back();
    }
}


int main ()
{
    int n, k;
    cin >> n>> k;
    find(n,k);
    
}