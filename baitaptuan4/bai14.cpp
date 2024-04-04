#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() { 
    
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++)
    {
        int num; cin >> num;
        mp[num] ++;
    }
    for (int i = 0; i <= n; i ++)
    {
        int num; cin >> num;
        if(mp[num] == 0) {
            cout << num << endl;
        }
        else if (mp[num] >0) mp[num]--;
    }
    return 0;
}
