#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    string s;
    stack<string> st;
    st.push(s);
    while (q--) {
        int query;
        cin >> query;
        if (query == 1) {
            string w;
            cin >> w;
            s.append(w);
            st.push(s);
        } else if (query == 2) {
            int k;
            cin >> k;
            while (k--)
                s.pop_back();
            st.push(s);
        } else if (query == 3) {
            int k;
            cin >> k;
            k--;
            cout << s[k] << endl;
        } else {
            st.pop();
            s = st.top();
        }
    }
}


