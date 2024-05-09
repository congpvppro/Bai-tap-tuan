#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    int num;
    cin >> num;
    vector<int> vec;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
            vec.push_back(0);
        }
        else
        {
            num /= 2;
            vec.push_back(1);
        }
        n++;
    }
    for (int i = n - 1;i >= 0;i--)
    {
        cout << vec[i];
    }
}