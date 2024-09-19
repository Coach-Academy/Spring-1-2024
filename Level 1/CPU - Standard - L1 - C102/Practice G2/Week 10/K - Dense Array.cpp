#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < v.size() - 1; ++i) {
            int mn = min(v[i], v[i + 1]), mx = max(v[i], v[i + 1]);
            while (mn * 2 < mx) {
                ans++;
                mn *= 2;
            }
        }
        cout << ans << endl;
    }
}
