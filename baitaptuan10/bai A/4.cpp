#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << " a = " << a << endl;
    int *p = new int [a];
    delete p;
    //cout << " a = " << a << endl; 
    return 0;
    //ta đang giải phóng bộ nhớ mà con trỏ p chỉ tới, thế nên a sẽ không xác định
}
