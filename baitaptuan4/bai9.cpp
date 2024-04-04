#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    vector<int> Y(N);

    for (int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }

    bool threatened = false;

 
    for (int i = 0; i < N; ++i) {
        int row_sum = 0;
        int col_sum = 0;
        for (int j = 0; j < N; ++j) {
            if (X[i] == X[j]) row_sum++;
            if (Y[i] == Y[j]) col_sum++;
        }
        if (row_sum > 1 || col_sum > 1) {
            threatened = true;
            break;
        }
    }

   
    for (int i = 0; i < N; ++i) {
        int sum_diag1 = 0;
        int sum_diag2 = 0;
        for (int j = 0; j < N; ++j) {
            if (X[i] + Y[i] == X[j] + Y[j]) sum_diag1++;
            if (X[i] - Y[i] == X[j] - Y[j]) sum_diag2++;
        }
        if (sum_diag1 > 1 || sum_diag2 > 1) {
            threatened = true;
            break;
        }
    }

    if (threatened) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
