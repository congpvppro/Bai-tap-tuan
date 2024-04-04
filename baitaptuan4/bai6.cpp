#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findTripletsWithZeroSum(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 2; ++i) {
        unordered_map<int, int> map;
        int curr = arr[i];

        for (int j = i + 1; j < arr.size(); ++j) {
            int toFind = -(curr + arr[j]);
            if (map.find(toFind) != map.end()) {
                cout  << curr << " " << arr[j] << " " << toFind << endl;
            }
            map[arr[j]] = j;
        }
    }
}

int main() {
    vector<int> numbers;
    int input;

   
    while (cin >> input) {
        numbers.push_back(input);
        if (cin.get() == '\n') {
            break;
        }
    }

    findTripletsWithZeroSum(numbers);

    return 0;
}

