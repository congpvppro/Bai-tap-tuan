#include <iostream>
using namespace std;
int main ()
{
    char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;
//tại vi khi ta xóa c, mà c là một phần của a, nên array a ko còn tiếp diễn nữa, dẫn tới cả array ko xác định được ---> ko in ra a
}