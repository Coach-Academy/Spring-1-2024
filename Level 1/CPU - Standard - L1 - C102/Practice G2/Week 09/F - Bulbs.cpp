#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> st;
    for (int i = 0; i < n; ++i) {
        int numOfBulbs;
        cin >> numOfBulbs;
        for (int j = 0; j < numOfBulbs; ++j) {
            int bulb;
            cin >> bulb;
            st.insert(bulb);
        }
    }
    if (st.size() == m)
        cout << "YES\n";
    else
        cout << "NO\n";
}

