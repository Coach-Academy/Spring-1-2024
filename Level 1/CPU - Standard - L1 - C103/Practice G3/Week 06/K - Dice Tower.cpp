#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int top;
    cin >> top;
    int opposite = 7 - top;
    bool ans = true;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        if (l == top or l == opposite or r == top or r == opposite)
            ans = false;
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}
