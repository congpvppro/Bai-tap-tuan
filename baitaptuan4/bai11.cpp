#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0;i < n;i++)
    {
        cin >> vec[i];
        cin.ignore();
    }
    int length = 0;
    char middle = ' ';
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            int v1 = vec[i].length();
            int v2 = vec[j].length();
            bool found = false;
            if (v1 == v2 && vec[i][0] == vec[j][v2 - 1])
            {
                found = true;
                for (int k = 0;k < v1;k++)
                {
                    if (vec[i][k] != vec[j][v1-k-1])
                    {
                        found = false;
                        break;
                    }
                }
            }
            if (found)
            {
                length = v1;
                middle = vec[i][v1 / 2];
                break;
            }
        }
    }
    cout << length << " " << middle;
}