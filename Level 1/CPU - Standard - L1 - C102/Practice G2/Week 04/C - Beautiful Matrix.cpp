#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int matrix[n][n];
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            cin >> matrix[row][col];
        }
    }
    int steps = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                while (j < 2) {
                    matrix[i][j + 1] = 1;
                    matrix[i][j] = 0;
                    j++;
                    steps++;
                }
                while (j > 2) {
                    matrix[i][j - 1] = 1;
                    matrix[i][j] = 0;
                    j--;
                    steps++;
                }
                while (i < 2) {
                    matrix[i + 1][j] = 1;
                    matrix[i][j] = 0;
                    i++;
                    steps++;
                }
                while (i > 2) {
                    matrix[i - 1][j] = 1;
                    matrix[i][j] = 0;
                    i--;
                    steps++;
                }
            }
        }
    }
    cout << steps << endl;
}
