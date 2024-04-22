#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (!st.empty() and s[i] == st.top()) {
            st.pop();
        } else
            st.push(s[i]);
    }
    if (st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
}
