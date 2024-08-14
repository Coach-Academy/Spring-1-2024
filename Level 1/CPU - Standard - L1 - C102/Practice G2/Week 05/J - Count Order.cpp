#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int perm[n];
    for (int i = 0; i < n; ++i) {
        perm[i] = i + 1;
    }
    int p[n], q[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }
    int pos = 1;
    int a, b;
    do {
        bool isEqualP = true;
        for (int i = 0; i < n; ++i) {
            if (p[i] != perm[i])
                isEqualP = false;
        }
        if (isEqualP)
            a = pos;
        bool isEqualQ = true;
        for (int i = 0; i < n; ++i) {
            if (q[i] != perm[i])
                isEqualQ = false;
        }
        if (isEqualQ)
            b = pos;
        pos++;
    } while (next_permutation(perm, perm + n));
    cout << abs(a - b) << endl;
}
