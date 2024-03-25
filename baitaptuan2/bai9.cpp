#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


int main ()
{
  
    int n; cin >> n;
    ll ma = 1e9,mb = 1e9;
    for (int i = 0; i < n; i ++)
    {
        ll a, b; cin>> a >> b;
         ma = min(ma, a);
         mb = min(mb, b);
    }
    cout << ma * mb << endl;
}