#include <bits/stdc++.h>

using namespace std;

int ans = -1;

void solve(int n, int m, int cnt) {
    if (n == m) {
        ans = cnt;
        return;
    }
    if (m < n)
        return;
    if (m % 2 == 0)
        solve(n, m / 2, cnt + 1);
    if (m % 3 == 0)
        solve(n, m / 3, cnt + 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    solve(n, m, 0);
    cout << ans << endl;
}
