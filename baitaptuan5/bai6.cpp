#include <iostream>
using namespace std;
 
int UCLN(int A, int B) {
    if (B == 0)
        return A;
    return UCLN(B, A%B);
}

int main ()
{
    int a, b;
    cin >> a>> b;
    if(UCLN(a,b) == 1) cout << "2 so nguyen to cung nhau" << endl;
}