#include <iostream>
#include <vector>
using namespace std;

const int n = 5;
bool incol[5], indiag1[10], indiag2[10];
int board[5][5];
vector <int> queenx, queeny;
void print()
{
    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 5; j ++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void cachxephau (int currow)
{
    for (int curcol = 0; curcol < 5; curcol ++)
    {
        int curdiag1 = currow + curcol;
        int curdiag2 = curcol - currow + 5;
        if (incol[curcol] == true) continue;
        if (indiag1[curdiag1] == true) continue;
        if (indiag2[curdiag2] == true) continue;
        
        queenx.push_back(curcol);
        queeny.push_back(currow);
        board[currow][curcol] = 1;
        incol[curcol] = true;
        indiag1[curdiag1] = true;
        indiag2[curdiag2] = true;
        if (queenx.size() == 5) {
            print();
            exit(0);
        }
        else cachxephau(currow + 1);
        
        queenx.pop_back();
        queeny.pop_back();
        board[currow][curcol] = 0;
        incol[curcol] = false;
        indiag1[curdiag1] = false;
        indiag2[curdiag2] = false;
    }
}
int main ()
{
    cachxephau(0);
}