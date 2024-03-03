#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5][5];
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            cin >> arr[row][col];
        }
    }
    int steps = 0;
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (arr[row][col] == 1) {
                while (col < 2) {
                    arr[row][col] = 0;
                    arr[row][col + 1] = 1;
                    col++;
                    steps++;
                }
                while (col > 2) {
                    arr[row][col] = 0;
                    arr[row][col - 1] = 1;
                    col--;
                    steps++;
                }
                while (row < 2) {
                    arr[row][col] = 0;
                    arr[row + 1][col] = 1;
                    row++;
                    steps++;
                }
                while (row > 2) {
                    arr[row][col] = 0;
                    arr[row - 1][col] = 1;
                    row--;
                    steps++;
                }

            }
        }
    }
    cout << steps << endl;
}
