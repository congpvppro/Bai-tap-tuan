#include <iostream>
using namespace std;
int main ()
{
    int a[3][5]
    {
        {1,2,3,4,5},
        {2,3,4,5,3},
        {4,5,6,7,8},
    };
    for (int i = 0;i<5;i++)
    {
        for (int j = 0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}//mang hai se cho ra cac gia ti rac neu, truy cap qua phan tu cua mang