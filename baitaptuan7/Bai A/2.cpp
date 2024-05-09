#include <iostream>
using namespace std;

void printArraySize1(int arr[]) {
   
    cout << "Kich thuoc: " << sizeof(arr) << " bytes" << endl;
}
void printArraySize(int (&arr)[5]) {
    cout << "Kich thuoc: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    cout << "Kich thuoc: " << sizeof(A) << " bytes" << endl;
    printArraySize(A);
    printArraySize1(A);
    return 0;
}
