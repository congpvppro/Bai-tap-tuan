#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <char> v;
vector <vector<char>> b;
void print()
{
    do
    {
    b.push_back(v);
    }
    while (next_permutation(v.begin(),v.end()));
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
    sort(b.begin(),b.end());
    for (auto it : b) {
        for (auto c : it ) cout << c;
        cout << endl;
    }
}