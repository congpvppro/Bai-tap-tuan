#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int m;
	cin >> m;
	int max = m * m;
	int count = 1;
	int j=m/2;
	vector<vector<int>> vec(m, vector<int>(m,0));
	int i = 0;

	while (count <=max)
	{
		if (vec[i][j] == 0)
		{
			vec[i][j] = count;
			i--;
			j++;
		}
		else
		{
			i++;
			j--;
			i++;
			if (i >= m)
			{
				i -= m;
			}
			if (j < 0)
			{
				j=m + j;
			}
			
			vec[i][j] = count;
			i--;
			j++;
		}
		if (i < 0)
		{
			i = m + i;
		}
		if (j == m)
		{
			j = 0;
		}
	
			count++;
			
	}
	for (int k = 0;k < m;k++)
	{
		for (int l = 0;l < m;l++)
		{
			cout << vec[k][l] << " ";
		}
		cout << endl;
	}
}