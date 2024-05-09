#include<iostream>
#include <stack>
using namespace std;

void dectobin(int n)
{
    stack <int> a;
    a.push(n%2);
    n/= 2;
    while (!a.empty())
    {
        cout << a.top();
        a.pop();
    }

}
