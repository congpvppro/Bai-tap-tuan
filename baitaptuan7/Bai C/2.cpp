#include <iostream>
using namespace std;
void delete_char(char* a, char c) {
    char* p = a;
    while (*p != NULL) {
        if (*p == c) {
            char* temp = p;
            while (*temp != NULL) {
                *temp = *(temp + 1);
                temp++;
            }
        } else {
            p++;
        }
    }
}

int main() {
    char str[] = "Hello, World!";
    char c;
    cin>>c;
    
    std::cout << "Before deletion: " << str << std::endl;
    delete_char(str, c);
    std::cout << "After deletion: " << str << std::endl;
    
    return 0;
}
