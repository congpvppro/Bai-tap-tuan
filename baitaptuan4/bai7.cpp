#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void generateWords(string input) {
    int n = input.size();
    
    sort(input.begin(), input.end());

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << input[i] << input[j] << " ";
        }
    }

   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                cout << input[i] << input[j] << input[k] << " ";
            }
        }
    }
}

int main() {
    string input;
   
    cin >> input;

    generateWords(input);

    return 0;
}
