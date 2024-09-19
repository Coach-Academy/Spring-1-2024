#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, r;
        cin >> n >> r;
        set<int, greater<>> st;
        for (int i = 0; i < n; ++i) {
            int s;
            cin >> s;
            st.insert(s);
        }
        int missiles = 0;
        for (auto &s: st) {
            if (s - missiles * r > 0) {
                missiles++;
            }
        }
        cout << missiles << endl;
    }
}
