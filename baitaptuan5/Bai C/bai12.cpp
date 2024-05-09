#include <iostream>
#include <array>
#include <vector>
#include <cmath>

using namespace std;
vector <int> gtk,gtn;
int kiemtra(int k, int n)
{
    if (k >= 0 && k <= n && n >=1 && n <=20) return 1;
    if (k == - 1 && n == -1) exit(0);
    return 0;
}

long long gt(int n)
{
    if (n == 0) return 0;
    if (n == 1 ) return 1;
    else return n * gt (n - 1);
}

int toHopp(int k , int n)
{
    return gt(n) / (gt(k) *gt (n - k));
}

void nhapKN()
{
    int k, n;
    cin >> k >> n;
    if (k == -1 && n == -1) {
        gtk.push_back(k);
        gtn.push_back(n);
    }
    else 
    {
        gtk.push_back(k);
        gtn.push_back(n);
        nhapKN();
    }
    

}
int main ()
{
    nhapKN();
    int sz= gtk.size();
    for (int i = 0; i < sz; i ++)
    {cout << gtk[i] << " " << gtn[i]<< endl;
        if (kiemtra(gtk[i], gtn[i]) == 0) continue;
        cout << toHopp(gtk[i], gtn[i])<< endl;
    }
}