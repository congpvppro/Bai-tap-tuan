#include <iostream>
#include <deque>
using namespace std;

int main ()
{
    int n; cin >> n;
    
    deque<int> qe;
    for (int i = 1; i <= n; i ++)
    {
        qe.push_back(i);
    }
    for (int i = 1; i <= n; i ++)
    {
        for (auto it : qe) cout << it << " ";
        cout << endl;
        int num = qe.front();
        qe.pop_front();
        qe.push_back(num);
    }
}