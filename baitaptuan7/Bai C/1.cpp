#include <iostream>
using namespace std;

void reverse(char a[],int length)
{
    char* left = a;
    char* right = a+length +  - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main()
{
    char a[3] = { 'a','b','c' };
     int   length = sizeof(a) / sizeof(a[0]);

    reverse(a,length);
    for (auto const i : a)
    {
        cout << i << " ";
    }
    return 0;
}
