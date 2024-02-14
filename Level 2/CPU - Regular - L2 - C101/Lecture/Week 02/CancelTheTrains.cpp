#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        set <int> st;
        while(n--) {
            int x; cin >> x;
            st.insert(x);
        }
        int ans = 0;
        while(m--) {
            int x; cin >> x;
            ans+=st.count(x);
        }
        cout << ans << '\n';
    }
    return 0;
}
