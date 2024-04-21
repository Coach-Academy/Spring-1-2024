#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (!st.empty()) {
            if (st.top() == s[i]) {
                st.pop();
            } else
                st.push(s[i]);
        } else
            st.push(s[i]);
    }
    if (st.empty()) {
        cout << "YES\n";
    } else
        cout << "NO\n";
}
