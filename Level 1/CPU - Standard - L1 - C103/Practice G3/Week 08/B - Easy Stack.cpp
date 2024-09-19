#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    int t;
    cin >> t;
    while (t--) {
        int query;
        cin >> query;
        if (query == 1) {
            int n;
            cin >> n;
            st.push(n);
        } else if (query == 2) {
            if (!st.empty())
                st.pop();
        } else {
            if (st.empty())
                cout << "Empty!\n";
            else
                cout << st.top() << '\n';
        }
    }
}//
