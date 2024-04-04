#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;
int main ()
{
    srand(time(NULL));
    int a  = rand() %100;
    int b = rand()%100;

    if (a>=50)
    {
        cout<<"Chọn thẻ thứ nhất";
    }
    else 
    {
        cout<<"Chọn thẻ thứ 2";
    }
}