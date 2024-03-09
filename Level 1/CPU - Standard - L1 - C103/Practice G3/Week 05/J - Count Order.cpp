#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n], q[n], permutation[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }
    for (int i = 1; i <= n; ++i) {
        permutation[i - 1] = i;
    }
    int a = 0, b = 0;
    int cnt = 0;
    do {
        bool isEqual = true;
        for (int i = 0; i < n; ++i) {
            if (p[i] != permutation[i])
                isEqual = false;
        }
        cnt++;
        if (isEqual) {
            a = cnt;
            break;
        }
    } while (next_permutation(permutation, permutation + n));

    for (int i = 1; i <= n; ++i) {
        permutation[i - 1] = i;
    }

    cnt = 0;
    do {
        bool isEqual = true;
        for (int i = 0; i < n; ++i) {
            if (q[i] != permutation[i])
                isEqual = false;
        }
        cnt++;
        if (isEqual) {
            b = cnt;
            break;
        }
    } while (next_permutation(permutation, permutation + n));
    cout << abs(a - b) << endl;

}
