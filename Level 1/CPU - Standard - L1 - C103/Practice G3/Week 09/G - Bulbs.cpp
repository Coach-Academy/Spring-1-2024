#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> st;
    for (int i = 0; i < n; ++i) {
        int bulbs;
        cin >> bulbs;
        for (int j = 0; j < bulbs; ++j) {
            int x;
            cin >> x;
            st.insert(x);
        }
    }
    if (st.size() == m)
        cout << "YES\n";
    else
        cout << "NO\n";
}
