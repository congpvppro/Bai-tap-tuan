#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    m += 2;
    n += 2;
    vector<vector<char>> vec(m , vector<char>(n , '*'));
    vector<vector<char>> vec1(m, vector<char>(n, '*'));
    srand(time(NULL));
    while (k > 0)
    {
        k--;
        int n1 = 0;
        int m1 = 0;
        while (vec[n1][m1] == 'm'||n1==0||m1==0||n1==n-1||m1==m-1)
        {
             n1 = rand() % n;
            m1 = rand() % m;

        }
        vec[n1][m1] = 'm';
    }
    for (int i = 1;i < m - 1;i++)
    {
        for (int j = 1;j < n-1;j++)
        {
            int count = 0;
            for (int a = i - 1;a<=i+1;a++)
            {
                for (int b = j - 1;b <= j + 1;b++)
                {
                    if (a == i && b == j)
                    {
                        continue;
                    }
                    if (vec[a][b] == 'm')
                    {

                        count++;
                    }
                }
            }
            if (vec[i][j] != 'm')
            {
                vec[i][j] = 48 + count;
            }
        }
    }
    bool gameover = false;
    for (int i = 1;i < m - 1;i++)
    {
        for (int j = 1;j < n - 1;j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    while (!gameover)
    {

  
        int x=n;
        int y = m;
        while (x + 1 > m-1 || y + 1 > n-1)
        {
            cout << "Choose x: ";cin >> x;
            cout << endl;
            cout << "Choose y: ";cin >> y;
            cout << endl;
        }
        if (vec[x + 1][y + 1] != 'm')
        {
            vec1[x + 1][y + 1] = vec[x + 1][y + 1];
        }
        else { gameover = true;cout << "YOU'RE DEAD"<<endl; }
        if (!gameover)
        for (int i = 1;i < m - 1;i++)
        {
            for (int j = 1;j < n - 1;j++)
            {
                cout << vec1[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1;i < m - 1;i++)
            {
                for (int j = 1;j < n - 1;j++)
                {
                    cout << vec[i][j] << " ";
                }
                cout << endl;
            }
        }
    }

}