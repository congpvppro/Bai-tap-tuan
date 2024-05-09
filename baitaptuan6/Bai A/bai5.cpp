#include <iostream>
using namespace std;
void print(int x)
{
    cout<<&x<<endl<<x<<endl;
}
void printthamchieu(int &x)
{
    cout<<&x<<endl<<x;
}
int main ()
{
    int x= 0;
    cout<<&x<<endl<<x<<endl;
    print(x);
    cout<<endl;
    printthamchieu(x);
   // int &x;
   int b =5;
   int &def = b;
    int c=2;
    cout<<b<<endl;
    def = c;
    c=7;
    def = c;
    cout<<b;
}//+nó là một biến trong bộ nhớ
//ko thể khai báo một tham chiếu mà ko chiếu tới gì
// có thế gán tham chiếu cho biến khác, khi đó khi b sẽ thay đổi theo giá trị của c