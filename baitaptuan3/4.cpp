#include <iostream>
using namespace std;
int checkaround(char ** mine,int i , int j )
{
    int count = 0;
    for (int k = i-1;k<i+2;k++)
    {
        for (int l = j-1;l<j+2;l++)
        {
            if (mine[k][l]=='*')
            {count++;}
        }
    }
    return count;
}
int main ()
{
    int m,n;
    cin>>m>>n;
    m+=1;
    n+=1;
    char ** mine = new char *[m];
  
    for (int i =0;i<m;i++)
    {
        mine[i] = new char [n];
    }
      for (int i =0;i<m;i++)
    {
        for (int j =0;j<n;j++)
        {
            mine[m][n] ='0';
        }
    }
    for (int i = 1 ; i <m-1;i++)
    {
        for (int j = 1;j<n-1;j++)
        {
            cin>>mine[i][j];
        }
    }
    for (int i = 1 ; i <m-1;i++)
    {
        for (int j = 1;j<n-1;j++)
        {
            int count = 0;
            if (mine[i][j]=='.')
            {
            count = checkaround(mine,i,j);
            mine[i][j] = count+'0';
            }

        }
    }
}