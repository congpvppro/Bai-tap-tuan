#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int count = 1;
    int a = 0, b = 0;
    vector<vector<long>> vec(m, vector<long>(n));

    while (count <= m * n) {
        for (int j = a; j < n - b; j++) {
            vec[a][j] = count;
            count++;
        }
        if (count > m * n) {
            break;
        }

        for (int i = a + 1; i < m - a; i++) {
            vec[i][n - 1 - b] = count;
            count++;
        }
        if (count > m * n) {
            break;
        }

        for (int j = n - 2 - b; j >= b; j--) {
            vec[m - 1 - a][j] = count;
            count++;
        }
        if (count > m * n) {
            break;
        }

        for (int i = m - 2 - a; i > a; i--) {
            vec[i][b] = count;
            count++;
        }
        if (count > m * n) {
            break;
        }

        a++;
        b++;
    }

    // Output matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << vec[i][j]<<setw(4) ;
        }
        cout << endl;
    }

    return 0;
}