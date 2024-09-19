#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        set<int> st;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            int line;
            cin >> line;
            st.insert(line);
        }
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int line;
            cin >> line;
            if (!st.insert(line).second) {
                ans++;
            }
        }
        cout << ans << endl;

    }
}
