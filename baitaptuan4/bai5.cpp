#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findPairsWithZeroSum(vector<int>& arr) {
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); ++i) {
        int curr = arr[i];
        if (map.find(-curr) != map.end()) {
            cout << curr << " " << -curr << endl;
        }
        map[curr] = i;
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

    findPairsWithZeroSum(numbers);

    return 0;
}
