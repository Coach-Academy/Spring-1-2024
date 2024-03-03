#include <bits/stdc++.h>

using namespace std;

int sum[3][3];

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum[i][j] += arr[i][j];
            if (j + 1 < 3)
                sum[i][j] += arr[i][j + 1];
            if (j - 1 >= 0)
                sum[i][j] += arr[i][j - 1];
            if (i - 1 >= 0)
                sum[i][j] += arr[i - 1][j];
            if (i + 1 < 3)
                sum[i][j] += arr[i + 1][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (sum[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}
