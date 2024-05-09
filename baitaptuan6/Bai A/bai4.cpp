#include <iostream>
#include <string>
using namespace std;


void testArray(int arr[]) {
 cout<<&arr<<endl; 
}

void testString(string str) {
  cout<<&str<<endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout<<&arr<<endl;
    string str = "Hello";
    cout<<&str<<endl;
    testArray(arr);
    testString(str);
      //ca hai deu duoc truyen theo pass by value
}
