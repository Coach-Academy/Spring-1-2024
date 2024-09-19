#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    int lights[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> lights[i][j];
        }
    }
    int sum[3][3] = {};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum[i][j] += lights[i][j];
            if (j - 1 >= 0)
                sum[i][j] += lights[i][j - 1];
            if (j + 1 < n)
                sum[i][j] += lights[i][j + 1];
            if (i - 1 >= 0)
                sum[i][j] += lights[i - 1][j];
            if (i + 1 < n)
                sum[i][j] += lights[i + 1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (sum[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}
