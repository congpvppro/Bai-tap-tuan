#include <iostream>
using namespace std;

int main ()
{
    int n; cin >> n;
    for (int i = 2; i < sqrt(n); i ++)
    {
        if (n % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}