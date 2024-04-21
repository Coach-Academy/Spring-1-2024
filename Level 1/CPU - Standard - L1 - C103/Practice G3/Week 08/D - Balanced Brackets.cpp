#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        string ans = "YES";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '[' or s[i] == '{' or s[i] == '(') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    if (st.top() == '(') {
                        if (s[i] == ')') {
                            st.pop();
                        } else {
                            ans = "NO";
                        }
                    } else if (st.top() == '[') {
                        if (s[i] == ']') {
                            st.pop();
                        } else {
                            ans = "NO";
                        }
                    } else if (st.top() == '{') {
                        if (s[i] == '}') {
                            st.pop();
                        } else {
                            ans = "NO";
                        }
                    }
                } else {
                    ans = "NO";
                }
            }
        }
        if (st.size())
            ans = "NO";
        cout << ans << endl;
    }
}
