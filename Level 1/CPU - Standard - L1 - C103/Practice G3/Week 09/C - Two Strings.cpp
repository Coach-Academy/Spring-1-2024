#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> st;
        for (int i = 0; i < s1.size(); ++i) {
            st.insert(s1[i]);
        }
        bool yes = false;
        for (int i = 0; i < s2.size(); ++i) {
            if (st.count(s2[i])) {
                yes = true;
            }
        }
        if (yes) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}
