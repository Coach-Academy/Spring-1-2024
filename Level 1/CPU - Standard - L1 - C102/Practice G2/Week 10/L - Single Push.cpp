#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> a(n), b(n);
        for (auto &s: a)
            cin >> s;
        for (auto &s: b)
            cin >> s;
        while (a.size() and a.front() == b.front())
            b.pop_front(), a.pop_front();
        while (a.size() and a.back() == b.back())
            b.pop_back(), a.pop_back();
        set<int> st;
        for (int i = 0; i < a.size(); ++i) {
            st.insert(b[i] - a[i]);
        }
        if ((st.size() == 1 and *st.begin() > 0))
            cout << "YES\n";
        else if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
