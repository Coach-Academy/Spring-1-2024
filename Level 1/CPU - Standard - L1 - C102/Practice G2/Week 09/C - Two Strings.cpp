#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        set<char> st;
        string s1, s2;
        cin >> s1 >> s2;
        for (auto &s: s1)
            st.insert(s);
        bool ans = false;
        for (auto &s: s2) {
            if (st.count(s)) {
                ans = true;
            }
        }
        if (ans)
            cout << "YES\n";
        else cout << "NO\n";


    }
}
