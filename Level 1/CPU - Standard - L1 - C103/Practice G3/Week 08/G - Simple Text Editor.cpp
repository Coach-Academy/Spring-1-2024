#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    string s;
    stack<string> st;
    st.push("");
    while (q--) {
        int query;
        cin >> query;
        if (query == 1) {
            string in;
            cin >> in;
            s.append(in);
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
            cout << s[k - 1] << endl;
        } else {
            st.pop();
            s = st.top();
        }
    }
}

//8
//1 abc
//3 3
//2 3
//1 xy
//3 2
//4
//4
//3 1
