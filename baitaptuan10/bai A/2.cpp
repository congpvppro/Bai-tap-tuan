#include <iostream>
using namespace std;
int main ()
{
int* p = new int;    
int* p2 = p;      

*p = 10;           

delete p;           

*p2 = 100;           //  ghi giá trị 100 vào vùng nhớ đã được giải phóng bởi delete, dẫn đến lỗi undefined behavior

cout << *p2;         // đọc giá trị từ vùng nhớ đã được giải phóng, cũng dẫn đến lỗi undefined behavior

delete p2;           //  giải phóng bộ nhớ đã được giải phóng trước đó, gây ra lỗi undefined behavior

}