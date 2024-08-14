#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int table[n][n];
    for (int i = 0; i < n; ++i) {
        table[0][i] = 1;
        table[i][0] = 1;
    }
    for (int row = 1; row < n; ++row) {
        for (int col = 1; col < n; ++col) {
            table[row][col] = table[row - 1][col] + table[row][col - 1];
        }
    }
    cout << table[n - 1][n - 1] << endl;
}
