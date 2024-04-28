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
            int train;
            cin >> train;
            st.insert(train);
        }
        int cancelled = 0;
        for (int i = 0; i < m; ++i) {
            int train;
            cin >> train;
            if (st.count(train))
                cancelled++;
        }
        cout << cancelled << endl;
    }
}
